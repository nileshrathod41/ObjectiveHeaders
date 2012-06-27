/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIDynamicAnimation.h"
#import "UIKit-Structs.h"

@class NSArray, NSMutableArray;

@interface _UIDynamicAnimationGroup : _UIDynamicAnimation {
@private
	id _applier;
	NSMutableArray* _animations;
	NSMutableArray* _runningAnimations;
}
@property(copy, nonatomic) NSArray* animations;	// @synthesize=_animations
-(BOOL)_animateForInterval:(double)interval;
-(void)_appendSubclassDescription:(id)description atLevel:(int)level;
-(void)_stopAnimation;
-(void)addAnimation:(id)animation;
// declared property getter: -(id)animations;
-(void)dealloc;
-(void)removeAnimation:(id)animation;
-(void)runWithCompletion:(id)completion;
-(void)runWithGroupApplier:(id)groupApplier completion:(id)completion;
-(void)runWithGroupApplier:(id)groupApplier completion:(id)completion forScreen:(id)screen runLoopMode:(id)mode;
// declared property setter: -(void)setAnimations:(id)animations;
@end

