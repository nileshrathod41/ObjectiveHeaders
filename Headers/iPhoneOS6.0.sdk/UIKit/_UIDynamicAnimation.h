/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface _UIDynamicAnimation : XXUnknownSuperclass {
@private
	id _completion;
	int _state;
	unsigned _began : 1;
	unsigned _running : 1;
	unsigned _yield : 1;
	unsigned _grouped : 1;
	unsigned _usesNSTimer : 1;
}
@property(readonly, assign, nonatomic) int state;
+(void)_updateAnimations:(id)animations;
+(void)_updateAnimations:(id)animations timer:(id)timer;
+(void)_updateAnimationsWithTimer:(id)timer;
+(id)dynamicAnimationForView:(id)view withInitialValue:(double)initialValue velocity:(double)velocity type:(int)type anchorPoint:(CGPoint)point;
-(id)init;
-(BOOL)_animateForInterval:(double)interval;
-(void)_appendDescriptionToString:(id)string atLevel:(int)level;
-(void)_appendSubclassDescription:(id)description atLevel:(int)level;
-(void)_callAppliers:(id)appliers additionalEndAppliers:(id)appliers2 done:(BOOL)done;
-(void)_cancelWithAppliers:(id)appliers;
-(BOOL)_isGrouped;
-(BOOL)_isRunning;
-(void)_setGrouped:(BOOL)grouped;
-(void)_setShouldYield:(BOOL)_set;
-(void)_setUsesNSTimer:(BOOL)timer;
-(BOOL)_shouldYield;
-(void)_stopAnimation;
-(BOOL)_usesNSTimer;
-(void)dealloc;
-(id)description;
-(void)runWithCompletion:(id)completion;
-(void)runWithCompletion:(id)completion forScreen:(id)screen runLoopMode:(id)mode;
// declared property getter: -(int)state;
-(void)stop;
@end
