/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class UIKeyboard, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : XXUnknownSuperclass {
@private
	UIView* _inputView;
	UIView* _inputAccessoryView;
	BOOL _isKeyboard;
	BOOL _supportsSplit;
	BOOL _isSplit;
	float _splitHeightDelta;
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;
@property(retain, nonatomic) UIView* inputAccessoryView;	// @synthesize=_inputAccessoryView
@property(readonly, assign, nonatomic) CGRect inputAccessoryViewBounds;
@property(retain, nonatomic) UIView* inputView;	// @synthesize=_inputView
@property(readonly, assign, nonatomic) CGRect inputViewBounds;
@property(readonly, assign, nonatomic) BOOL inputViewKeyboardCanSplit;
@property(readonly, assign, nonatomic) BOOL isSplit;	// @synthesize=_isSplit
@property(readonly, assign, nonatomic) UIKeyboard* keyboard;
@property(readonly, assign, nonatomic) UIView* layeringView;
@property(assign, nonatomic) float splitHeightDelta;	// @synthesize=_splitHeightDelta
@property(readonly, assign, nonatomic) BOOL supportsSplit;	// @synthesize=_supportsSplit
+(id)emptyInputSet;
+(id)inputSetWithInputView:(id)inputView accessoryView:(id)view;
+(id)inputSetWithKeyboardAndAccessoryView:(id)keyboardAndAccessoryView;
-(id)initWithInputView:(id)inputView accessoryView:(id)view isKeyboard:(BOOL)keyboard;
-(BOOL)__isCKAccessoryView;
-(void)_beginSplitTransitionIfNeeded;
-(void)_endSplitTransitionIfNeeded;
-(BOOL)_inputAccessoryViewSupportsSplit;
-(BOOL)_inputViewSetSupportsSplit;
-(BOOL)_inputViewSupportsSplit;
-(CGRect)_leftInputViewSetFrame;
-(CGRect)_rightInputViewSetFrame;
-(void)_setSplitProgress:(float)progress;
-(id)_splittableInputAccessoryView;
-(BOOL)canAnimateToInputViewSet:(id)inputViewSet;
-(BOOL)containsResponder:(id)responder;
-(void)dealloc;
-(id)description;
-(BOOL)inSyncWithOrientation:(int)orientation forKeyboard:(id)keyboard;
// declared property getter: -(id)inputAccessoryView;
// declared property getter: -(CGRect)inputAccessoryViewBounds;
// declared property getter: -(id)inputView;
// declared property getter: -(CGRect)inputViewBounds;
// declared property getter: -(BOOL)inputViewKeyboardCanSplit;
// declared property getter: -(BOOL)isEmpty;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(BOOL)isSplit;
-(BOOL)isStrictSupersetOfViewSet:(id)viewSet;
// declared property getter: -(id)keyboard;
-(int)keyboardOrientation:(id)orientation;
// declared property getter: -(id)layeringView;
-(void)refreshPresentation;
// declared property setter: -(void)setInputAccessoryView:(id)view;
// declared property setter: -(void)setInputView:(id)view;
// declared property setter: -(void)setSplitHeightDelta:(float)delta;
// declared property getter: -(float)splitHeightDelta;
// declared property getter: -(BOOL)supportsSplit;
-(BOOL)usesKeyClicks;
-(BOOL)visible;
@end
