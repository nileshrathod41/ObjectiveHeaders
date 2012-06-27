/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "NSFastEnumeration.h"
#import "NSCopying.h"
#import "Foundation-Structs.h"
#import "NSCoding.h"


@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {
}
+(id)alloc;
+(id)allocWithZone:(NSZone*)zone;
+(id)hashTableWithOptions:(unsigned)options;
+(id)hashTableWithWeakObjects;
+(id)weakObjectsHashTable;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;
-(id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;
-(void)addObject:(id)object;
-(id)allObjects;
-(id)anyObject;
-(BOOL)containsObject:(id)object;
-(id)copy;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)count;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(void*)getItem:(const void*)item;
-(void)getKeys:(void**)keys count:(unsigned*)count;
-(void)insertKnownAbsentItem:(const void*)item;
-(void)intersectHashTable:(id)table;
-(BOOL)intersectsHashTable:(id)table;
-(BOOL)isEqualToHashTable:(id)hashTable;
-(BOOL)isSubsetOfHashTable:(id)hashTable;
-(id)member:(id)member;
-(void)minusHashTable:(id)table;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)mutableSet;
-(id)objectEnumerator;
-(id)pointerFunctions;
-(void)removeAllItems;
-(void)removeAllObjects;
-(void)removeItem:(const void*)item;
-(void)removeObject:(id)object;
-(id)setRepresentation;
-(void)unionHashTable:(id)table;
-(unsigned)weakCount;
@end

