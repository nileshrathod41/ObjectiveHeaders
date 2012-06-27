/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIKeyboardEmojiInputController, UITouch, NSArray, UIKeyboardEmojiView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiPage : UIView {
@private
	NSArray* _emoji;
	int _numRows;
	int _numCols;
	int _numPages;
	CGPoint _emojiPadding;
	CGPoint _margin;
	CGSize _emojiSize;
	CGRect _keyActivationRect;
	UITouch* _activeTouch;
	BOOL _needsLayout;
	BOOL _needsEmojiRendering;
	UIKeyboardEmojiView* _touched;
	UIKeyboardEmojiView* _pendingDisplay;
	UIKeyboardEmojiView* _onDisplay;
	UIKeyboardEmojiInputController* _inputController;
}
@property(retain) UITouch* activeTouch;	// @synthesize=_activeTouch
@property(retain) NSArray* emoji;	// @synthesize=_emoji
@property(readonly, assign, nonatomic) int emojiCountPerPage;
@property(assign) UIKeyboardEmojiInputController* inputController;	// @synthesize=_inputController
@property(assign) CGRect keyActivationRect;	// @synthesize=_keyActivationRect
@property(retain) UIKeyboardEmojiView* onDisplay;	// @synthesize=_onDisplay
@property(retain) UIKeyboardEmojiView* pendingDisplay;	// @synthesize=_pendingDisplay
@property(retain) UIKeyboardEmojiView* touched;	// @synthesize=_touched
-(id)initWithFrame:(CGRect)frame;
// declared property getter: -(id)activeTouch;
-(void)cancelPendingPopupChanges;
-(void)checkForStalePopup:(id)stalePopup;
-(id)closestForPoint:(CGPoint)point;
-(void)deactivatePopUps;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(id)emoji;
// declared property getter: -(int)emojiCountPerPage;
-(CGRect)emojiRectForPoint:(CGPoint)point index:(unsigned*)index;
-(void)generateSubviews;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
// declared property getter: -(id)inputController;
// declared property getter: -(CGRect)keyActivationRect;
// declared property getter: -(id)onDisplay;
// declared property getter: -(id)pendingDisplay;
-(CGRect)rectForRow:(int)row Col:(int)col;
-(void)removeDisplayedPopup:(id)popup;
-(void)removeFromSuperview;
// declared property setter: -(void)setActiveTouch:(id)touch;
// declared property setter: -(void)setEmoji:(id)emoji;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setInputController:(id)controller;
// declared property setter: -(void)setKeyActivationRect:(CGRect)rect;
// declared property setter: -(void)setOnDisplay:(id)display;
// declared property setter: -(void)setPendingDisplay:(id)display;
// declared property setter: -(void)setTouched:(id)touched;
-(void)showPendingPopup:(id)popup;
-(int)takeEmoji:(id)emoji fromIndex:(int)index;
-(void)touchBegan:(id)began;
-(void)touchCancelled:(id)cancelled;
-(void)touchEnded:(id)ended;
-(void)touchMoved:(id)moved;
// declared property getter: -(id)touched;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)updateLayoutConstants;
@end

