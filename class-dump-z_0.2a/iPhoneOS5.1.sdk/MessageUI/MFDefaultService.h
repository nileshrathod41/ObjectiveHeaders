/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CPDistributedMessagingCenter, MFLock;

@interface MFDefaultService : XXUnknownSuperclass {
	MFLock* _lock;
	CPDistributedMessagingCenter* _server;
	CPDistributedMessagingCenter* _backChannel;
}
+(id)backChannelCommandName;
-(id)init;
-(BOOL)_callMessageUIServicesMethod:(id)method userInfo:(id)info reply:(id*)reply error:(id*)error responseSelector:(SEL)selector;
-(id)_copyBackChannel;
-(id)_copyServer;
-(void)_messageUIServiceDidTerminate:(id)_messageUIService;
-(void)_notifyClientDidFinishWithError:(id)_notifyClient;
-(void)_setBackChannel:(id)channel responseSelector:(SEL)selector;
-(void)_setServer:(id)server;
-(void)cancel;
-(void)dealloc;
@end

