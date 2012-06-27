/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPNondurableMediaItem.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class NSDictionary, MPStoreOfferContentRating;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSCoding, NSCopying> {
@private
	NSDictionary* _lookupCollectionPropertyValues;
	unsigned _indexInCollectionItems;
	int _preferredStoreOfferVariant;
	MPStoreOfferContentRating* _contentRating;
}
+(id)assetLookupKeyForItemMediaProperty:(id)itemMediaProperty;
+(BOOL)canFilterByProperty:(id)property;
+(BOOL)canMergeStoreOfferMediaItemsLocalItems:(id)items;
+(id)collectionLookupKeyForMediaProperty:(id)mediaProperty;
+(id)contentRatingForCollectionPropertyValues:(id)collectionPropertyValues itemIndex:(unsigned)index;
+(id)fallbackPropertyValues;
+(id)itemLookupKeyForMediaProperty:(id)mediaProperty;
+(id)localRepresentativeItemPropertyForMediaProperty:(id)mediaProperty;
+(id)mediaItemsByMergingStoreOfferMediaItems:(id)items localItems:(id)items2;
+(id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)storeLookupCollectionPropertyValues preferredStoreOfferVariant:(int)variant;
+(id)mediaValueForStoreLookupCollectionPropertyValues:(id)storeLookupCollectionPropertyValues itemIndex:(unsigned)index mediaProperty:(id)property;
+(id)mediaitemsByRemovingRestrictedContentFromMediaItems:(id)mediaItems;
+(id)offerDictionariesForLookupCollectionPropertyValues:(id)lookupCollectionPropertyValues itemIndex:(unsigned)index;
+(id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)itemResponseDictionary;
+(id)offerLookupKeyForItemMediaProperty:(id)itemMediaProperty;
+(id)preferredAssetDictionaryInOfferDictionary:(id)offerDictionary;
-(id)initWithCoder:(id)coder;
-(id)initWithLookupLookupCollectionPropertyValues:(id)lookupLookupCollectionPropertyValues preferredStoreOfferVariant:(int)variant itemIndex:(unsigned)index;
-(BOOL)_isSeasonPass;
-(id)_lookupOfferDictionaries;
-(BOOL)_offeredItemAlreadyExists;
-(id)buyOfferForVariant:(int)variant;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(unsigned)hash;
-(BOOL)isDownloadable;
-(BOOL)isEqual:(id)equal;
-(id)mediaLibrary;
-(int)preferredStoreOfferVariant;
-(void)setValue:(id)value forProperty:(id)property;
-(id)valueForProperty:(id)property;
@end

