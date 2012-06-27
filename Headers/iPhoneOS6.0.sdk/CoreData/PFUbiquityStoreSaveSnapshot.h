/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray, NSNumber, NSMutableArray, NSMutableDictionary, NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreSaveSnapshot : XXUnknownSuperclass {
@private
	NSMutableArray* _entityNames;
	NSMutableArray* _peerIDs;
	NSMutableArray* _globalObjectIDs;
	NSMutableArray* _primaryKeys;
	NSMutableDictionary* _managedObjectIDToGlobalObjectID;
	NSMutableDictionary* _globalObjectIDToPermanentManagedObjectID;
	NSMutableDictionary* _entityNameToIndex;
	NSMutableDictionary* _peerIDToIndex;
	NSMutableDictionary* _primaryKeyToIndex;
	NSMutableDictionary* _globalObjectIDToIndex;
	NSMutableDictionary* _insertedObjects;
	NSMutableDictionary* _updatedObjects;
	NSMutableDictionary* _deletedObjects;
	NSMutableDictionary* _peerStates;
	NSNumber* _transactionNumber;
	NSString* _exportingPeerID;
	NSString* _localPeerID;
	NSDictionary* _storeOptions;
	NSMutableArray* _filesInsertedInTransaction;
	NSArray* _filesDeletedInTransaction;
}
@property(readonly, assign, nonatomic) NSDictionary* deletedObjects;	// @synthesize=_deletedObjects
@property(readonly, assign, nonatomic) NSDictionary* entityNameToIndex;	// @synthesize=_entityNameToIndex
@property(readonly, assign, nonatomic) NSArray* entityNames;	// @synthesize=_entityNames
@property(retain, nonatomic) NSString* exportingPeerID;	// @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) NSDictionary* globalObjectIDToIndex;	// @synthesize=_globalObjectIDToIndex
@property(readonly, assign, nonatomic) NSDictionary* globalObjectIDToPermanentManagedObjectID;	// @synthesize=_globalObjectIDToPermanentManagedObjectID
@property(readonly, assign, nonatomic) NSArray* globalObjectIDs;	// @synthesize=_globalObjectIDs
@property(readonly, assign, nonatomic) NSDictionary* insertedObjects;	// @synthesize=_insertedObjects
@property(retain, nonatomic) NSString* localPeerID;	// @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSDictionary* managedObjectIDToGlobalObjectID;	// @synthesize=_managedObjectIDToGlobalObjectID
@property(readonly, assign, nonatomic) NSDictionary* peerIDToIndex;	// @synthesize=_peerIDToIndex
@property(readonly, assign, nonatomic) NSArray* peerIDs;	// @synthesize=_peerIDs
@property(readonly, assign, nonatomic) NSDictionary* peerStates;	// @synthesize=_peerStates
@property(readonly, assign, nonatomic) NSDictionary* primaryKeyToIndex;	// @synthesize=_primaryKeyToIndex
@property(readonly, assign, nonatomic) NSArray* primaryKeys;	// @synthesize=_primaryKeys
@property(readonly, assign, nonatomic) NSDictionary* storeOptions;	// @synthesize=_storeOptions
@property(readonly, assign, nonatomic) NSNumber* transactionNumber;	// @synthesize=_transactionNumber
@property(readonly, assign, nonatomic) NSDictionary* updatedObjects;	// @synthesize=_updatedObjects
-(id)init;
-(id)initWithExportingPeerID:(id)exportingPeerID;
-(id)initWithPersistentStoreOptions:(id)persistentStoreOptions andExportingPeerID:(id)anId;
-(void)_setFilesDeletedInTransaction:(id)transaction;
-(id)addManagedObject:(id)object withTransactionType:(int)transactionType andStoreExportContext:(id)context withError:(id*)error;
-(id)checkIndex:(id)index forValue:(id)value fromArrayOfValues:(id)values;
-(id)compressedGlobalObjectIDFromGlobalObjectID:(id)globalObjectID;
-(id)createKnowledgeVectorFromPeerStates;
-(id)createUbiquityDictionary:(id)dictionary withStoreExportContext:(id)storeExportContext error:(id*)error;
-(void)dealloc;
// declared property getter: -(id)deletedObjects;
-(id)description;
// declared property getter: -(id)entityNameToIndex;
// declared property getter: -(id)entityNames;
// declared property getter: -(id)exportingPeerID;
-(id)filesDeletedInTransaction;
-(id)filesInsertedInTransaction;
-(void)generatePeerStatesWithStoreExportContext:(id)storeExportContext;
-(id)globalObjectIDForManagedObject:(id)managedObject withStoreExportContext:(id)storeExportContext;
-(id)globalObjectIDFromCompressedObjectID:(id)compressedObjectID;
// declared property getter: -(id)globalObjectIDToIndex;
// declared property getter: -(id)globalObjectIDToPermanentManagedObjectID;
// declared property getter: -(id)globalObjectIDs;
// declared property getter: -(id)insertedObjects;
// declared property getter: -(id)localPeerID;
// declared property getter: -(id)managedObjectIDToGlobalObjectID;
// declared property getter: -(id)peerIDToIndex;
// declared property getter: -(id)peerIDs;
// declared property getter: -(id)peerStates;
// declared property getter: -(id)primaryKeyToIndex;
// declared property getter: -(id)primaryKeys;
-(void)reserveTransactionNumberWithStoreExportContext:(id)storeExportContext;
-(void)setDeletedObjects:(id)objects;
-(void)setEntityNames:(id)names globalObjectIDs:(id)ids primaryKeys:(id)keys forStoreName:(id)storeName withRootLocation:(id)rootLocation;
// declared property setter: -(void)setExportingPeerID:(id)anId;
-(void)setInsertedObjects:(id)objects;
// declared property setter: -(void)setLocalPeerID:(id)anId;
-(void)setTransactionNumber:(id)number peerStates:(id)states andPeerIDs:(id)ids;
-(void)setUpdatedObjects:(id)objects;
// declared property getter: -(id)storeOptions;
// declared property getter: -(id)transactionNumber;
// declared property getter: -(id)updatedObjects;
@end

