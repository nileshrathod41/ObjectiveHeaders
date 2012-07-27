/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKRemindersPredicate.h"

@class NSString;

@interface EKRemindersWithSearchTermPredicate : EKRemindersPredicate {
@private
	NSString* _searchTerm;
}
@property(readonly, assign, nonatomic) NSString* searchTerm;
+(id)predicateWithSearchTerm:(id)searchTerm;
-(id)initWithCoder:(id)coder;
-(id)initWithSearchTerm:(id)searchTerm;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(BOOL)evaluateWithObject:(id)object;
-(id)predicateFormat;
-(BOOL)queryLimitToCompletedOrIncomplete;
-(id)querySearchTerm;
// declared property getter: -(id)searchTerm;
@end
