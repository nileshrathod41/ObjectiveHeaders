/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface CTCarrier : XXUnknownSuperclass {
	NSString* _carrierName;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSString* _isoCountryCode;
	BOOL _allowsVOIP;
}
@property(assign, nonatomic) BOOL allowsVOIP;	// @synthesize=_allowsVOIP
@property(retain, nonatomic) NSString* carrierName;	// @synthesize=_carrierName
@property(retain, nonatomic) NSString* isoCountryCode;	// @synthesize=_isoCountryCode
@property(retain, nonatomic) NSString* mobileCountryCode;	// @synthesize=_mobileCountryCode
@property(retain, nonatomic) NSString* mobileNetworkCode;	// @synthesize=_mobileNetworkCode
-(id)init;
// declared property getter: -(BOOL)allowsVOIP;
// declared property getter: -(id)carrierName;
-(void)dealloc;
-(id)description;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)isoCountryCode;
// declared property getter: -(id)mobileCountryCode;
// declared property getter: -(id)mobileNetworkCode;
// declared property setter: -(void)setAllowsVOIP:(BOOL)voip;
// declared property setter: -(void)setCarrierName:(id)name;
// declared property setter: -(void)setIsoCountryCode:(id)code;
// declared property setter: -(void)setMobileCountryCode:(id)code;
// declared property setter: -(void)setMobileNetworkCode:(id)code;
@end

