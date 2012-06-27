/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILongPressGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIDelayedAction, UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {
@private
	UIResponder<UITextInput>* _textInput;
	UIDelayedAction* _secondDelayTimer;
	double _secondDelay;
	BOOL _secondDelayElapsed;
	id _userData;
}
@property(assign, nonatomic) double secondDelay;	// @synthesize=_secondDelay
@property(readonly, assign, nonatomic) BOOL secondDelayElapsed;	// @synthesize=_secondDelayElapsed
@property(assign, nonatomic) UIResponder<UITextInput>* textInput;	// @synthesize=_textInput
@property(assign, nonatomic) id userData;	// @synthesize=_userData
-(void)_resetGestureRecognizer;
-(void)clearTimer;
// declared property getter: -(double)secondDelay;
// declared property getter: -(BOOL)secondDelayElapsed;
-(void)secondDelayElapsed:(id)elapsed;
// declared property setter: -(void)setSecondDelay:(double)delay;
-(void)setState:(int)state;
// declared property setter: -(void)setTextInput:(id)input;
// declared property setter: -(void)setUserData:(id)data;
-(void)startTimer;
// declared property getter: -(id)textInput;
// declared property getter: -(id)userData;
@end

