/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableSet.h"


__attribute__((visibility("hidden")))
@interface __NSCFSet : NSMutableSet {
@private
	unsigned char _cfinfo[4];
	unsigned _bits[4];
	void* _callbacks;
	id* _values;
}
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
-(BOOL)_isDeallocating;
-(unsigned)_trueCount;
-(BOOL)_tryRetain;
-(void)addObject:(id)object;
-(Class)classForCoder;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)count;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)finalize;
-(void)getObjects:(id*)objects;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)member:(id)member;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)objectEnumerator;
-(oneway void)release;
-(void)removeAllObjects;
-(void)removeObject:(id)object;
-(id)retain;
-(unsigned)retainCount;
@end

