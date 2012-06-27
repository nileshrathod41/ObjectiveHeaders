/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;
@protocol _UIQueueingServiceWebViewControllerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _UIQueueingServiceWebViewControllerProxy : XXUnknownSuperclass {
@private
	NSMutableArray* _queuedInvocations;
	id _serviceViewControllerProxy;
	id<_UIQueueingServiceWebViewControllerProxyDelegate> _delegate;
}
@property(assign, nonatomic) id<_UIQueueingServiceWebViewControllerProxyDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) id serviceViewControllerProxy;	// @synthesize=_serviceViewControllerProxy
-(id)init;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
// declared property getter: -(id)serviceViewControllerProxy;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setServiceViewControllerProxy:(id)proxy;
@end
