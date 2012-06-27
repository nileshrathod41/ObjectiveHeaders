/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UITouch, UIEvent;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedTouch : XXUnknownSuperclass <NSCopying> {
@private
	UITouch* _touch;
	UITouch* _stateWhenDelayed;
	UITouch* _stateWhenDelivered;
	UIEvent* _event;
	int _delayCount;
	BOOL _cloneForSecondDelivery;
}
@property(assign) BOOL cloneForSecondDelivery;	// @synthesize=_cloneForSecondDelivery
@property(retain) UIEvent* event;	// @synthesize=_event
@property(retain) UITouch* stateWhenDelayed;	// @synthesize=_stateWhenDelayed
@property(retain) UITouch* stateWhenDelivered;	// @synthesize=_stateWhenDelivered
@property(retain) UITouch* touch;	// @synthesize=_touch
-(id)init;
// declared property getter: -(BOOL)cloneForSecondDelivery;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(int)decrementDelayCount;
-(int)delayCount;
-(id)description;
// declared property getter: -(id)event;
-(void)incrementDelayCount;
-(int)phaseForDelivery;
-(void)saveCurrentTouchState;
// declared property setter: -(void)setCloneForSecondDelivery:(BOOL)secondDelivery;
// declared property setter: -(void)setEvent:(id)event;
// declared property setter: -(void)setStateWhenDelayed:(id)delayed;
// declared property setter: -(void)setStateWhenDelivered:(id)delivered;
// declared property setter: -(void)setTouch:(id)touch;
// declared property getter: -(id)stateWhenDelayed;
// declared property getter: -(id)stateWhenDelivered;
-(double)timestampForDelivery;
// declared property getter: -(id)touch;
@end

