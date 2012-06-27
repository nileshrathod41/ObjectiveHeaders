/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CLLocation, CLHeading, NSString;
@protocol MKUserLocationAnnotation, MKAnnotation;

__attribute__((visibility("hidden")))
@interface MKUserLocationInternal : XXUnknownSuperclass {
@private
	CLLocation* location;
	CLLocation* fixedLocation;
	CLLocation* predictedLocation;
	CLHeading* heading;
	NSString* title;
	NSString* subtitle;
	id<MKUserLocationAnnotation> _annotation;
	int source;
	double timestamp;
	BOOL updating;
	double course;
	id<MKAnnotation> annotation;
}
@property(readonly, assign, nonatomic) id<MKAnnotation> annotation;	// @synthesize
@property(assign, nonatomic) double course;	// @synthesize
@property(retain, nonatomic) CLLocation* fixedLocation;	// @synthesize
@property(retain, nonatomic) CLHeading* heading;	// @synthesize
@property(retain, nonatomic) CLLocation* location;	// @synthesize
@property(retain, nonatomic) CLLocation* predictedLocation;	// @synthesize
@property(assign, nonatomic) int source;	// @synthesize
@property(retain, nonatomic) NSString* subtitle;	// @synthesize
@property(assign, nonatomic) double timestamp;	// @synthesize
@property(retain, nonatomic) NSString* title;	// @synthesize
@property(assign, nonatomic, getter=isUpdating) BOOL updating;	// @synthesize
// declared property getter: -(id)annotation;
// declared property getter: -(double)course;
// declared property getter: -(id)fixedLocation;
// declared property getter: -(id)heading;
// declared property getter: -(BOOL)isUpdating;
// declared property getter: -(id)location;
// declared property getter: -(id)predictedLocation;
// declared property setter: -(void)setCourse:(double)course;
// declared property setter: -(void)setFixedLocation:(id)location;
// declared property setter: -(void)setHeading:(id)heading;
// declared property setter: -(void)setLocation:(id)location;
// declared property setter: -(void)setPredictedLocation:(id)location;
// declared property setter: -(void)setSource:(int)source;
// declared property setter: -(void)setSubtitle:(id)subtitle;
// declared property setter: -(void)setTimestamp:(double)timestamp;
// declared property setter: -(void)setTitle:(id)title;
// declared property setter: -(void)setUpdating:(BOOL)updating;
// declared property getter: -(int)source;
// declared property getter: -(id)subtitle;
// declared property getter: -(double)timestamp;
// declared property getter: -(id)title;
@end

