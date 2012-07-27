/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import "CBPeripheral.h"
#import "CBPairingAlertDelegate.h"
#import "CoreBluetooth-Structs.h"

@class CBPairingAlert, NSMutableDictionary, CBConcreteCentralManager, NSNumber;

@interface CBConcretePeripheral : CBPeripheral <CBPairingAlertDelegate> {
@private
	CBConcreteCentralManager* _centralManager;
	NSNumber* _handle;
	NSMutableDictionary* _attributes;
	CBPairingAlert* _pairingAlert;
}
@property(readonly, assign, nonatomic) NSNumber* handle;	// @synthesize=_handle
-(id)initWithCentralManager:(id)centralManager UUID:(CFUUIDRef)uuid handle:(id)handle;
-(void)acceptPairing:(BOOL)pairing ofType:(id)type withPasskey:(id)passkey;
-(id)attributeForHandle:(id)handle;
-(void)dealloc;
-(void)discoverCharacteristics:(id)characteristics forService:(id)service;
-(void)discoverDescriptorsForCharacteristic:(id)characteristic;
-(void)discoverIncludedServices:(id)services forService:(id)service;
-(void)discoverServices:(id)services;
// declared property getter: -(id)handle;
-(void)handleAttributeEvent:(id)event args:(id)args attributeSelector:(SEL)selector delegateSelector:(SEL)selector4;
-(void)handleCharacteristicDescriptorsDiscovered:(id)discovered;
-(void)handleCharacteristicEvent:(id)event characteristicSelector:(SEL)selector delegateSelector:(SEL)selector3;
-(void)handleCharacteristicValueBroadcasted:(id)broadcasted;
-(void)handleCharacteristicValueNotifying:(id)notifying;
-(void)handleCharacteristicValueUpdated:(id)updated;
-(void)handleCharacteristicValueWritten:(id)written;
-(void)handleDescriptorEvent:(id)event descriptorSelector:(SEL)selector delegateSelector:(SEL)selector3;
-(void)handleDescriptorValueUpdated:(id)updated;
-(void)handleDescriptorValueWritten:(id)written;
-(void)handleDisconnection;
-(void)handlePairingCompleted:(id)completed;
-(void)handlePairingRequested:(id)requested;
-(void)handleRSSIUpdated:(id)updated;
-(void)handleServiceCharacteristicsDiscovered:(id)discovered;
-(void)handleServiceEvent:(id)event serviceSelector:(SEL)selector delegateSelector:(SEL)selector3;
-(void)handleServiceIncludedServicesDiscovered:(id)discovered;
-(void)handleServicesDiscovered:(id)discovered;
-(void)handleWritesExecuted:(id)executed;
-(BOOL)isEqual:(id)equal;
-(void)pair;
-(void)pairingAlert:(id)alert acceptedPairing:(BOOL)pairing ofType:(id)type withPasskey:(id)passkey;
-(void)readRSSI;
-(void)readValueForCharacteristic:(id)characteristic;
-(void)readValueForDescriptor:(id)descriptor;
-(oneway void)release;
-(void)reliablyWriteValues:(id)values forCharacteristics:(id)characteristics;
-(id)retain;
-(void)sendMsg:(int)msg args:(id)args;
-(void)setAttribute:(id)attribute forHandle:(id)handle;
-(void)setBroadcastValue:(BOOL)value forCharacteristic:(id)characteristic;
-(void)setIndicateValue:(BOOL)value forCharacteristic:(id)characteristic;
-(void)setNotifyValue:(BOOL)value forCharacteristic:(id)characteristic;
-(void)setOrphan;
-(void)writeValue:(id)value forCharacteristic:(id)characteristic type:(int)type;
-(void)writeValue:(id)value forDescriptor:(id)descriptor;
@end

