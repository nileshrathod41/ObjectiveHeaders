/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityBaselineRollOperationDelegate.h"


@protocol PFUbiquityBaselineRollResponseOperationDelegate <PFUbiquityBaselineRollOperationDelegate>
-(void)rollResponseOperation:(id)operation encounteredAnError:(id)error whileTryingToAdoptBaseline:(id)adoptBaseline;
-(void)rollResponseOperation:(id)operation successfullyAdoptedBaseline:(id)baseline;
@end

