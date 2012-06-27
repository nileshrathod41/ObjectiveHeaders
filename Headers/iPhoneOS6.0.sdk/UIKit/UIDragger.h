/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class UIImageView, NSArray, UIView;

@interface UIDragger : XXUnknownSuperclass {
	/*function-pointer*/ void* _interpolator;
	UIView* _target;
	id _delegate;
	SEL _action;
	CGPoint _startLocation;
	CGPoint _stopLocation;
	double _duration;
	BOOL _showFinger;
	unsigned _port;
	NSArray* _modes;
	unsigned long long _startTimestamp;
	unsigned long long _stopTimestamp;
	unsigned long long _lastTimestamp;
	BOOL _waitingForSmoothScrolling;
	UIImageView* _fingerView;
}
-(id)init;
-(void)_continueDrag:(id)drag;
-(double)_delayUntilNextEvent;
-(void)_postMouseEvent:(int)event timestamp:(unsigned long long)timestamp location:(CGPoint)location;
-(void)_smoothScrollingDidEnd:(id)_smoothScrolling;
-(void)_smoothScrollingWillStart:(id)_smoothScrolling;
-(void)_stopDrag:(id)drag;
-(void)dealloc;
-(void)dragDidEnd;
-(void)run;
-(void)setAction:(SEL)action;
-(void)setDelegate:(id)delegate;
-(void)setDuration:(double)duration;
-(void)setInterpolation:(/*function-pointer*/ void*)interpolation;
-(void)setStartLocation:(CGPoint)location;
-(void)setStopLocation:(CGPoint)location;
-(void)setTarget:(id)target;
-(void)showFinger;
@end
