/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;
@protocol RTFCPZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface RTFCPZArchive : XXUnknownSuperclass {
@private
	NSMutableDictionary* mEntries;
	id<RTFCPZArchiveInputStream> mInput;
	NSString* mRootName;
}
-(id)initWithData:(id)data;
-(void)dealloc;
-(id)entryWithName:(id)name;
-(RTFCPZEndOfCentralDirectory)readEndOfCentralDirectory;
-(void)readEntries;
-(id)readFilenameFromBuffer:(const char*)buffer size:(unsigned long)size;
-(id)rootName;
-(const char*)searchForEndOfCentralDirectory;
@end

