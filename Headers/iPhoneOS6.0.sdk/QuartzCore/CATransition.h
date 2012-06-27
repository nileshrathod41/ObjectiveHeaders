/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAAnimation.h"
#import "QuartzCore-Structs.h"

@class NSString, NSDictionary;

@interface CATransition : CAAnimation {
}
@property(assign) float endProgress;
@property(retain) id filter;
@property(copy) NSDictionary* options;
@property(assign) float startProgress;
@property(copy) NSString* subtype;
@property(assign) unsigned transitionFlags;
@property(copy) NSString* type;
-(Animation*)_copyRenderAnimationForLayer:(id)layer;
-(unsigned)_propertyFlagsForLayer:(id)layer;
-(BOOL)_setCARenderAnimation:(Animation*)animation layer:(id)layer;
// declared property getter: -(float)endProgress;
// declared property getter: -(id)filter;
// declared property getter: -(id)options;
// declared property setter: -(void)setEndProgress:(float)progress;
// declared property setter: -(void)setFilter:(id)filter;
// declared property setter: -(void)setOptions:(id)options;
// declared property setter: -(void)setStartProgress:(float)progress;
// declared property setter: -(void)setSubtype:(id)subtype;
// declared property setter: -(void)setTransitionFlags:(unsigned)flags;
// declared property setter: -(void)setType:(id)type;
// declared property getter: -(float)startProgress;
// declared property getter: -(id)subtype;
// declared property getter: -(unsigned)transitionFlags;
// declared property getter: -(id)type;
@end

