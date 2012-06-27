/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIStatusBarServerThread : XXUnknownSuperclass {
@private
	NSMutableArray* _clientPorts;
	NSMutableArray* _publishers;
	XXStruct_vuV5MB _statusBarData;
	XXStruct_vuV5MB _composedStatusBarData;
	XXStruct_qh_S0D _overrides;
	CFDictionaryRef _doubleHeightStatusStrings;
	CFDictionaryRef _glowAnimationStates;
	NSMutableDictionary* _glowAnimationEndTimes;
	BOOL _composedStatusBarDataValid;
}
-(void)_addClient:(unsigned)client;
-(void)_addStatusBarItem:(int)item forPublisher:(id)publisher;
-(void)_addStyleOverrides:(int)overrides forPublisher:(id)publisher;
-(void)_broadcastStatusBarDataWithActions:(int)actions;
-(void)_broadcastStyleOverrides;
-(id)_doubleHeightStatusStringForStyle:(int)style;
-(double)_glowAnimationEndTimeForStyle:(int)style;
-(BOOL)_glowAnimationStateForStyle:(int)style;
-(BOOL)_permanentizeStatusBarOverrideData;
-(void)_postDoubleHeightStatus:(char*)status forStyle:(int)style;
-(void)_postGlowAnimationState:(BOOL)state forStyle:(int)style;
-(void)_postStatusBarData:(XXStruct_vuV5MB*)data actions:(int)actions;
-(void)_postStatusBarOverrideData:(XXStruct_qh_S0D*)data;
-(id)_publisherForPort:(unsigned)port;
-(void)_removeAnimationEndTimesForOverrides:(int)overrides;
-(void)_removeClient:(CFMachPortRef)client;
-(void)_removePublisher:(CFMachPortRef)publisher;
-(void)_removeStatusBarItem:(int)item forPublisher:(id)publisher;
-(void)_removeStyleOverrides:(int)overrides forPublisher:(id)publisher;
-(void)_setAnimationEndTimesForOverrides:(int)overrides;
-(XXStruct_vuV5MB*)_statusBarData;
-(XXStruct_qh_S0D*)_statusBarOverrideData;
-(int)_styleOverrides;
-(void)main;
@end

