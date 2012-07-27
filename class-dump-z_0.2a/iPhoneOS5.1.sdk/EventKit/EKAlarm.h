/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class EKObjectToOneRelation, NSDate;

@interface EKAlarm : EKObject <NSCopying> {
@private
	EKObjectToOneRelation* _locationRelation;
}
@property(copy, nonatomic) NSDate* absoluteDate;
@property(retain, nonatomic) EKObjectToOneRelation* locationRelation;	// @synthesize=_locationRelation
@property(assign, nonatomic) double relativeOffset;
+(id)alarmWithAbsoluteDate:(id)absoluteDate;
+(id)alarmWithRelativeOffset:(double)relativeOffset;
+(BOOL)areLocationsAllowed;
+(BOOL)areLocationsAllowedWithAuthorizationStatus:(int)authorizationStatus;
+(BOOL)areLocationsAvailable;
-(id)init;
-(id)initWithAbsoluteDate:(id)absoluteDate;
-(id)initWithRelativeOffset:(double)relativeOffset;
-(id)UUID;
-(id)_locationRelation;
// declared property getter: -(id)absoluteDate;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(BOOL)isAbsolute;
-(id)lazyLoadRelationForKey:(id)key;
// declared property getter: -(id)locationRelation;
-(id)owner;
-(id)ownerUUID;
-(int)proximity;
-(BOOL)rebase;
// declared property getter: -(double)relativeOffset;
// declared property setter: -(void)setAbsoluteDate:(id)date;
// declared property setter: -(void)setLocationRelation:(id)relation;
-(void)setProximity:(int)proximity;
// declared property setter: -(void)setRelativeOffset:(double)offset;
-(void)setStructuredLocation:(id)location;
-(id)structuredLocation;
-(BOOL)validate:(id*)validate;
@end

