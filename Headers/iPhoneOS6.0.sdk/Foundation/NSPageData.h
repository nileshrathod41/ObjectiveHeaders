/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate, NSData;

@interface NSPageData : XXUnknownSuperclass {
@private
	NSData* data;
	NSDate* _originalFileModDate;
	NSString* _originalFilePath;
}
+(int)_umask;
+(void)initialize;
-(id)init;
-(id)initFromSerializerStream:(id)serializerStream length:(unsigned)length;
-(id)initWithBytes:(const void*)bytes length:(unsigned)length;
-(id)initWithBytesNoCopy:(void*)bytesNoCopy length:(unsigned)length;
-(id)initWithContentsOfFile:(id)file;
-(id)initWithContentsOfMappedFile:(id)mappedFile;
-(id)initWithContentsOfMappedFile:(id)mappedFile withFileAttributes:(id)fileAttributes;
-(id)initWithData:(id)data;
-(id)initWithDataNoCopy:(id)dataNoCopy;
-(id)_mappedFile;
-(void)_setOriginalFileInfoFromFileAttributes:(id)fileAttributes;
-(const void*)bytes;
-(id)data;
-(void)dealloc;
-(id)deserializer;
-(unsigned)length;
-(unsigned)writeFd:(int)fd;
-(unsigned)writeFile:(id)file;
-(unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;
@end

