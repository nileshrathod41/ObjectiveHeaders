/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class EKTimeZone;

@interface EKCalendarDate : XXUnknownSuperclass <NSCopying, NSMutableCopying> {
	XXStruct_lQVxyC _dateGr;
	double _dateAbs;
	EKTimeZone* _timeZone;
	unsigned _flags;
}
+(id)calendarDateWithAbsoluteTime:(double)absoluteTime timeZone:(id)zone;
+(id)calendarDateWithDate:(id)date timeZone:(id)zone;
+(id)calendarDateWithDateComponents:(id)dateComponents timeZone:(id)zone;
+(id)calendarDateWithGregorianDate:(XXStruct_lQVxyC)gregorianDate timeZone:(id)zone;
-(id)initWithAbsoluteTime:(double)absoluteTime internalTimeZone:(id)zone;
-(id)initWithAbsoluteTime:(double)absoluteTime timeZone:(id)zone;
-(id)initWithDate:(id)date timeZone:(id)zone;
-(id)initWithDateComponents:(id)dateComponents timeZone:(id)zone;
-(id)initWithGregorianDate:(XXStruct_lQVxyC)gregorianDate internalTimeZone:(id)zone;
-(id)initWithGregorianDate:(XXStruct_lQVxyC)gregorianDate timeZone:(id)zone;
-(double)absoluteTime;
-(id)calendarDateByAddingDays:(int)days;
-(id)calendarDateByAddingGregorianUnits:(XXStruct_mY3THC)units;
-(id)calendarDateByAddingWeeks:(int)weeks;
-(id)calendarDateForDay;
-(id)calendarDateForEndOfDay;
-(id)calendarDateForEndOfMonth;
-(id)calendarDateForEndOfWeekWithWeekStart:(unsigned)weekStart;
-(id)calendarDateForMonth;
-(id)calendarDateForWeekWithWeekStart:(unsigned)weekStart;
-(id)calendarDateForWeekWithWeekStart:(unsigned)weekStart daysSinceWeekStart:(int*)start;
-(id)calendarDateForYear;
-(id)calendarDateInTimeZone:(id)timeZone;
-(id)calendarDateWithDate:(id)date;
-(int)compare:(id)compare;
-(id)components;
-(id)copyWithZone:(NSZone*)zone;
-(id)date;
-(unsigned)day;
-(unsigned)dayOfWeek;
-(unsigned)dayOfYear;
-(unsigned)daysInMonth;
-(unsigned)daysInYear;
-(void)dealloc;
-(id)description;
-(XXStruct_mY3THC)differenceAsGregorianUnits:(id)units flags:(unsigned long)flags;
-(int)differenceInDays:(id)days;
-(int)differenceInMonths:(id)months;
-(int)differenceInYears:(id)years;
-(id)earlierDate:(id)date;
-(XXStruct_lQVxyC)gregorianDate;
-(unsigned)hour;
-(BOOL)isEqual:(id)equal;
-(id)laterDate:(id)date;
-(unsigned)minute;
-(unsigned)month;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(double)second;
-(int)secondsFromGMT;
-(id)timeZone;
-(unsigned)weekOfYear;
-(unsigned)weeksInYear;
-(unsigned)year;
@end

