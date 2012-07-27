/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSDate, NSString;

@interface _EKInvitationItem : XXUnknownSuperclass {
@private
	NSString* _title;
	NSString* _location;
	NSString* _organizerName;
	NSDate* _startDate;
	NSDate* _endDate;
	BOOL _floating;
	BOOL _allDay;
	int _eventID;
	NSURL* _eventURI;
	int _status;
}
@property(readonly, assign, nonatomic) NSDate* endDate;	// @synthesize=_endDate
@property(readonly, assign, nonatomic) int eventID;	// @synthesize=_eventID
@property(readonly, assign, nonatomic) NSURL* eventURI;	// @synthesize=_eventURI
@property(readonly, assign, nonatomic) BOOL isAllDay;	// @synthesize=_allDay
@property(readonly, assign, nonatomic) BOOL isFloating;	// @synthesize=_floating
@property(readonly, assign, nonatomic) NSString* location;	// @synthesize=_location
@property(readonly, assign, nonatomic) NSString* organizerName;	// @synthesize=_organizerName
@property(readonly, assign, nonatomic) NSDate* startDate;	// @synthesize=_startDate
@property(readonly, assign, nonatomic) int status;	// @synthesize=_status
@property(readonly, assign, nonatomic) NSString* title;	// @synthesize=_title
-(id)initWithEvent:(id)event;
-(id)initWithTitle:(id)title location:(id)location organizerName:(id)name startDate:(id)date endDate:(id)date5 floating:(BOOL)floating allDay:(BOOL)day eventID:(int)anId eventURI:(id)uri status:(int)status;
-(void)dealloc;
// declared property getter: -(id)endDate;
// declared property getter: -(int)eventID;
// declared property getter: -(id)eventURI;
// declared property getter: -(BOOL)isAllDay;
// declared property getter: -(BOOL)isFloating;
// declared property getter: -(id)location;
// declared property getter: -(id)organizerName;
// declared property getter: -(id)startDate;
// declared property getter: -(int)status;
// declared property getter: -(id)title;
@end

