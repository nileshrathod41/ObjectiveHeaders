/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSURLProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLProtocolInternal;

@interface NSURLProtocol : XXUnknownSuperclass {
@private
	NSURLProtocolInternal* _internal;
}
+(id)_canonicalRequestForRequest:(id)request allowCF:(BOOL)cf;
+(id)_protocolWithRequest:(id)request cachedResponse:(id)response client:(id)client allowCF:(BOOL)cf;
+(BOOL)_requestIsCacheEquivalent:(id)equivalent toRequest:(id)request allowCF:(BOOL)cf;
+(BOOL)canInitWithRequest:(id)request;
+(id)canonicalRequestForRequest:(id)request;
+(id)propertyForKey:(id)key inRequest:(id)request;
+(BOOL)registerClass:(Class)aClass;
+(void)removePropertyForKey:(id)key inRequest:(id)request;
+(BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;
+(void)setProperty:(id)property forKey:(id)key inRequest:(id)request;
+(void)unregisterClass:(Class)aClass;
-(id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;
-(id)cachedResponse;
-(id)client;
-(void)dealloc;
-(id)request;
-(void)startLoading;
-(void)stopLoading;
@end

@interface NSURLProtocol (NSURLProtocolPrivate)
+(id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)canonical;
+(Class)_protocolClassForRequest:(id)request;
+(Class)_protocolClassForRequest:(id)request allowCF:(BOOL)cf;
+(id)_registeredClasses;
+(void)_removePropertyForKey:(id)key inRequest:(id)request;
-(void)_releaseProtocolClientReference;
-(void)_resumeLoading;
-(void)_suspendLoading;
@end

