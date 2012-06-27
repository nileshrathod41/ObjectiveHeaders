/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : XXUnknownSuperclass <NSCopying, AVAsynchronousKeyValueLoading> {
@private
	AVAssetTrackInternal* _track;
}
@property(readonly, assign, nonatomic) AVAsset* asset;
@property(readonly, assign, nonatomic) int trackID;
+(id)keyPathsForValuesAffectingTimeRange;
+(id)mediaTypesForMediaCharacteristics;
-(id)init;
-(id)_allReferencedTracksWithReferenceType:(id)referenceType;
-(id)_assetTrackInspector;
-(id)_fallbackTrack;
-(id)_firstReferencedTrackWithReferenceType:(id)referenceType;
-(id)_followingTrackAmongTracks:(id)tracks;
-(BOOL)_hasMultipleNonEmptyEdits;
-(id)_initWithAsset:(id)asset trackID:(int)anId;
-(id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;
-(id)_initWithAsset:(id)asset trackIndex:(long)index;
-(id)_mostCloselyAssociatedTrackAmongTracks:(id)tracks;
-(id)_pairedForcedOnlySubtitlesTrack;
-(BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)flags flagsMask:(unsigned)mask;
// declared property getter: -(id)asset;
-(id)availableMetadataFormats;
-(id)commonMetadata;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(CGSize)dimensions;
-(float)estimatedDataRate;
-(id)extendedLanguageTag;
-(void)finalize;
-(id)formatDescriptions;
-(BOOL)hasMediaCharacteristic:(id)characteristic;
-(BOOL)hasMediaCharacteristics:(id)characteristics;
-(unsigned)hash;
-(BOOL)isEnabled;
-(BOOL)isEqual:(id)equal;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(BOOL)isPlayable;
-(BOOL)isSelfContained;
-(id)languageCode;
-(int)layer;
-(void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;
-(id)locale;
-(id)mediaCharacteristics;
-(id)mediaType;
-(id)metadataForFormat:(id)format;
-(CGSize)naturalSize;
-(int)naturalTimeScale;
-(float)nominalFrameRate;
-(CGAffineTransform)preferredTransform;
-(float)preferredVolume;
-(XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;
-(id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;
-(id)segments;
-(int)statusOfValueForKey:(id)key;
-(int)statusOfValueForKey:(id)key error:(id*)error;
-(XXStruct_yD8eWC)timeRange;
-(long long)totalSampleDataLength;
// declared property getter: -(int)trackID;
@end

