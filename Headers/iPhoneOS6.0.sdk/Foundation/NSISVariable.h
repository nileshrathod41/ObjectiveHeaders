/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>

@protocol NSISVariableDelegate;

@interface NSISVariable : NSObject {
	int _refCount;
	id<NSISVariableDelegate> _delegate;
}
@property(assign) id<NSISVariableDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign) BOOL shouldBeMinimized;
@property(readonly, assign) int valueRestriction;
+(id)variableMarkingConstraint:(id)constraint valueRestriction:(int)restriction shouldBeMinimized:(BOOL)minimized;
+(id)variableWithDelegate:(id)delegate valueRestriction:(int)restriction shouldBeMinimized:(BOOL)minimized;
+(id)variableWithName:(id)name valueRestriction:(int)restriction shouldBeMinimized:(BOOL)minimized;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(float)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
// declared property getter: -(id)delegate;
-(id)description;
-(id)markedConstraint;
-(BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
// declared property setter: -(void)setDelegate:(id)delegate;
-(BOOL)shouldBeIntegral;
// declared property getter: -(BOOL)shouldBeMinimized;
-(BOOL)valueIsUserVisible;
// declared property getter: -(int)valueRestriction;
@end

