/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKObject.h"

@class NSArray, EKRecurrenceEnd, NSString;

@interface EKRecurrenceRule : EKObject <NSCopying> {
@private
	EKRecurrenceEnd* _cachedEnd;
}
@property(retain, nonatomic) EKRecurrenceEnd* cachedEnd;	// @synthesize=_cachedEnd
@property(readonly, assign, nonatomic) NSString* calendarIdentifier;
@property(readonly, assign, nonatomic) NSArray* daysOfTheMonth;
@property(readonly, assign, nonatomic) NSArray* daysOfTheWeek;
@property(readonly, assign, nonatomic) NSArray* daysOfTheYear;
@property(readonly, assign, nonatomic) int firstDayOfTheWeek;
@property(readonly, assign, nonatomic) int frequency;
@property(readonly, assign, nonatomic) int interval;
@property(readonly, assign, nonatomic) NSArray* monthsOfTheYear;
@property(copy, nonatomic) EKRecurrenceEnd* recurrenceEnd;
@property(readonly, assign, nonatomic) NSArray* setPositions;
@property(readonly, assign, nonatomic) NSArray* weeksOfTheYear;
+(id)iCalendarValueFromDate:(id)date isDateOnly:(BOOL)only isFloating:(BOOL)floating;
+(id)iCalendarValueFromDayOfTheWeek:(unsigned)theWeek;
+(id)iCalendarValueFromRecurrenceType:(int)recurrenceType;
+(id)recurrenceRuleWithType:(int)type interval:(unsigned)interval end:(id)end;
-(id)init;
-(id)initRecurrenceWithFrequency:(int)frequency interval:(int)interval daysOfTheWeek:(id)theWeek daysOfTheMonth:(id)theMonth monthsOfTheYear:(id)theYear weeksOfTheYear:(id)theYear6 daysOfTheYear:(id)theYear7 setPositions:(id)positions end:(id)end;
-(id)initRecurrenceWithFrequency:(int)frequency interval:(int)interval end:(id)end;
-(id)UUID;
-(id)_persistentRule;
// declared property getter: -(id)cachedEnd;
-(id)cachedEndDate;
// declared property getter: -(id)calendarIdentifier;
-(id)copyWithZone:(NSZone*)zone;
// declared property getter: -(id)daysOfTheMonth;
// declared property getter: -(id)daysOfTheWeek;
// declared property getter: -(id)daysOfTheYear;
-(void)dealloc;
-(id)description;
-(BOOL)dirtyStateMayAffectExceptionDates;
// declared property getter: -(int)firstDayOfTheWeek;
// declared property getter: -(int)frequency;
-(XXStruct_mY3THC)gregorianUnits;
// declared property getter: -(int)interval;
-(id)lazyLoadRelationForKey:(id)key;
-(BOOL)mayOccurAfterDate:(id)date;
// declared property getter: -(id)monthsOfTheYear;
-(id)owner;
// declared property getter: -(id)recurrenceEnd;
-(void)reset;
// declared property setter: -(void)setCachedEnd:(id)end;
-(void)setDaysOfTheMonth:(id)theMonth;
-(void)setDaysOfTheWeek:(id)theWeek;
-(void)setDaysOfTheYear:(id)theYear;
-(void)setFirstDayOfTheWeek:(unsigned)theWeek;
-(void)setFrequency:(int)frequency;
-(void)setInterval:(int)interval;
-(void)setMonthsOfTheYear:(id)theYear;
// declared property getter: -(id)setPositions;
// declared property setter: -(void)setRecurrenceEnd:(id)end;
-(void)setSetPositions:(id)positions;
-(void)setWeeksOfTheYear:(id)theYear;
-(BOOL)shouldPinMonthDays;
-(id)stringValueAsDateOnly:(BOOL)only isFloating:(BOOL)floating;
// declared property getter: -(id)weeksOfTheYear;
@end

