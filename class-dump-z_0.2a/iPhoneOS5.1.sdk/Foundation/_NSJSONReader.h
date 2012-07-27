/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSError;

@interface _NSJSONReader : XXUnknownSuperclass {
	id input;
	int kind;
	char* buf;
	unsigned options;
	NSError* error;
	unsigned bufLength;
	unsigned idx;
	struct {
		char* location;
		unsigned length;
		id value;
		unsigned hash;
	} cache[256];
}
+(BOOL)validForJSON:(id)json depth:(unsigned)depth allowFragments:(BOOL)fragments;
-(id)init;
-(void)dealloc;
-(id)error;
-(unsigned)findEncodingFromData:(id)data withBOMSkipLength:(unsigned*)bomskipLength;
-(id)newJSONArray;
-(id)newJSONBooleanOrNull;
-(id)newJSONNumber;
-(id)newJSONNumberAtPosition:(unsigned)position;
-(id)newJSONObject;
-(id)newJSONString;
-(id)newJSONValue;
-(id)parseData:(id)data options:(unsigned)options;
-(unsigned short)parseJSONUnicodePointAtLocation:(unsigned)location end:(unsigned)end;
-(id)parseStream:(id)stream options:(unsigned)options;
-(id)parseUTF8JSONData:(id)data skipBytes:(unsigned)bytes;
-(void)setError:(id)error;
-(BOOL)skipJSONWhitespace;
@end

