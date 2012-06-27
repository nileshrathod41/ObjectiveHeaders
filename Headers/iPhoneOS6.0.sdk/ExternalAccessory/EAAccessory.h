/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import "ExternalAccessory-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray, EAAccessoryInternal, NSData;
@protocol EAAccessoryDelegate;

@interface EAAccessory : XXUnknownSuperclass {
@private
	EAAccessoryInternal* _internal;
}
@property(readonly, assign, nonatomic, getter=isConnected) BOOL connected;
@property(readonly, assign, nonatomic) unsigned connectionID;
@property(assign, nonatomic) id<EAAccessoryDelegate> delegate;
@property(readonly, assign, nonatomic) NSString* firmwareRevision;
@property(readonly, assign, nonatomic) NSString* hardwareRevision;
@property(readonly, assign, nonatomic) NSString* manufacturer;
@property(readonly, assign, nonatomic) NSString* modelNumber;
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSArray* protocolStrings;
@property(readonly, assign, nonatomic) NSString* serialNumber;
@property(readonly, assign, nonatomic) NSData* wakeToken;
-(id)init;
-(void)_addSession:(id)session;
-(id)_createWakeToken;
-(void)_endSession:(unsigned)session;
-(id)_initWithAccessory:(id)accessory;
-(unsigned)_internalConnectionID;
-(void)_openCompleteForSession:(unsigned)session;
-(id)_protocolIDForProtocolString:(id)protocolString;
-(void)_removeSession:(id)session;
-(void)_setConnected:(BOOL)connected;
-(id)_shortDescription;
-(void)_updateAccessoryInfo:(id)info;
-(BOOL)accessoryHasNMEASentencesAvailable;
-(id)allPublicProtocolStrings;
-(id)audioPorts;
-(CFAccessoryRef)cfAccessory;
-(/*function-pointer*/ void*)cfAccessoryPortPropertyCallback;
-(void*)cfAccessoryPortPropertyContext;
-(int)classType;
// declared property getter: -(unsigned)connectionID;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(id)description;
-(unsigned)eqIndex;
-(id)eqNames;
// declared property getter: -(id)firmwareRevision;
-(BOOL)getEphemerisExpirationInterval:(double*)interval;
-(BOOL)getEphemerisRecommendRefreshInterval:(double*)interval;
-(BOOL)getEphemerisURL:(id*)url;
-(BOOL)getNMEASentence:(id*)sentence;
// declared property getter: -(id)hardwareRevision;
-(int)iPodOutOptionsMask;
// declared property getter: -(BOOL)isConnected;
-(id)macAddress;
// declared property getter: -(id)manufacturer;
// declared property getter: -(id)modelNumber;
// declared property getter: -(id)name;
-(id)preferredApp;
// declared property getter: -(id)protocolStrings;
-(BOOL)sendEphemeris:(id)ephemeris;
-(BOOL)sendEphemerisPointDataGpsWeek:(unsigned)week gpsTOW:(double)tow latitude:(double)latitude longitude:(double)longitude accuracy:(unsigned short)accuracy;
-(BOOL)sendGpsWeek:(unsigned)week gpsTOW:(double)tow;
// declared property getter: -(id)serialNumber;
-(void)setCfAccessory:(CFAccessoryRef)accessory;
-(void)setCfAccessoryPortPropertyCallback:(/*function-pointer*/ void*)callback;
-(void)setCfAccessoryPortPropertyContext:(void*)context;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setEqIndex:(unsigned)index;
-(void)setEqNames:(id)names;
-(void)setIPodOutOptionsMask:(int)mask;
-(BOOL)setNMEASentencesToFilter:(id)filter;
-(BOOL)supportsAccessibility;
-(BOOL)supportsLocation;
-(BOOL)supportsPointOfInterest;
-(BOOL)supportsPublicIap;
-(void)updateItemProperty:(int)property withValue:(id)value;
-(void)updateSystemProperty:(int)property withValue:(id)value;
// declared property getter: -(id)wakeToken;
@end

