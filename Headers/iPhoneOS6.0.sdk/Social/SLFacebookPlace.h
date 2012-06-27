/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSString, NSURL;

@interface SLFacebookPlace : XXUnknownSuperclass <NSCoding> {
@private
	double _latitude;
	NSString* _category;
	NSString* _identifier;
	double _distance;
	double _longitude;
	NSString* _name;
	NSURL* _pictureURL;
}
@property(retain) NSString* category;	// @synthesize=_category
@property(assign) double distance;	// @synthesize=_distance
@property(retain) NSString* identifier;	// @synthesize=_identifier
@property(assign) double latitude;	// @synthesize=_latitude
@property(assign) double longitude;	// @synthesize=_longitude
@property(retain) NSString* name;	// @synthesize=_name
@property(retain) NSURL* pictureURL;	// @synthesize=_pictureURL
+(id)placeWithResponseDictionary:(id)responseDictionary;
-(id)initWithCoder:(id)coder;
-(void).cxx_destruct;
// declared property getter: -(id)category;
-(id)description;
// declared property getter: -(double)distance;
-(id)encodableProperties;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)identifier;
// declared property getter: -(double)latitude;
// declared property getter: -(double)longitude;
// declared property getter: -(id)name;
// declared property getter: -(id)pictureURL;
// declared property setter: -(void)setCategory:(id)category;
// declared property setter: -(void)setDistance:(double)distance;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property setter: -(void)setLatitude:(double)latitude;
// declared property setter: -(void)setLongitude:(double)longitude;
// declared property setter: -(void)setName:(id)name;
// declared property setter: -(void)setPictureURL:(id)url;
@end
