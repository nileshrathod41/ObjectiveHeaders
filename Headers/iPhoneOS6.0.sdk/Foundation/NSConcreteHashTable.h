/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSHashTable.h"


__attribute__((visibility("hidden")))
@interface NSConcreteHashTable : NSHashTable {
@private
	NSSlice slice;
	unsigned count;
	unsigned capacity;
	unsigned options;
	unsigned mutations;
}
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;
-(id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;
-(void)_initBlock;
-(void)addObject:(id)object;
-(id)allObjects;
-(void)assign:(unsigned)assign key:(const void*)key;
-(Class)classForCoder;
-(id)copy;
-(unsigned)count;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(void)finalize;
-(void*)getItem:(const void*)item;
-(void)getKeys:(void**)keys count:(unsigned*)count;
-(unsigned)hash;
-(void)hashGrow;
-(void)insertItem:(const void*)item;
-(void)insertKnownAbsentItem:(const void*)item;
-(BOOL)isEqual:(id)equal;
-(id)objectEnumerator;
-(id)pointerFunctions;
-(void)raiseCountUnderflowException;
-(void)rehash;
-(unsigned)rehashAround:(unsigned)around;
-(void)removeAllItems;
-(void)removeItem:(const void*)item;
@end

