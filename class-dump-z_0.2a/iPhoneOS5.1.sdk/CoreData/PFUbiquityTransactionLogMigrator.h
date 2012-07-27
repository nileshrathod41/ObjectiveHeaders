/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSSet, NSManagedObjectModel, NSMappingModel;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionLogMigrator : XXUnknownSuperclass {
@private
	NSManagedObjectModel* _srcModel;
	NSManagedObjectModel* _dstModel;
	NSMappingModel* _mappingModel;
	NSDictionary* _mappingsByEntityName;
	NSSet* _removedEntities;
	BOOL _throttleLogs;
}
@property(readonly, assign) BOOL throttleLogs;	// @synthesize=_throttleLogs
-(id)initWithSourceModel:(id)sourceModel destinationModel:(id)model mappingModel:(id)model3;
-(id)createDestinationGlobalObjectIDFromSourceGlobalObjectID:(id)sourceGlobalObjectID;
-(id)createDestinationObjectContentFromSourceObjectContent:(id)sourceObjectContent withEntityMapping:(id)entityMapping migrationContext:(id)context;
-(id)createDestinationObjectsFromSourceObjects:(id)sourceObjects migrationContext:(id)context;
-(void)dealloc;
-(BOOL)migrateBaselineFromLocation:(id)location toLocation:(id)location2 error:(id*)error;
-(BOOL)migrateTransactionLogFromLocation:(id)location toLocation:(id)location2 error:(id*)error;
-(BOOL)migrateTransactionLogsForStoreName:(id)storeName andLocalPeerID:(id)anId atUbiquityRootLocation:(id)ubiquityRootLocation error:(id*)error;
-(void)populateMappingsByEntityName;
// declared property getter: -(BOOL)throttleLogs;
@end

