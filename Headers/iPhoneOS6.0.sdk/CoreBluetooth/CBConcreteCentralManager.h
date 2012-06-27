/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import "CBXpcConnectionDelegate.h"
#import "CBCentralManager.h"

@class CBXpcConnection, NSMutableDictionary;

@interface CBConcreteCentralManager : CBCentralManager <CBXpcConnectionDelegate> {
@private
	CBXpcConnection* _connection;
	NSMutableDictionary* _peripherals;
	BOOL _isScanning;
}
-(id)initWithDelegate:(id)delegate queue:(id)queue;
-(void)cancelPeripheralConnection:(id)connection;
-(void)connectPeripheral:(id)peripheral options:(id)options;
-(void)dealloc;
-(void)handleConnectedPeripheralsRetrieved:(id)retrieved;
-(void)handlePeripheralConnectionCompleted:(id)completed;
-(void)handlePeripheralDisconnectionCompleted:(id)completed;
-(void)handlePeripheralDiscovered:(id)discovered;
-(void)handlePeripheralEvent:(id)event selector:(SEL)selector;
-(void)handlePeripheralsRetrieved:(id)retrieved;
-(void)handleStateUpdated:(id)updated;
-(void)orphanPeripherals;
-(id)peripheralForHandle:(id)handle args:(id)args;
-(void)releasePeripheral:(id)peripheral;
-(void)retainPeripheral:(id)peripheral;
-(void)retrieveConnectedPeripherals;
-(void)retrievePeripherals:(id)peripherals;
-(void)scanForPeripheralsWithServices:(id)services options:(id)options;
-(void)sendMsg:(int)msg args:(id)args;
-(void)stopScan;
-(void)xpcConnection:(id)connection didReceiveMessage:(int)message arguments:(id)arguments;
-(void)xpcConnectionDidReset:(id)xpcConnection;
@end

