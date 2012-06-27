/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "NSCopying.h"
#import "Foundation-Structs.h"
#import "NSSecureCoding.h"


@interface NSUUID : NSObject <NSCopying, NSSecureCoding> {
}
+(id)UUID;
+(id)allocWithZone:(NSZone*)zone;
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithUUIDBytes:(unsigned char [16])uuidbytes;
-(id)initWithUUIDString:(id)uuidstring;
-(id)UUIDString;
-(unsigned long)_cfTypeID;
-(CFStringRef)_cfUUIDString;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(void)getUUIDBytes:(unsigned char [16])bytes;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

