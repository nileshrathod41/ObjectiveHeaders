/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableString.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSLocalizedString : NSMutableString {
@private
	NSMutableString* original;
	NSDictionary* config;
}
-(id)initWithString:(id)string withFormatConfiguration:(id)formatConfiguration;
-(const char*)_fastCStringContents:(BOOL)contents;
-(const unsigned short*)_fastCharacterContents;
-(void)appendCharacters:(const unsigned short*)characters length:(unsigned)length;
-(void)appendFormat:(id)format;
-(void)appendString:(id)string;
-(id)baseString;
-(unsigned short)characterAtIndex:(unsigned)index;
-(int)compare:(id)compare options:(unsigned)options range:(NSRange)range locale:(id)locale;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)deleteCharactersInRange:(NSRange)range;
-(id)formatConfiguration;
-(void)getCharacters:(unsigned short*)characters range:(NSRange)range;
-(void)insertString:(id)string atIndex:(unsigned)index;
-(BOOL)isEqualToString:(id)string;
-(unsigned)length;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(void)replaceCharactersInRange:(NSRange)range withString:(id)string;
-(unsigned)replaceOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;
-(void)setString:(id)string;
-(id)substringFromIndex:(unsigned)index;
-(id)substringToIndex:(unsigned)index;
-(id)substringWithRange:(NSRange)range;
@end

