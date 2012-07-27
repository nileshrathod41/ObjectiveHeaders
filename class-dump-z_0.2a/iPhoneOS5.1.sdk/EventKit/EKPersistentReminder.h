/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentCalendarItem.h"
#import "EventKit-Structs.h"

@class NSDate, NSString, NSTimeZone;

@interface EKPersistentReminder : EKPersistentCalendarItem {
@private
	NSString* _parentUUID;
}
@property(assign, nonatomic, getter=isCompleted) BOOL completed;
@property(copy, nonatomic) NSDate* completionDate;
@property(copy, nonatomic) NSDate* dueDate;
@property(assign, nonatomic) BOOL dueDateAllDay;
@property(copy, nonatomic) NSTimeZone* dueDateTimeZone;
@property(copy, nonatomic) NSString* parentUUID;	// @synthesize=_parentUUID
+(id)defaultPropertiesToLoad;
+(id)generateUniqueIDWithReminder:(id)reminder calendar:(id)calendar;
-(void)_sendModifiedNote;
// declared property getter: -(id)completionDate;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)dueDate;
// declared property getter: -(BOOL)dueDateAllDay;
// declared property getter: -(id)dueDateTimeZone;
-(int)entityType;
-(id)externalURI;
// declared property getter: -(BOOL)isCompleted;
// declared property getter: -(id)parentUUID;
// declared property setter: -(void)setCompleted:(BOOL)completed;
// declared property setter: -(void)setCompletionDate:(id)date;
// declared property setter: -(void)setDueDate:(id)date;
// declared property setter: -(void)setDueDateAllDay:(BOOL)day;
// declared property setter: -(void)setDueDateTimeZone:(id)zone;
// declared property setter: -(void)setParentUUID:(id)uuid;
-(BOOL)validate:(id*)validate;
@end

