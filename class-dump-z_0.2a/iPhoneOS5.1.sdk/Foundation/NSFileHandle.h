/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSFileHandle : XXUnknownSuperclass {
}
+(id)allocWithZone:(NSZone*)zone;
+(id)fileHandleForReadingAtPath:(id)path;
+(id)fileHandleForReadingFromURL:(id)url error:(id*)error;
+(id)fileHandleForUpdatingAtPath:(id)path;
+(id)fileHandleForUpdatingURL:(id)updatingURL error:(id*)error;
+(id)fileHandleForWritingAtPath:(id)path;
+(id)fileHandleForWritingToURL:(id)url error:(id*)error;
+(id)fileHandleWithNullDevice;
+(id)fileHandleWithStandardError;
+(id)fileHandleWithStandardInput;
+(id)fileHandleWithStandardOutput;
+(void)initialize;
-(id)initWithPath:(id)path flags:(int)flags createMode:(int)mode;
-(id)initWithPath:(id)path flags:(int)flags createMode:(int)mode error:(id*)error;
-(id)availableData;
-(void)closeFile;
-(int)fileDescriptor;
-(unsigned long long)offsetInFile;
-(id)readDataOfLength:(unsigned)length;
-(id)readDataToEndOfFile;
-(id)readabilityHandler;
-(unsigned long long)seekToEndOfFile;
-(void)seekToFileOffset:(unsigned long long)fileOffset;
-(void)setReadabilityHandler:(id)handler;
-(void)setWriteabilityHandler:(id)handler;
-(void)synchronizeFile;
-(void)truncateFileAtOffset:(unsigned long long)offset;
-(void)writeData:(id)data;
-(id)writeabilityHandler;
@end

