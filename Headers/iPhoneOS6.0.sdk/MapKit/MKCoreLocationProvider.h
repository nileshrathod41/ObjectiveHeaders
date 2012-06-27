/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MKLocationProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CLLocationManagerDelegate.h"

@class NSBundle, CLLocationManager;
@protocol MKLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface MKCoreLocationProvider : XXUnknownSuperclass <CLLocationManagerDelegate, MKLocationProvider> {
@private
	CLLocationManager* _clLocationManager;
	id<MKLocationProviderDelegate> _delegate;
	BOOL _locationServicesPreferencesDialogEnabled;
	BOOL _useCLMapCorrection;
	int _authorizationStatus;
	NSBundle* _effectiveBundle;
}
@property(readonly, assign, nonatomic) CLLocationManager* _clLocationManager;
@property(assign, nonatomic) int activityType;
@property(readonly, assign, nonatomic) int authorizationStatus;
@property(assign, nonatomic) id<MKLocationProviderDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) double desiredAccuracy;
@property(assign, nonatomic) double distanceFilter;
@property(retain, nonatomic) NSBundle* effectiveBundle;
@property(readonly, assign, nonatomic) double expectedGpsUpdateInterval;
@property(assign, nonatomic) int headingOrientation;
@property(assign, nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property(assign, nonatomic) BOOL usesCLMapCorrection;
-(id)init;
// declared property getter: -(id)_clLocationManager;
-(void)_createCLLocationManager;
-(void)_updateAuthorizationStatus;
// declared property getter: -(int)activityType;
// declared property getter: -(int)authorizationStatus;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(double)desiredAccuracy;
-(void)dismissHeadingCalibrationDisplay;
// declared property getter: -(double)distanceFilter;
// declared property getter: -(id)effectiveBundle;
// declared property getter: -(double)expectedGpsUpdateInterval;
// declared property getter: -(int)headingOrientation;
// declared property getter: -(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(void)locationManager:(id)manager didUpdateHeading:(id)heading;
-(void)locationManager:(id)manager didUpdateLocations:(id)locations;
-(void)locationManagerDidPauseLocationUpdates:(id)locationManager;
-(void)locationManagerDidResumeLocationUpdates:(id)locationManager;
-(BOOL)locationManagerShouldDisplayHeadingCalibration:(id)locationManager;
// declared property setter: -(void)setActivityType:(int)type;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDesiredAccuracy:(double)accuracy;
// declared property setter: -(void)setDistanceFilter:(double)filter;
// declared property setter: -(void)setEffectiveBundle:(id)bundle;
// declared property setter: -(void)setHeadingOrientation:(int)orientation;
// declared property setter: -(void)setLocationServicesPreferencesDialogEnabled:(BOOL)enabled;
// declared property setter: -(void)setUsesCLMapCorrection:(BOOL)correction;
-(void)startUpdatingHeading;
-(void)startUpdatingLocation;
-(void)stopUpdatingHeading;
-(void)stopUpdatingLocation;
// declared property getter: -(BOOL)usesCLMapCorrection;
@end

