/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPersistentCalendarItem.h"

@class NSURL, NSDate, NSString;

@interface EKPersistentEvent : EKPersistentCalendarItem {
	XXStruct_mY3THC _cachedDurationUnits;
}
@property(copy, nonatomic) NSURL* URL;
@property(assign, nonatomic) int availability;
@property(readonly, assign, nonatomic) int birthdayID;
@property(readonly, assign, nonatomic) double duration;
@property(readonly, assign, nonatomic) XXStruct_mY3THC durationUnits;
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;
@property(copy, nonatomic) NSDate* endDate;
@property(readonly, assign, nonatomic) NSString* eventIdentifier;
@property(readonly, assign, nonatomic, getter=isFloating) BOOL floating;
@property(readonly, assign, nonatomic, getter=isInvitation) BOOL invitation;
@property(readonly, assign, nonatomic) unsigned invitationChangedProperties;
@property(assign, nonatomic) unsigned invitationStatus;
@property(readonly, assign, nonatomic, getter=isMeeting) BOOL meeting;
@property(assign, nonatomic) unsigned modifiedProperties;
@property(assign, nonatomic) BOOL needsOccurrenceCacheUpdate;
@property(copy, nonatomic) NSDate* originalStartDate;
@property(assign, nonatomic) int participationStatus;
@property(readonly, assign, nonatomic) int pendingParticipationStatus;
@property(assign, nonatomic) unsigned privacyLevel;
@property(copy, nonatomic) NSString* responseComment;
@property(assign, nonatomic) int status;
+(id)defaultPropertiesToLoad;
+(id)generateUniqueIDWithEvent:(id)event originalEvent:(id)event2 calendar:(id)calendar;
+(id)relations;
-(id)initCommon;
// declared property getter: -(id)URL;
-(void)_adjustForNewCalendar;
-(BOOL)_areDurationUnitsCached;
-(BOOL)_hasExternalIDOrDeliverySource;
-(void)_invalidateCachedDurationUnits;
-(id)actions;
-(void)addAction:(id)action;
-(BOOL)allowsParticipationStatusModifications;
// declared property getter: -(int)availability;
// declared property getter: -(int)birthdayID;
-(int)birthdayId;
-(void)clearExceptionDatesAndUpdateDetachedOriginalDates;
-(id)committedStartDate;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)deleteFromOccurrenceDateOnward:(id)occurrenceDateOnward;
-(id)description;
-(id)detachWithStartDate:(id)startDate newStartDate:(id)date future:(BOOL)future;
// declared property getter: -(double)duration;
// declared property getter: -(XXStruct_mY3THC)durationUnits;
// declared property getter: -(id)endDate;
-(int)entityType;
// declared property getter: -(id)eventIdentifier;
-(id)exportToICS;
-(void)filterExceptionDates;
-(BOOL)hasValidEventAction;
// declared property getter: -(unsigned)invitationChangedProperties;
// declared property getter: -(unsigned)invitationStatus;
// declared property getter: -(BOOL)isEditable;
// declared property getter: -(BOOL)isFloating;
// declared property getter: -(BOOL)isInvitation;
// declared property getter: -(BOOL)isMeeting;
// declared property getter: -(unsigned)modifiedProperties;
// declared property getter: -(BOOL)needsOccurrenceCacheUpdate;
-(id)organizer;
// declared property getter: -(id)originalStartDate;
// declared property getter: -(int)participationStatus;
// declared property getter: -(int)pendingParticipationStatus;
-(void)primitiveValueChangedForKey:(id)key;
// declared property getter: -(unsigned)privacyLevel;
-(BOOL)refresh;
-(void)removeAction:(id)action;
// declared property getter: -(id)responseComment;
-(BOOL)responseMustApplyToAll;
-(void)setActions:(id)actions;
// declared property setter: -(void)setAvailability:(int)availability;
// declared property setter: -(void)setEndDate:(id)date;
// declared property setter: -(void)setInvitationStatus:(unsigned)status;
// declared property setter: -(void)setModifiedProperties:(unsigned)properties;
// declared property setter: -(void)setNeedsOccurrenceCacheUpdate:(BOOL)update;
// declared property setter: -(void)setOriginalStartDate:(id)date;
// declared property setter: -(void)setParticipationStatus:(int)status;
// declared property setter: -(void)setPrivacyLevel:(unsigned)level;
// declared property setter: -(void)setResponseComment:(id)comment;
// declared property setter: -(void)setStatus:(int)status;
// declared property setter: -(void)setURL:(id)url;
// declared property getter: -(int)status;
-(BOOL)validate:(id*)validate;
@end

