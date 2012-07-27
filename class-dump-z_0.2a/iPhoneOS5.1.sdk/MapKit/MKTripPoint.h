/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CLLocation, CLHeading, NSError;

__attribute__((visibility("hidden")))
@interface MKTripPoint : XXUnknownSuperclass {
	int _pointType;
	int _commandType;
	CLHeading* _heading;
	CLLocation* _location;
	int _locationSource;
	NSError* _error;
}
@property(assign, nonatomic) int commandType;	// @synthesize=_commandType
@property(retain, nonatomic) NSError* error;	// @synthesize=_error
@property(retain, nonatomic) CLHeading* heading;	// @synthesize=_heading
@property(retain, nonatomic) CLLocation* location;	// @synthesize=_location
@property(assign, nonatomic) int locationSource;	// @synthesize=_locationSource
@property(assign, nonatomic) int pointType;	// @synthesize=_pointType
+(id)tripPoint;
// declared property getter: -(int)commandType;
-(void)dealloc;
// declared property getter: -(id)error;
// declared property getter: -(id)heading;
// declared property getter: -(id)location;
// declared property getter: -(int)locationSource;
// declared property getter: -(int)pointType;
// declared property setter: -(void)setCommandType:(int)type;
// declared property setter: -(void)setError:(id)error;
// declared property setter: -(void)setHeading:(id)heading;
// declared property setter: -(void)setLocation:(id)location;
// declared property setter: -(void)setLocationSource:(int)source;
// declared property setter: -(void)setPointType:(int)type;
@end

