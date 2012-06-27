/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UITouch, NSTimer;

@interface MPTapGestureRecognizer : XXUnknownSuperclass {
@private
	unsigned _lastTapCount;
	CGPoint _tapLocation;
	UITouch* _trackingTouch;
	NSTimer* _tapHandleTimer;
}
@property(assign) unsigned tapCount;	// @synthesize=_lastTapCount
-(id)initWithTarget:(id)target action:(SEL)action;
-(void)_delayedHandleTaps:(id)taps;
-(void)_resetTapTimer;
-(void)_setTapTimerWithDuration:(double)duration;
-(void)dealloc;
-(CGPoint)locationInView:(id)view;
-(void)reset;
// declared property setter: -(void)setTapCount:(unsigned)count;
// declared property getter: -(unsigned)tapCount;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
@end

