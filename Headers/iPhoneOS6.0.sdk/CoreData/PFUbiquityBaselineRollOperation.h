/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityBaselineOperation.h"

@class NSObject;
@protocol PFUbiquityBaselineRollOperationDelegate;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
}
@property(assign) NSObject<PFUbiquityBaselineRollOperationDelegate>* delegate;
// declared property getter: -(id)delegate;
-(BOOL)haveConsistentStateForBaselineRoll;
-(BOOL)isEqual:(id)equal;
-(void)main;
-(BOOL)rollBaselineWithError:(id*)error;
// declared property setter: -(void)setDelegate:(id)delegate;
@end

