/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPipe.h"

@class NSFileHandle;

__attribute__((visibility("hidden")))
@interface NSConcretePipe : NSPipe {
@private
	NSFileHandle* _readHandle;
	NSFileHandle* _writeHandle;
}
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)fileHandleForReading;
-(id)fileHandleForWriting;
-(void)finalize;
@end

