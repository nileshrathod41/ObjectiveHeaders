/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "Foundation-Structs.h"


@interface NSAutoreleasePool : NSObject {
@private
	void* _token;
	void* _reserved3;
	void* _reserved2;
	void* _reserved;
}
+(void)addObject:(id)object;
+(id)allocWithZone:(NSZone*)zone;
+(BOOL)autoreleasePoolExists;
+(unsigned)autoreleasedObjectCount;
+(void)enableFreedObjectCheck:(BOOL)check;
+(void)enableRelease:(BOOL)release;
+(unsigned)poolCountHighWaterMark;
+(unsigned)poolCountHighWaterResolution;
+(void)releaseAllPools;
+(void)resetTotalAutoreleasedObjects;
+(void)setPoolCountHighWaterMark:(unsigned)mark;
+(void)setPoolCountHighWaterResolution:(unsigned)resolution;
+(void)showPools;
+(unsigned)topAutoreleasePoolCount;
+(unsigned)totalAutoreleasedObjects;
-(id)init;
-(id)initWithCapacity:(unsigned)capacity;
-(void)addObject:(id)object;
-(id)autorelease;
-(void)dealloc;
-(void)drain;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
@end

