/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarNotification.h"

@class NSNumber, NSDate, NSString;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification {
	NSString* _location;
	NSString* _calendarName;
	NSDate* _startDate;
	NSDate* _endDate;
	BOOL _allDay;
	NSString* _eventID;
	unsigned _changeType;
	BOOL _dateChanged;
	BOOL _timeChanged;
	BOOL _locationChanged;
	BOOL _titleChanged;
	NSNumber* _createCount;
	NSNumber* _updateCount;
	NSNumber* _deleteCount;
}
@property(assign, nonatomic) BOOL allDay;	// @synthesize=_allDay
@property(retain, nonatomic) NSString* calendarName;	// @synthesize=_calendarName
@property(assign, nonatomic) unsigned changeType;	// @synthesize=_changeType
@property(retain, nonatomic) NSNumber* createCount;	// @synthesize=_createCount
@property(assign, nonatomic) BOOL dateChanged;	// @synthesize=_dateChanged
@property(retain, nonatomic) NSNumber* deleteCount;	// @synthesize=_deleteCount
@property(retain, nonatomic) NSDate* endDate;	// @synthesize=_endDate
@property(retain, nonatomic) NSString* eventID;	// @synthesize=_eventID
@property(retain, nonatomic) NSString* location;	// @synthesize=_location
@property(assign, nonatomic) BOOL locationChanged;	// @synthesize=_locationChanged
@property(retain, nonatomic) NSDate* startDate;	// @synthesize=_startDate
@property(assign, nonatomic) BOOL timeChanged;	// @synthesize=_timeChanged
@property(assign, nonatomic) BOOL titleChanged;	// @synthesize=_titleChanged
@property(retain, nonatomic) NSNumber* updateCount;	// @synthesize=_updateCount
-(id)initWithType:(int)type;
// declared property getter: -(BOOL)allDay;
// declared property getter: -(id)calendarName;
// declared property getter: -(unsigned)changeType;
// declared property getter: -(id)createCount;
// declared property getter: -(BOOL)dateChanged;
-(void)dealloc;
// declared property getter: -(id)deleteCount;
// declared property getter: -(id)endDate;
// declared property getter: -(id)eventID;
// declared property getter: -(id)location;
// declared property getter: -(BOOL)locationChanged;
-(id)resourceChangeFromEventStore:(id)eventStore;
// declared property setter: -(void)setAllDay:(BOOL)day;
// declared property setter: -(void)setCalendarName:(id)name;
// declared property setter: -(void)setChangeType:(unsigned)type;
// declared property setter: -(void)setCreateCount:(id)count;
// declared property setter: -(void)setDateChanged:(BOOL)changed;
// declared property setter: -(void)setDeleteCount:(id)count;
// declared property setter: -(void)setEndDate:(id)date;
// declared property setter: -(void)setEventID:(id)anId;
// declared property setter: -(void)setLocation:(id)location;
// declared property setter: -(void)setLocationChanged:(BOOL)changed;
// declared property setter: -(void)setStartDate:(id)date;
// declared property setter: -(void)setTimeChanged:(BOOL)changed;
// declared property setter: -(void)setTitleChanged:(BOOL)changed;
// declared property setter: -(void)setUpdateCount:(id)count;
// declared property getter: -(id)startDate;
// declared property getter: -(BOOL)timeChanged;
// declared property getter: -(BOOL)titleChanged;
// declared property getter: -(id)updateCount;
@end

