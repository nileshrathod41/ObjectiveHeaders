/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MFMessageWebProtocol : XXUnknownSuperclass {
}
+(BOOL)canInitWithRequest:(id)request;
+(id)canonicalRequestForRequest:(id)request;
+(void)initialize;
+(void)registerFragments:(id)fragments forUUID:(id)uuid;
+(BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;
+(void)unregisterFragmentsForUUID:(id)uuid;
-(void)dealloc;
-(void)startLoading;
-(void)stopLoading;
@end
