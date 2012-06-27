/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObject.h"
#import "CoreData-Structs.h"

@class NSString, NSNumber, PFUbiquityStoreMetadata, PFUbiquityPeer;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerRange : NSManagedObject {
}
@property(retain, nonatomic) NSNumber* end;	// @dynamic
@property(retain, nonatomic) PFUbiquityPeer* peer;	// @dynamic
@property(retain, nonatomic) NSNumber* peerEnd;	// @dynamic
@property(retain, nonatomic) NSString* peerEntityName;	// @dynamic
@property(retain, nonatomic) NSNumber* peerStart;	// @dynamic
@property(retain, nonatomic) NSNumber* start;	// @dynamic
@property(retain, nonatomic) PFUbiquityStoreMetadata* storeMetadata;	// @dynamic
+(id)createArrayOfRangesForAllUnmappedObjectsInStoreWithStoreMetadata:(id)storeMetadata withLocalPeerID:(id)localPeerID;
+(id)fakeManagedObjectURIForStoreMetadata:(id)storeMetadata entityName:(id)name andPrimaryKey:(id)key;
+(id)peerRangeForLocalPrimaryKey:(unsigned)localPrimaryKey inStoreNamed:(id)storeNamed andEntityName:(id)name inManagedObjectContext:(id)managedObjectContext;
-(id)createBaselineDictionary;
-(void)loadFromBaselineDictionary:(id)baselineDictionary;
-(void)loadFromStoreMetadataDictionary:(id)storeMetadataDictionary;
@end

