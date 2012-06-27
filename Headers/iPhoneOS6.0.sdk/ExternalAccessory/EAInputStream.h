/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSCondition, NSMutableData, EASession, EAAccessory, NSThread;

@interface EAInputStream : XXUnknownSuperclass {
	id _delegate;
	EAAccessory* _accessory;
	EASession* _session;
	int _sock;
	char* _inputFromAccBuffer;
	NSMutableData* _inputFromAccData;
	NSCondition* _inputFromAccCondition;
	NSThread* _inputFromAccThread;
	BOOL _isOpenCompletedEventSent;
	BOOL _hasNewBytesAvailable;
	BOOL _isAtEndEventSent;
	unsigned _streamStatus;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _runLoopSource;
}
-(id)initWithAccessory:(id)accessory forSession:(id)session socket:(int)socket;
-(void)_accessoryDidDisconnect:(id)_accessory;
-(void)_performAtEndOfStreamValidation;
-(void)_readInputFromAccThread;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
-(void)close;
-(void)dealloc;
-(id)delegate;
-(void)endStream;
-(BOOL)getBuffer:(char**)buffer length:(unsigned*)length;
-(BOOL)hasBytesAvailable;
-(void)open;
-(void)openCompleted;
-(id)propertyForKey:(id)key;
-(int)read:(char*)read maxLength:(unsigned)length;
-(void)removeFromRunLoop:(id)runLoop forMode:(id)mode;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(void)setDelegate:(id)delegate;
-(BOOL)setProperty:(id)property forKey:(id)key;
-(id)streamError;
-(unsigned)streamStatus;
@end

