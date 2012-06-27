/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSSimpleCString.h"


@interface NSConstantString : NSSimpleCString {
}
-(id)initWithCharactersNoCopy:(unsigned short*)charactersNoCopy length:(unsigned)length;
-(const char*)_fastCStringContents:(BOOL)contents;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(id)autorelease;
-(const char*)cString;
-(unsigned)cStringLength;
-(BOOL)canBeConvertedToEncoding:(unsigned)encoding;
-(unsigned short)characterAtIndex:(unsigned)index;
-(int)compare:(id)compare options:(unsigned)options range:(NSRange)range;
-(id)copy;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(unsigned)fastestEncoding;
-(void)finalize;
-(void)getCharacters:(unsigned short*)characters range:(NSRange)range;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToString:(id)string;
-(unsigned)length;
-(const char*)lossyCString;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
-(unsigned)smallestEncoding;
@end

