/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SLWeiboDaemonConnectionInfo : XXUnknownSuperclass {
@private
	id _daemonSessionProxy;
	NSObject<OS_dispatch_queue>* _connectionQueue;
	NSObject<OS_xpc_object>* _connection;
}
@property(retain, nonatomic) NSObject<OS_xpc_object>* connection;	// @synthesize=_connection
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* connectionQueue;	// @synthesize=_connectionQueue
@property(assign, nonatomic) __weak id daemonSessionProxy;	// @synthesize=_daemonSessionProxy
-(void).cxx_destruct;
// declared property getter: -(id)connection;
// declared property getter: -(id)connectionQueue;
// declared property getter: -(id)daemonSessionProxy;
// declared property setter: -(void)setConnection:(id)connection;
// declared property setter: -(void)setConnectionQueue:(id)queue;
// declared property setter: -(void)setDaemonSessionProxy:(id)proxy;
@end

