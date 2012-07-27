/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSURLResponse.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSURLResponseInternal;

@interface NSURLResponse : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	NSURLResponseInternal* _internal;
}
+(id)_responseWithCFURLResponse:(CFURLResponseRef)cfurlresponse;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithURL:(id)url MIMEType:(id)type expectedContentLength:(int)length textEncodingName:(id)name;
-(id)MIMEType;
-(id)URL;
-(CFURLResponseRef)_CFURLResponse;
-(id)_initWithCFURLResponse:(CFURLResponseRef)cfurlresponse;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(long long)expectedContentLength;
-(id)suggestedFilename;
-(id)textEncodingName;
@end

@interface NSURLResponse (NSURLResponsePrivate)
-(double)_calculatedExpiration;
-(id)_createdDate;
-(double)_freshnessLifetime;
-(id)_lastModifiedDate;
-(BOOL)_mustRevalidate;
-(id)_peerCertificateChain;
-(void)_setExpectedContentLength:(long long)length;
-(void)_setMIMEType:(id)type;
-(void)dealloc;
@end
