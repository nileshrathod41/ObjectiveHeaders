/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "XPCProxyTarget.h"
#import "_UIViewServiceSession_HostInterface.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _UIViewServiceSessionConnectionCatcher : XXUnknownSuperclass <_UIViewServiceSession_HostInterface, XPCProxyTarget> {
@private
	id _continuation;
	long _continuationCallToken;
}
+(id)awaitRequestThen:(id)then;
-(void)__requestConnectionToDeputyOfType:(id)type withReplyHandler:(id)replyHandler;
-(void)dealloc;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
@end

