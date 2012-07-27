/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFArray : XXUnknownSuperclass {
@private
	int _cd_rc;
	unsigned _count;
	id* _array;
	PFArrayFlags _flags;
}
+(BOOL)accessInstanceVariablesDirectly;
+(void)initialize;
-(id)initWithObjects:(const id*)objects count:(unsigned)count;
-(id)initWithObjects:(id*)objects count:(unsigned)count andFlags:(unsigned)flags;
-(unsigned)_flags;
-(BOOL)_isDeallocating;
-(id*)_objectsPointer;
-(void)_setShouldRelease:(BOOL)_set;
-(void)_setShouldUseExtendedRelease:(BOOL)_set;
-(BOOL)_tryRetain;
-(id)arrayFromObjectIDs;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)count;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)dealloc;
-(void)getObjects:(id*)objects;
-(void)getObjects:(id*)objects range:(NSRange)range;
-(unsigned)indexOfManagedObjectForObjectID:(id)objectID;
-(unsigned)indexOfObject:(id)object;
-(unsigned)indexOfObject:(id)object inRange:(NSRange)range;
-(unsigned)indexOfObjectIdenticalTo:(id)to;
-(unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;
-(id)managedObjectIDAtIndex:(unsigned)index;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)newArrayFromObjectIDs;
-(id)objectAtIndex:(unsigned)index;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
-(id)subarrayWithRange:(NSRange)range;
@end

