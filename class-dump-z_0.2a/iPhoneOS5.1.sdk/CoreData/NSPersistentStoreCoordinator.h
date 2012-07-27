/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSLocking.h"
#import "NSPersistentStoreCoordinator.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSManagedObjectModel, NSMutableArray;

@interface NSPersistentStoreCoordinator : XXUnknownSuperclass <NSLocking> {
@private
	persistentStoreCoordinatorFlags _flags;
	void* _reserved;
	NSMutableArray* _extendedStoreURLs;
	id _externalRecordsHelper;
	NSManagedObjectModel* _managedObjectModel;
	id _coreLock;
	NSMutableArray* _persistentStores;
}
+(void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+(Class)_classForPersistentStoreAtURL:(id)url;
+(void)_registerCoreDataStoreClass:(Class)aClass forStoreType:(id)storeType;
+(BOOL)accessInstanceVariablesDirectly;
+(void)initialize;
+(id)metadataForPersistentStoreOfType:(id)type URL:(id)url error:(id*)error;
+(void)registerStoreClass:(Class)aClass forStoreType:(id)storeType;
+(id)registeredStoreTypes;
+(BOOL)setMetadata:(id)metadata forPersistentStoreOfType:(id)type URL:(id)url error:(id*)error;
-(id)initWithManagedObjectModel:(id)managedObjectModel;
-(id)URLForPersistentStore:(id)persistentStore;
-(BOOL)_removePersistentStore:(id)store;
-(id)addPersistentStoreWithType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id*)error;
-(void)dealloc;
-(id)executeRequest:(id)request withContext:(id)context error:(id*)error;
-(void)finalize;
-(void)lock;
-(id)managedObjectIDForURIRepresentation:(id)urirepresentation;
-(id)managedObjectIDFromUTF8String:(const char*)utf8String length:(unsigned)length;
-(id)managedObjectModel;
-(id)metadataForPersistentStore:(id)persistentStore;
-(id)migratePersistentStore:(id)store toURL:(id)url options:(id)options withType:(id)type error:(id*)error;
-(id)persistentStoreForURL:(id)url;
-(id)persistentStores;
-(BOOL)removePersistentStore:(id)store error:(id*)error;
-(void)setMetadata:(id)metadata forPersistentStore:(id)persistentStore;
-(BOOL)setURL:(id)url forPersistentStore:(id)persistentStore;
-(BOOL)tryLock;
-(void)unlock;
@end

@interface NSPersistentStoreCoordinator (_NSPersistentStoreCoordinatorPrivateMathods)
-(BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type error:(id*)error;
-(BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type options:(id)options error:(id*)error;
-(BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 storeType:(id)type error:(id*)error;
-(id)persistentStoreForIdentifier:(id)identifier;
@end

@interface NSPersistentStoreCoordinator (_NSInternalMethods)
+(void)_registerDefaultStoreClassesAndTypes;
+(Class)_storeClassForStoreType:(id)storeType;
+(id)_storeTypeForStore:(id)store;
-(void)_addPersistentStore:(id)store identifier:(id)identifier;
-(void)_assignObject:(id)object toPersistentStore:(id)persistentStore;
-(void)_assignObject:(id)object toPersistentStore:(id)persistentStore forConfiguration:(id)configuration;
-(void)_assignObjects:(id)objects toStore:(id)store;
-(BOOL)_canSaveGraphRootedAtObject:(id)object intoStore:(id)store withPreviouslyChecked:(CFSetRef)previouslyChecked withAcceptableEntities:(CFSetRef)acceptableEntities;
-(id)_checkRequestForStore:(id)store originalRequest:(id)request andOptimisticLocking:(id)locking;
-(id)_conflictsWithRowCacheForObject:(id)object andStore:(id)store;
-(void)_copyMetadataFromStore:(id)store toStore:(id)store2 migrationManager:(id)manager;
-(void)_doPreSaveAssignmentsForObjects:(id)objects;
-(id)_fetchAllInstancesFromStore:(id)store intoContext:(id)context underlyingException:(id*)exception;
-(void)_informAffectedStoresOfInterestByChildContextInObjectsWithObjectIDs:(id)objectIDs withSelector:(SEL)selector;
-(BOOL)_isRegisteredWithUbiquity;
-(id)_newConflictRecordForObject:(id)object andOriginalRow:(id)row;
-(id)_newObjectGraphStyleRecordForRow:(id)row andObject:(id)object;
-(id)_persistentStoreForIdentifier:(id)identifier;
-(void)_postStoresChangedNotificationsForStores:(id)stores changeKey:(id)key options:(id)options;
-(id)_realStoreTypeForStoreWithType:(id)type URL:(id)url error:(id*)error;
-(id)_retainedAllMigratedObjectsInStore:(id)store toStore:(id)store2;
-(id)_saveRequestForStore:(id)store originalRequest:(id)request andOptimisticLocking:(id)locking;
-(void)_setIsRegisteredWithUbiquity:(BOOL)ubiquity;
-(id*)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;
-(id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id*)error;
-(id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id*)error;
-(BOOL)obtainPermanentIDsForObjects:(id)objects error:(id*)error;
-(id)persistentStoreCoordinator;
@end

