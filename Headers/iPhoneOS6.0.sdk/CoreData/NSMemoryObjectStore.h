/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSMappedObjectStore.h"


__attribute__((visibility("hidden")))
@interface NSMemoryObjectStore : NSMappedObjectStore {
}
+(id)metadataForPersistentStoreWithURL:(id)url error:(id*)error;
+(BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id*)error;
-(id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;
-(id)_archivedData;
-(void)_preflightCrossCheck;
-(void)saveDocumentToPath:(id)path;
-(id)type;
@end

