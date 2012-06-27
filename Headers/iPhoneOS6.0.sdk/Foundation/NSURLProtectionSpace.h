/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import </libxml2.2.h>
#import "NSCopying.h"
#import "NSCoding.h"

@class NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSCoding, NSCopying> {
@private
	NSURLProtectionSpaceInternal* _internal;
}
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithHost:(id)host port:(int)port protocol:(id)protocol realm:(id)realm authenticationMethod:(id)method;
-(id)initWithProxyHost:(id)proxyHost port:(int)port type:(id)type realm:(id)realm authenticationMethod:(id)method;
-(CFURLProtectionSpaceRef)_cfurlprtotectionspace;
-(id)_initWithCFURLProtectionSpace:(CFURLProtectionSpaceRef)cfurlprotectionSpace;
-(id)_internalInit;
-(id)authenticationMethod;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)distinguishedNames;
-(void)encodeWithCoder:(id)coder;
-(unsigned)hash;
-(id)host;
-(BOOL)isEqual:(id)equal;
-(BOOL)isProxy;
-(int)port;
-(id)protocol;
-(id)proxyType;
-(id)realm;
-(BOOL)receivesCredentialSecurely;
-(SecTrust*)serverTrust;
@end

