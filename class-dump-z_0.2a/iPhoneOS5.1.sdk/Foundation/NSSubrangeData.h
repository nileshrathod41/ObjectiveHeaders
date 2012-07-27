/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface NSSubrangeData : XXUnknownSuperclass {
@private
	unsigned _reserved : 3;
	unsigned _retainCount : 29;
	NSRange _range;
	NSData* _data;
}
-(id)init;
-(id)initWithData:(id)data range:(NSRange)range;
-(BOOL)_bytesAreVM;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)getBytes:(void*)bytes;
-(void)getBytes:(void*)bytes length:(unsigned)length;
-(void)getBytes:(void*)bytes range:(NSRange)range;
-(unsigned)length;
@end
