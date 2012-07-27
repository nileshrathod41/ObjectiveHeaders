/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAnimation.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface UIAnimation : XXUnknownSuperclass {
	id _target;
	SEL _action;
	id _delegate;
	id _completion;
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned reserved : 27;
	} _animationFlags;
@private
	double _startTime;
	double _duration;
	int _state;
}
-(id)initWithTarget:(id)target;
-(SEL)action;
-(id)completion;
-(void)dealloc;
-(id)delegate;
-(float)progressForFraction:(float)fraction;
-(void)setAction:(SEL)action;
-(void)setAnimationCurve:(int)curve;
-(void)setCompletion:(id)completion;
-(void)setDelegate:(id)delegate;
-(void)setProgress:(float)progress;
-(void)stopAnimation;
-(id)target;
@end

@interface UIAnimation (Internal)
-(float)fractionForTime:(double)time;
-(void)markStart:(double)start;
-(void)markStop;
-(void)setDuration:(double)duration;
-(int)state;
-(BOOL)tvOutput;
@end
