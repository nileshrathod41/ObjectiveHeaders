/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, CALayer;
@protocol CAStateControllerDelegate;

@interface CAStateController : XXUnknownSuperclass {
@private
	CAStateControllerData* _data;
}
@property(assign) NSObject<CAStateControllerDelegate>* delegate;
@property(readonly, assign) CALayer* layer;
-(id)initWithLayer:(id)layer;
-(void)_addAnimation:(id)animation forKey:(id)key target:(id)target undo:(id)undo;
-(void)_applyTransition:(id)transition layer:(id)layer undo:(id)undo speed:(float)speed;
-(void)_applyTransitionElement:(id)element layer:(id)layer undo:(id)undo speed:(float)speed;
-(void)_nextStateTimer:(id)timer;
-(void)_removeTransition:(id)transition layer:(id)layer;
-(void)cancelTimers;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(id)layer;
-(id)removeAllStateChanges;
-(void)restoreStateChanges:(id)changes;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setInitialStatesOfLayer:(id)layer;
-(void)setInitialStatesOfLayer:(id)layer transitionSpeed:(float)speed;
-(void)setState:(id)state ofLayer:(id)layer;
-(void)setState:(id)state ofLayer:(id)layer transitionSpeed:(float)speed;
-(id)stateOfLayer:(id)layer;
@end

