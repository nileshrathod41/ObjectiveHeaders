/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObjectID.h"
#import "CoreData-Structs.h"

@class NSEntityDescription;

__attribute__((visibility("hidden")))
@interface NSTemporaryObjectID : NSManagedObjectID {
@private
	int _cd_rc;
	int _counter;
	NSEntityDescription* _entity;
}
+(id)initWithEntity:(id)entity;
+(id)initWithEntity:(id)entity andUUIDString:(id)string;
+(void)_release_1;
+(id)_retain_1;
+(void)_storeDeallocated;
+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZone*)zone;
+(unsigned)allocateBatch:(id*)batch forEntity:(id)entity count:(unsigned)count;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
+(Class)classForStore:(id)store;
+(void)initialize;
+(void)release;
+(id)retain;
+(void)setObjectStoreIdentifier:(id)identifier;
+(int)version;
-(id)initWithEntity:(id)entity;
-(id)initWithEntity:(id)entity andUUIDString:(id)string;
-(id)URIRepresentation;
-(BOOL)_isPersistentStoreAlive;
-(id)_referenceData;
-(id)_retainedURIString;
-(void)_setPersistentStore:(id)store;
-(id)_storeIdentifier;
-(void)dealloc;
-(id)entity;
-(void)finalize;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isTemporaryID;
-(id)persistentStore;
-(void)release;
-(id)retain;
-(unsigned)retainCount;
@end

