/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSArray, NSDate, NSString, EKRecurrenceEnd, EKPersistentCalendarItem;

@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying> {
@private
	id _helper;
	EKRecurrenceEnd* _recurrenceEnd;
}
@property(readonly, assign, nonatomic) NSString* UUID;
@property(readonly, assign, nonatomic) NSString* calendarIdentifier;
@property(assign, nonatomic) int count;
@property(copy, nonatomic) NSArray* daysOfTheMonth;
@property(copy, nonatomic) NSArray* daysOfTheWeek;
@property(copy, nonatomic) NSArray* daysOfTheYear;
@property(copy, nonatomic) NSDate* endDate;
@property(assign, nonatomic) int firstDayOfTheWeek;
@property(assign, nonatomic) int frequency;
@property(assign, nonatomic) int interval;
@property(copy, nonatomic) NSArray* monthsOfTheYear;
@property(retain, nonatomic) EKPersistentCalendarItem* owner;
@property(copy, nonatomic) NSArray* setPositions;
@property(readonly, assign, nonatomic) BOOL shouldPinMonthDays;
@property(copy, nonatomic) NSArray* weeksOfTheYear;
+(id)relations;
-(id)init;
// declared property getter: -(id)UUID;
-(id)_helper;
-(id)cachedEndDate;
// declared property getter: -(id)calendarIdentifier;
-(id)copyWithZone:(NSZone*)zone;
// declared property getter: -(int)count;
// declared property getter: -(id)daysOfTheMonth;
// declared property getter: -(id)daysOfTheWeek;
// declared property getter: -(id)daysOfTheYear;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)endDate;
-(int)entityType;
// declared property getter: -(int)firstDayOfTheWeek;
// declared property getter: -(int)frequency;
-(XXStruct_mY3THC)gregorianUnits;
// declared property getter: -(int)interval;
-(BOOL)isDirty;
// declared property getter: -(id)monthsOfTheYear;
// declared property getter: -(id)owner;
// declared property setter: -(void)setCount:(int)count;
// declared property setter: -(void)setDaysOfTheMonth:(id)theMonth;
// declared property setter: -(void)setDaysOfTheWeek:(id)theWeek;
// declared property setter: -(void)setDaysOfTheYear:(id)theYear;
// declared property setter: -(void)setEndDate:(id)date;
// declared property setter: -(void)setFirstDayOfTheWeek:(int)theWeek;
// declared property setter: -(void)setFrequency:(int)frequency;
// declared property setter: -(void)setInterval:(int)interval;
// declared property setter: -(void)setMonthsOfTheYear:(id)theYear;
// declared property setter: -(void)setOwner:(id)owner;
// declared property getter: -(id)setPositions;
// declared property setter: -(void)setSetPositions:(id)positions;
// declared property setter: -(void)setWeeksOfTheYear:(id)theYear;
// declared property getter: -(BOOL)shouldPinMonthDays;
-(BOOL)validate:(id*)validate;
// declared property getter: -(id)weeksOfTheYear;
@end
