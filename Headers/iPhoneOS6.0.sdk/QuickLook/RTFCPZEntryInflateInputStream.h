/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "QuickLook-Structs.h"
#import "RTFCPZEntryInputStream.h"

@protocol RTFCPZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface RTFCPZEntryInflateInputStream : XXUnknownSuperclass <RTFCPZEntryInputStream> {
@private
	z_stream_s mStream;
	long long mOffset;
	long long mEnd;
	unsigned long mCalculatedCrc;
	unsigned long mCheckCrc;
	id<RTFCPZArchiveInputStream> mInput;
	char* mOutBuffer;
	unsigned long mOutBufferSize;
}
-(id)initWithOffset:(long long)offset end:(long long)end uncompressedSize:(unsigned long long)size crc:(unsigned long)crc input:(id)input;
-(id).cxx_construct;
-(void)dealloc;
-(unsigned long)readToBuffer:(char*)buffer size:(unsigned long)size;
-(void)readToOwnBuffer:(const char**)ownBuffer size:(unsigned*)size;
@end

