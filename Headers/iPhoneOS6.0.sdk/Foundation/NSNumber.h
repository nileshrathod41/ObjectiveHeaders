/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSValue.h"


@interface NSNumber : NSValue {
}
+(id)allocWithZone:(NSZone*)zone;
+(id)numberWithBool:(BOOL)aBool;
+(id)numberWithChar:(BOOL)aChar;
+(id)numberWithDouble:(double)aDouble;
+(id)numberWithFloat:(float)aFloat;
+(id)numberWithInt:(int)int;
+(id)numberWithInteger:(int)integer;
+(id)numberWithLong:(long)aLong;
+(id)numberWithLongLong:(long long)longLong;
+(id)numberWithShort:(short)aShort;
+(id)numberWithUnsignedChar:(unsigned char)unsignedChar;
+(id)numberWithUnsignedInt:(unsigned)unsignedInt;
+(id)numberWithUnsignedInteger:(unsigned)unsignedInteger;
+(id)numberWithUnsignedLong:(unsigned long)unsignedLong;
+(id)numberWithUnsignedLongLong:(unsigned long long)unsignedLongLong;
+(id)numberWithUnsignedShort:(unsigned short)unsignedShort;
+(BOOL)supportsSecureCoding;
-(id)initWithBool:(BOOL)aBool;
-(id)initWithChar:(BOOL)aChar;
-(id)initWithCoder:(id)coder;
-(id)initWithDouble:(double)aDouble;
-(id)initWithFloat:(float)aFloat;
-(id)initWithInt:(int)int;
-(id)initWithInteger:(int)integer;
-(id)initWithLong:(long)aLong;
-(id)initWithLongLong:(long long)longLong;
-(id)initWithShort:(short)aShort;
-(id)initWithUnsignedChar:(unsigned char)unsignedChar;
-(id)initWithUnsignedInt:(unsigned)unsignedInt;
-(id)initWithUnsignedInteger:(unsigned)unsignedInteger;
-(id)initWithUnsignedLong:(unsigned long)unsignedLong;
-(id)initWithUnsignedLongLong:(unsigned long long)unsignedLongLong;
-(id)initWithUnsignedShort:(unsigned short)unsignedShort;
-(BOOL)_allowsDirectEncoding;
-(long)_cfNumberType;
-(unsigned long)_cfTypeID;
-(bool)_getCString:(char*)string length:(int)length multiplier:(double)multiplier;
-(unsigned char)_getValue:(void*)value forType:(long)type;
-(int)_reverseCompare:(id)compare;
-(BOOL)boolValue;
-(BOOL)charValue;
-(Class)classForCoder;
-(int)compare:(id)compare;
-(id)copyWithZone:(NSZone*)zone;
-(XXStruct_9isexA)decimalValue;
-(id)description;
-(id)descriptionWithLocale:(id)locale;
-(double)doubleValue;
-(void)encodeWithCoder:(id)coder;
-(float)floatValue;
-(unsigned)hash;
-(int)intValue;
-(int)integerValue;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToNumber:(id)number;
-(BOOL)isNSNumber__;
-(long long)longLongValue;
-(long)longValue;
-(short)shortValue;
-(id)stringValue;
-(unsigned char)unsignedCharValue;
-(unsigned)unsignedIntValue;
-(unsigned)unsignedIntegerValue;
-(unsigned long long)unsignedLongLongValue;
-(unsigned long)unsignedLongValue;
-(unsigned short)unsignedShortValue;
@end

