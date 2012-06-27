/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CAStateRecorder.h"

@class CAState, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CAStateControllerUndo : XXUnknownSuperclass <CAStateRecorder> {
@private
	CAStateControllerUndo* _next;
	CAState* _state;
	NSMutableArray* _elements;
	NSMutableArray* _transitions;
}
@property(retain, nonatomic) NSMutableArray* elements;	// @synthesize=_elements
@property(readonly, assign) CAStateControllerUndo* next;	// @synthesize=_next
@property(retain, nonatomic) CAState* state;	// @synthesize=_state
@property(retain, nonatomic) NSMutableArray* transitions;	// @synthesize=_transitions
-(void)addElement:(id)element;
-(void)addTransition:(id)transition;
-(void)dealloc;
// declared property getter: -(id)elements;
// declared property getter: -(id)next;
// declared property setter: -(void)setElements:(id)elements;
// declared property setter: -(void)setState:(id)state;
// declared property setter: -(void)setTransitions:(id)transitions;
// declared property getter: -(id)state;
// declared property getter: -(id)transitions;
-(void)willAddLayer:(id)layer;
@end

