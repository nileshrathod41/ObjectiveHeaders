/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"


@interface NSValue : NSObject <NSCopying, NSSecureCoding> {
}
+(id)allocWithZone:(NSZone*)zone;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)value:(const void*)value withObjCType:(const char*)objCType;
+(id)valueWithBytes:(const void*)bytes objCType:(const char*)type;
+(id)valueWithNonretainedObject:(id)nonretainedObject;
+(id)valueWithPoint:(CGPoint)point;
+(id)valueWithPointer:(const void*)pointer;
+(id)valueWithRange:(NSRange)range;
+(id)valueWithRect:(CGRect)rect;
+(id)valueWithSize:(CGSize)size;
-(id)init;
-(id)initWithBytes:(const void*)bytes objCType:(const char*)type;
-(id)initWithCoder:(id)coder;
-(Class)classForCoder;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(void)getValue:(void*)value;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToValue:(id)value;
-(BOOL)isNSValue__;
-(id)nonretainedObjectValue;
-(const char*)objCType;
-(CGPoint)pointValue;
-(void*)pointerValue;
-(NSRange)rangeValue;
-(CGRect)rectValue;
-(id)replacementObjectForPortCoder:(id)portCoder;
-(CGSize)sizeValue;
@end

