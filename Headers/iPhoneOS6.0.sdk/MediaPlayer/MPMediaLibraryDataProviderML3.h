/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MPMediaLibraryDataProviderPrivate.h"

@class NSArray, ML3MusicLibrary, NSObject, NSString, NSSet;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;

@interface MPMediaLibraryDataProviderML3 : XXUnknownSuperclass <MPMediaLibraryDataProviderPrivate> {
	NSObject<OS_dispatch_queue>* _backgroundTaskQueue;
	unsigned _backgroundTask;
	unsigned _backgroundTaskCount;
	ML3MusicLibrary* _library;
	int _refreshState;
	NSObject<OS_dispatch_semaphore>* _refreshSema;
@private
	NSString* _uniqueIdentifier;
}
@property(readonly, assign, nonatomic) BOOL isGeniusEnabled;
@property(retain, nonatomic) ML3MusicLibrary* library;	// @synthesize=_library
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSArray* preferredAudioLanguages;
@property(readonly, assign, nonatomic) NSArray* preferredSubtitleLanguages;
@property(readonly, assign, nonatomic) NSSet* propertiesToCache;
@property(readonly, assign, nonatomic) BOOL requiresAuthentication;
@property(readonly, assign, nonatomic) NSString* syncValidity;
@property(copy, nonatomic) NSString* ubiquitousBookmarkDomainVersionAnchorToken;
@property(assign, nonatomic) unsigned long long ubiquitousBookmarkEntityRevisionAnchor;
@property(readonly, assign, nonatomic) NSString* uniqueIdentifier;
+(id)_unadjustedValueForMPProperty:(id)mpproperty withDefaultValue:(id)defaultValue;
-(id)initWithLibrary:(id)library;
-(void)_coalesceEvents;
-(void)_displayValuesDidChange:(id)_displayValues;
-(void)_dynamicPropertiesDidChange:(id)_dynamicProperties;
-(void)_invisiblePropertiesDidChange:(id)_invisibleProperties;
-(void)_libraryContentsDidChange:(id)_libraryContents;
-(void)_loadEntitiesUsingFetchRequest:(id)request entityQuery:(id)query writeBlock:(id)block;
-(void)_loadProperties:(id)properties ofEntityWithIdentifier:(long long)identifier ML3EntityClass:(Class)aClass completionBlock:(id)block;
-(void)_loadValueForAggregateFunction:(id)aggregateFunction entityClass:(Class)aClass property:(id)property query:(id)query completionBlock:(id)block;
-(void)_postEvents;
-(BOOL)_removeEntitiesWithIdentifiers:(long long*)identifiers count:(unsigned)count entityClass:(Class)aClass;
-(void)_syncGenerationDidChange:(id)_syncGeneration;
-(void)addItemWithIdentifier:(long long)identifier toPlaylistWithIdentifier:(long long)identifier2 completionBlock:(id)block;
-(void)addItemsWithIdentifiers:(long long*)identifiers count:(unsigned)count toPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;
-(long long)addPlaylistWithValuesForProperties:(id)properties;
-(id)adjustedValueForMPProperty:(id)mpproperty ofEntity:(id)entity withDefaultValue:(id)defaultValue;
-(id)collectionResultSetForQueryCriteria:(id)queryCriteria;
-(unsigned long long)currentEntityRevision;
-(void)dealloc;
-(void)downloadItemWithIdentifier:(long long)identifier completionHandler:(id)handler;
-(void)enumerateCollectionIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)anchor itemBlock:(id)block collectionBlock:(id)block3;
-(void)enumerateItemIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;
-(BOOL)hasGeniusMixes;
-(BOOL)hasMediaOfType:(int)type;
-(BOOL)hasUniversalBookmarkableItems;
-(BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;
-(long long)itemPersistentIDForStoreID:(long long)storeID;
-(id)itemResultSetForQueryCriteria:(id)queryCriteria;
-(id)lastModifiedDate;
// declared property getter: -(id)library;
-(void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
-(void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;
-(void)loadCollectionsUsingFetchRequest:(id)request;
-(void)loadItemsUsingFetchRequest:(id)request;
-(void)loadProperties:(id)properties ofCollectionWithIdentifier:(long long)identifier completionBlock:(id)block;
-(void)loadProperties:(id)properties ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
-(void)loadQueryCriteria:(id)criteria countOfCollectionsWithCompletionBlock:(id)completionBlock;
-(void)loadQueryCriteria:(id)criteria countOfItemsWithCompletionBlock:(id)completionBlock;
-(void)loadQueryCriteria:(id)criteria hasCollectionsWithCompletionBlock:(id)completionBlock;
-(void)loadQueryCriteria:(id)criteria hasItemsWithCompletionBlock:(id)completionBlock;
-(void)loadValueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;
-(void)loadValueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;
-(void)moveItemFromIndex:(unsigned)index toIndex:(unsigned)index2 inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;
// declared property getter: -(id)name;
-(void)performBackgroundTaskWithBlock:(id)block;
-(void)performReadTransactionWithBlock:(id)block;
-(BOOL)performTransactionWithBlock:(id)block;
-(BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;
-(long long)playlistGeneration;
-(void)populateLocationPropertiesOfItemWithIdentifier:(long long)identifier withPath:(id)path;
// declared property getter: -(id)preferredAudioLanguages;
// declared property getter: -(id)preferredSubtitleLanguages;
-(void)removeAllItemsInPlaylistWithIdentifier:(long long)identifier;
-(void)removeItemsWithIdentifiers:(long long*)identifiers atFilteredIndexes:(id)filteredIndexes inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;
-(BOOL)removeItemsWithIdentifiers:(long long*)identifiers count:(unsigned)count;
-(BOOL)removePlaylistWithIdentifier:(long long)identifier;
// declared property setter: -(void)setLibrary:(id)library;
// declared property setter: -(void)setUbiquitousBookmarkDomainVersionAnchorToken:(id)token;
// declared property setter: -(void)setUbiquitousBookmarkEntityRevisionAnchor:(unsigned long long)anchor;
-(BOOL)setValue:(id)value forProperty:(id)property ofItemWithIdentifier:(long long)identifier;
-(BOOL)setValue:(id)value forProperty:(id)property ofPlaylistWithIdentifier:(long long)identifier;
-(unsigned long long)syncGenerationID;
// declared property getter: -(id)syncValidity;
// declared property getter: -(id)ubiquitousBookmarkDomainVersionAnchorToken;
// declared property getter: -(unsigned long long)ubiquitousBookmarkEntityRevisionAnchor;
// declared property getter: -(id)uniqueIdentifier;
-(void)updateUbiquitousValuesForTrackWithKey:(id)key mediaPropertyValues:(id)values timestamp:(double)timestamp;
-(BOOL)writable;
@end

