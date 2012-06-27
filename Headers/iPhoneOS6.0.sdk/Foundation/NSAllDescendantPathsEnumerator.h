/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDirectoryEnumerator.h"

@class NSArray, NSFileAttributes, NSString;

__attribute__((visibility("hidden")))
@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {
@private
	NSString* path;
	NSArray* contents;
	unsigned idx;
	NSString* prepend;
	NSAllDescendantPathsEnumerator* under;
	NSFileAttributes* directoryAttributes;
	NSString* pathToLastReportedItem;
	unsigned depth;
	BOOL cross;
	BOOL _padding[3];
}
+(id)newWithPath:(id)path prepend:(id)prepend attributes:(id)attributes cross:(BOOL)cross depth:(unsigned)depth;
-(id)_under;
-(id)currentSubdirectoryAttributes;
-(void)dealloc;
-(id)directoryAttributes;
-(id)fileAttributes;
-(unsigned)level;
-(id)nextObject;
-(void)skipDescendants;
-(void)skipDescendents;
@end

