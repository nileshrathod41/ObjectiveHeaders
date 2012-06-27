/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVVideoComposition, NSArray, NSString, AVAssetExportSessionInternal, NSError, AVAudioMix, AVAsset, NSURL;

@interface AVAssetExportSession : XXUnknownSuperclass {
@private
	AVAssetExportSessionInternal* _exportSession;
}
@property(readonly, assign, nonatomic) AVAsset* asset;
@property(copy, nonatomic) AVAudioMix* audioMix;
@property(readonly, assign, nonatomic) NSError* error;
@property(readonly, assign, nonatomic) long long estimatedOutputFileLength;
@property(assign, nonatomic) long long fileLengthLimit;
@property(readonly, assign, nonatomic) XXStruct_pwHToB maxDuration;
@property(copy, nonatomic) NSArray* metadata;
@property(copy, nonatomic) NSString* outputFileType;
@property(copy, nonatomic) NSURL* outputURL;
@property(readonly, assign, nonatomic) NSString* presetName;
@property(readonly, assign, nonatomic) float progress;
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;
@property(readonly, assign, nonatomic) int status;
@property(readonly, assign, nonatomic) NSArray* supportedFileTypes;
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;
@property(copy, nonatomic) AVVideoComposition* videoComposition;
+(id)_audioOnlyPresets;
+(id)_audioVideoPresets;
+(BOOL)_canWriteMediaOfAsset:(id)asset toFileType:(id)fileType;
+(long long)_estimatedOutputFileLengthForPreset:(id)preset duration:(XXStruct_pwHToB)duration properties:(id)properties;
+(id)_figRemakerNotificationNames;
+(int)_getPassthroughExportPolicyForAssetTrack:(id)assetTrack fileType:(id)type asChapterTrack:(BOOL)track;
+(BOOL)_isCompositionWithMultipleNonEmptyEdits:(id)multipleNonEmptyEdits;
+(BOOL)_isExportPreset:(id)preset compatibleWithAsset:(id)asset outputFileType:(id)type;
+(BOOL)_isNonPassthroughExportPreset:(id)preset compatibleWithAsset:(id)asset outputFileType:(id)type;
+(BOOL)_isNonPassthroughExportPreset:(id)preset compatibleWithAssetContainingPlayableAudio:(BOOL)assetContainingPlayableAudio playableVideo:(BOOL)video outputFileType:(id)type;
+(BOOL)_isPassthroughExportPresetCompatibleWithAsset:(id)asset outputFileType:(id)type;
+(BOOL)_isPassthroughSupportedForAsset:(id)asset;
+(XXStruct_pwHToB)_maximumDurationForPreset:(id)preset fileSizeBytesLimit:(long long)limit properties:(id)properties;
+(id)_settingForPreset:(id)preset;
+(id)_utTypesForAudioOnly;
+(id)_utTypesForDefaultPassthroughPreset;
+(id)_utTypesForPresets;
+(id)allExportPresets;
+(void)determineCompatibilityOfExportPreset:(id)exportPreset withAsset:(id)asset outputFileType:(id)type completionHandler:(id)handler;
+(long long)estimatedOutputFileLengthForPreset:(id)preset duration:(XXStruct_pwHToB)duration properties:(id)properties;
+(id)exportPresetsCompatibleWithAsset:(id)asset;
+(id)exportSessionWithAsset:(id)asset presetName:(id)name;
+(XXStruct_pwHToB)maximumDurationForPreset:(id)preset properties:(id)properties;
-(id)init;
-(id)initWithAsset:(id)asset presetName:(id)name;
-(id)_actualPresetName;
-(id)_actualSettingForPreset:(id)preset;
-(void)_addListeners;
-(BOOL)_canPassThroughAudio:(id)audio checkEnabled:(BOOL)enabled checkProtected:(BOOL)aProtected;
-(BOOL)_canPassThroughVideo:(id)video checkEnabled:(BOOL)enabled checkAll:(BOOL)all checkProtected:(BOOL)aProtected;
-(OpaqueFigRemaker*)_createFigRemaker;
-(id)_determineCompatibleFileTypes;
-(CGSize)_getSourceDimension;
-(int)_getTrackCountOfType:(id)type checkEnabled:(BOOL)enabled;
-(void)_handleFigRemakerNotification:(id)notification payload:(id)payload;
-(void)_handleFigRemakerNotificationAsync:(id)async payload:(id)payload;
-(BOOL)_hasProtectedNonAudioVideoTracks;
-(BOOL)_isAudioMixdownRequired:(CFStringRef)required error:(id*)error;
-(void)_removeListeners;
-(id)_retrieveChannelSpecificAudioSettingForAudioTrack:(id)audioTrack fromAudioSetting:(id)audioSetting;
-(id)_settingForFigRemaker;
-(BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)tracksIsWithinFileLengthLimit forSetting:(id)setting;
-(void)_transitionToStatus:(int)status error:(id)error;
-(void)_updateProgress;
-(BOOL)_validateSettablePropertiesReturningError:(id*)error;
// declared property getter: -(id)asset;
// declared property getter: -(id)audioMix;
-(void)cancelExport;
-(void)dealloc;
-(id)description;
-(void)determineCompatibleFileTypesWithCompletionHandler:(id)completionHandler;
// declared property getter: -(id)error;
// declared property getter: -(long long)estimatedOutputFileLength;
-(void)exportAsynchronouslyWithCompletionHandler:(id)completionHandler;
// declared property getter: -(long long)fileLengthLimit;
-(void)finalize;
// declared property getter: -(XXStruct_pwHToB)maxDuration;
// declared property getter: -(id)metadata;
// declared property getter: -(id)outputFileType;
// declared property getter: -(id)outputURL;
// declared property getter: -(id)presetName;
// declared property getter: -(float)progress;
// declared property setter: -(void)setAudioMix:(id)mix;
// declared property setter: -(void)setFileLengthLimit:(long long)limit;
// declared property setter: -(void)setMetadata:(id)metadata;
// declared property setter: -(void)setOutputFileType:(id)type;
// declared property setter: -(void)setOutputURL:(id)url;
// declared property setter: -(void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;
// declared property setter: -(void)setTimeRange:(XXStruct_yD8eWC)range;
-(void)setUsesHardwareVideoEncoderIfAvailable:(BOOL)available;
// declared property setter: -(void)setVideoComposition:(id)composition;
// declared property getter: -(BOOL)shouldOptimizeForNetworkUse;
// declared property getter: -(int)status;
// declared property getter: -(id)supportedFileTypes;
// declared property getter: -(XXStruct_yD8eWC)timeRange;
-(BOOL)usesHardwareVideoEncoderIfAvailable;
// declared property getter: -(id)videoComposition;
@end

