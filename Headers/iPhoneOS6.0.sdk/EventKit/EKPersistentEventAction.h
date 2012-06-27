/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class EKPersistentCalendarItem, NSData, NSString;

@interface EKPersistentEventAction : EKPersistentObject {
}
@property(copy, nonatomic) NSData* externalData;
@property(copy, nonatomic) NSString* externalFolderID;
@property(copy, nonatomic) NSString* externalID;
@property(copy, nonatomic) NSString* externalModTag;
@property(copy, nonatomic) NSString* externalScheduleID;
@property(retain, nonatomic) EKPersistentCalendarItem* owner;
+(id)relations;
-(int)entityType;
// declared property getter: -(id)externalData;
// declared property getter: -(id)externalFolderID;
// declared property getter: -(id)externalID;
// declared property getter: -(id)externalModTag;
// declared property getter: -(id)externalScheduleID;
// declared property getter: -(id)owner;
// declared property setter: -(void)setExternalData:(id)data;
// declared property setter: -(void)setExternalFolderID:(id)anId;
// declared property setter: -(void)setExternalID:(id)anId;
// declared property setter: -(void)setExternalModTag:(id)tag;
// declared property setter: -(void)setExternalScheduleID:(id)anId;
// declared property setter: -(void)setOwner:(id)owner;
@end

