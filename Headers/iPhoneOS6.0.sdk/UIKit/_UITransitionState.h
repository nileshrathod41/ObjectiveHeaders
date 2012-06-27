/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate;

__attribute__((visibility("hidden")))
@interface _UITransitionState : XXUnknownSuperclass {
@private
	int _transitionDirection;
	id _completion;
	NSDate* _beginDate;
}
@property(readonly, assign, nonatomic, getter=isActive) BOOL active;
@property(readonly, assign, nonatomic) NSDate* beginDate;	// @synthesize=_beginDate
@property(readonly, assign, nonatomic) int effectiveTransitionDirection;
@property(readonly, assign, nonatomic) int transitionDirection;	// @synthesize=_transitionDirection
-(id)initWithTransitionDirection:(int)transitionDirection completion:(id)completion;
// declared property getter: -(id)beginDate;
-(void)cleanupWithFinishedState:(BOOL)finishedState completedState:(BOOL)state;
-(void)dealloc;
-(id)description;
// declared property getter: -(int)effectiveTransitionDirection;
// declared property getter: -(BOOL)isActive;
-(BOOL)isCompatibleWithTransitionInDirection:(int)direction;
-(void)markBeginDate;
// declared property getter: -(int)transitionDirection;
@end

