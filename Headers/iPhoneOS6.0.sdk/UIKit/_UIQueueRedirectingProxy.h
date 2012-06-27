/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UITargetedProxy.h"
#import "XPCProxyTarget.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIQueueRedirectingProxy : _UITargetedProxy <XPCProxyTarget> {
@private
	NSObject<OS_dispatch_queue>* _targetQueue;
}
+(id)proxyForwardingMessagesToObject:(id)object onQueue:(id)queue;
-(void)dealloc;
-(id)description;
-(void)forwardInvocation:(id)invocation;
-(BOOL)isBlock;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(BOOL)respondsToSelector:(SEL)selector;
@end
