/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMapTable.h"


__attribute__((visibility("hidden")))
@interface NSConcreteMapTable : NSMapTable {
@private
	NSSlice keys;
	NSSlice values;
	unsigned count;
	unsigned capacity;
	unsigned keyOptions;
	unsigned valueOptions;
	unsigned mutations;
	int growLock;
	bool shouldRehash;
}
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options capacity:(unsigned)capacity;
-(id)initWithKeyPointerFunctions:(id)keyPointerFunctions valuePointerFunctions:(id)functions capacity:(unsigned)capacity;
-(void)_initBlock;
-(void)_setBackingStore;
-(id)allKeys;
-(id)allValues;
-(void)assign:(unsigned)assign key:(const void*)key value:(const void*)value isNew:(BOOL)aNew;
-(void)checkCount:(const char*)count;
-(Class)classForCoder;
-(BOOL)containsKeys:(const void**)keys values:(const void**)values count:(unsigned)count;
-(id)copy;
-(unsigned)count;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)dealloc;
-(id)description;
-(id)dump;
-(void)encodeWithCoder:(id)coder;
-(void*)existingItemForSetItem:(const void*)setItem forAbsentKey:(const void*)absentKey;
-(void)finalize;
-(unsigned)getKeys:(const void**)keys values:(const void**)values;
-(void)grow;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)keyEnumerator;
-(id)keyPointerFunctions;
-(BOOL)mapMember:(const void*)member originalKey:(const void**)key value:(const void**)value;
-(id)objectEnumerator;
-(id)objectForKey:(id)key;
-(void)raiseCountUnderflowException;
-(unsigned)realCount;
-(void)rehash;
-(unsigned)rehashAround:(unsigned)around;
-(void)removeAllItems;
-(void)removeObjectForKey:(id)key;
-(void)replaceItem:(const void*)item forExistingKey:(const void*)existingKey;
-(void)setItem:(const void*)item forAbsentKey:(const void*)absentKey;
-(void)setItem:(const void*)item forKnownAbsentKey:(const void*)knownAbsentKey;
-(void)setObject:(id)object forKey:(id)key;
-(id)valuePointerFunctions;
-(void)zeroPairedEntries;
@end

