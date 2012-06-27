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
#import "NSMutableCopying.h"


@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+(id)alphanumericCharacterSet;
+(id)capitalizedLetterCharacterSet;
+(id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;
+(id)characterSetWithCharactersInString:(id)string;
+(id)characterSetWithContentsOfFile:(id)file;
+(id)characterSetWithRange:(NSRange)range;
+(id)controlCharacterSet;
+(id)decimalDigitCharacterSet;
+(id)decomposableCharacterSet;
+(id)illegalCharacterSet;
+(void)initialize;
+(id)letterCharacterSet;
+(id)lowercaseLetterCharacterSet;
+(id)newlineCharacterSet;
+(id)nonBaseCharacterSet;
+(id)punctuationCharacterSet;
+(id)symbolCharacterSet;
+(id)uppercaseLetterCharacterSet;
+(id)whitespaceAndNewlineCharacterSet;
+(id)whitespaceCharacterSet;
-(id)init;
-(id)initWithCoder:(id)coder;
-(unsigned long)_cfTypeID;
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(id)_retainedBitmapRepresentation;
-(id)bitmapRepresentation;
-(BOOL)characterIsMember:(unsigned short)member;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)count;
-(void)encodeWithCoder:(id)coder;
-(BOOL)hasMemberInPlane:(unsigned char)plane;
-(unsigned)hash;
-(id)invertedSet;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)equal;
-(BOOL)isMutable;
-(BOOL)isSupersetOfSet:(id)set;
-(BOOL)longCharacterIsMember:(unsigned long)member;
-(void)makeImmutable;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)replacementObjectForPortCoder:(id)portCoder;
@end

