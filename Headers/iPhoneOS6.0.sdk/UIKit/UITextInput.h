/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyInput.h"
#import "UIKit-Structs.h"

@class UITextRange, NSDictionary, UITextPosition, UIView;
@protocol UITextInputDelegate, UITextInputTokenizer;

@protocol UITextInput <UIKeyInput>
@property(readonly, assign, nonatomic) UITextPosition* beginningOfDocument;
@property(readonly, assign, nonatomic) UITextPosition* endOfDocument;
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;
@property(readonly, assign, nonatomic) UITextRange* markedTextRange;
@property(copy, nonatomic) NSDictionary* markedTextStyle;
@property(copy) UITextRange* selectedTextRange;
@optional
@property(assign, nonatomic) int selectionAffinity;
@property(readonly, assign, nonatomic) UIView* textInputView;
@required
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;
-(int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;
// declared property getter: -(id)beginningOfDocument;
-(CGRect)caretRectForPosition:(id)position;
@optional
-(int)characterOffsetOfPosition:(id)position withinRange:(id)range;
@required
-(id)characterRangeAtPoint:(CGPoint)point;
-(id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;
-(id)closestPositionToPoint:(CGPoint)point;
-(id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;
-(int)comparePosition:(id)position toPosition:(id)position2;
@optional
-(void)dictationRecognitionFailed;
-(void)dictationRecordingDidEnd;
@required
// declared property getter: -(id)endOfDocument;
-(CGRect)firstRectForRange:(id)range;
@optional
-(CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;
@required
// declared property getter: -(id)inputDelegate;
@optional
-(void)insertDictationResult:(id)result;
-(id)insertDictationResultPlaceholder;
@required
// declared property getter: -(id)markedTextRange;
// declared property getter: -(id)markedTextStyle;
-(int)offsetFromPosition:(id)position toPosition:(id)position2;
-(id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;
-(id)positionFromPosition:(id)position offset:(int)offset;
@optional
-(id)positionWithinRange:(id)range atCharacterOffset:(int)characterOffset;
@required
-(id)positionWithinRange:(id)range farthestInDirection:(int)direction;
@optional
-(void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;
@required
-(void)replaceRange:(id)range withText:(id)text;
// declared property getter: -(id)selectedTextRange;
@optional
// declared property getter: -(int)selectionAffinity;
@required
-(id)selectionRectsForRange:(id)range;
-(void)setBaseWritingDirection:(int)direction forRange:(id)range;
// declared property setter: -(void)setInputDelegate:(id)delegate;
-(void)setMarkedText:(id)text selectedRange:(NSRange)range;
// declared property setter: -(void)setMarkedTextStyle:(id)style;
// declared property setter: -(void)setSelectedTextRange:(id)range;
@optional
// declared property setter: -(void)setSelectionAffinity:(int)affinity;
-(BOOL)shouldChangeTextInRange:(id)range replacementText:(id)text;
@required
-(id)textInRange:(id)range;
@optional
// declared property getter: -(id)textInputView;
@required
-(id)textRangeFromPosition:(id)position toPosition:(id)position2;
@optional
-(id)textStylingAtPosition:(id)position inDirection:(int)direction;
@required
// declared property getter: -(id)tokenizer;
-(void)unmarkText;
@end

