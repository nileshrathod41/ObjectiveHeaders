/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPersistentParticipant.h"


@interface EKPersistentAttendee : EKPersistentParticipant {
}
@property(assign, nonatomic) int participantRole;
@property(assign, nonatomic) int participantStatus;
@property(assign, nonatomic) int participantType;
@property(assign, nonatomic) int pendingStatus;
+(id)attendeeWithEmailAddress:(id)emailAddress name:(id)name;
+(id)attendeeWithName:(id)name emailAddress:(id)address address:(id)address3;
+(id)defaultPropertiesToLoad;
+(id)relations;
-(id)initWithAddress:(id)address name:(id)name;
-(id)initWithEmailAddress:(id)emailAddress name:(id)name;
-(id)initWithName:(id)name emailAddress:(id)address address:(id)address3;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(int)entityType;
-(id)owner;
// declared property getter: -(int)participantRole;
// declared property getter: -(int)participantStatus;
// declared property getter: -(int)participantType;
// declared property getter: -(int)pendingStatus;
-(void)setOwner:(id)owner;
// declared property setter: -(void)setParticipantRole:(int)role;
// declared property setter: -(void)setParticipantStatus:(int)status;
// declared property setter: -(void)setParticipantType:(int)type;
// declared property setter: -(void)setPendingStatus:(int)status;
@end

