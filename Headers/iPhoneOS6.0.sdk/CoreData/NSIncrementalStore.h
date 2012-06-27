/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSPersistentStore.h"

@class NSDictionary;

@interface NSIncrementalStore : NSPersistentStore {
@private
	NSDictionary* _storeMetadata;
	unsigned long long _lastIdentifier;
	void* _reserveda;
	void* _reservedb;
}
+(id)identifierForNewStoreAtURL:(id)url;
+(id)metadataForPersistentStoreWithURL:(id)url error:(id*)error;
+(BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id*)error;
-(void)_preflightCrossCheck;
-(BOOL)_prepareForExecuteRequest:(id)executeRequest withContext:(id)context error:(id*)error;
-(id)_rawMetadata__;
-(void)dealloc;
-(id)executeRequest:(id)request withContext:(id)context error:(id*)error;
-(BOOL)load:(id*)load;
-(BOOL)loadMetadata:(id*)metadata;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;
-(id)metadata;
-(id)newObjectIDForEntity:(id)entity referenceObject:(id)object;
-(id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id*)error;
-(id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id*)error;
-(id)obtainPermanentIDsForObjects:(id)objects error:(id*)error;
-(id)referenceObjectForObjectID:(id)objectID;
-(void)setMetadata:(id)metadata;
@end

