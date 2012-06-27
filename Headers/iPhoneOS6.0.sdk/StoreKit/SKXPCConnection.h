/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SKXPCConnection : XXUnknownSuperclass {
@private
	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	id _disconnectBlock;
	id _messageBlock;
}
@property(copy) id disconnectBlock;
@property(copy) id messageBlock;
-(id)init;
-(id)initWithServiceName:(id)serviceName;
-(id)initWithXPCConnection:(id)xpcconnection;
-(id)_initSKXPCConnection;
-(void)_reloadEventHandler;
-(id)createXPCEndpoint;
-(void)dealloc;
// declared property getter: -(id)disconnectBlock;
// declared property getter: -(id)messageBlock;
-(void)sendMessage:(id)message;
-(void)sendMessage:(id)message withReply:(id)reply;
-(void)sendSynchronousMessage:(id)message withReply:(id)reply;
// declared property setter: -(void)setDisconnectBlock:(id)block;
// declared property setter: -(void)setMessageBlock:(id)block;
@end

