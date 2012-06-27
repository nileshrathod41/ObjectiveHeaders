/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVMediaFileType, NSURL, NSArray;

@interface AVAssetWriterConfigurationState : XXUnknownSuperclass {
@private
	NSURL* _URL;
	AVMediaFileType* _mediaFileType;
	XXStruct_pwHToB _movieFragmentInterval;
	BOOL _shouldOptimizeForNetworkUse;
	NSArray* _metadataItems;
	int _movieTimeScale;
	NSArray* _inputs;
	NSArray* _inputGroups;
}
@property(copy, nonatomic) NSURL* URL;	// @synthesize=_URL
@property(copy, nonatomic) NSArray* inputGroups;	// @synthesize=_inputGroups
@property(copy, nonatomic) NSArray* inputs;	// @synthesize=_inputs
@property(copy, nonatomic) AVMediaFileType* mediaFileType;	// @synthesize=_mediaFileType
@property(copy, nonatomic) NSArray* metadataItems;	// @synthesize=_metadataItems
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// @synthesize=_movieFragmentInterval
@property(assign, nonatomic) int movieTimeScale;	// @synthesize=_movieTimeScale
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// @synthesize=_shouldOptimizeForNetworkUse
// declared property getter: -(id)URL;
-(void)dealloc;
// declared property getter: -(id)inputGroups;
// declared property getter: -(id)inputs;
// declared property getter: -(id)mediaFileType;
// declared property getter: -(id)metadataItems;
// declared property getter: -(XXStruct_pwHToB)movieFragmentInterval;
// declared property getter: -(int)movieTimeScale;
// declared property setter: -(void)setInputGroups:(id)groups;
// declared property setter: -(void)setInputs:(id)inputs;
// declared property setter: -(void)setMediaFileType:(id)type;
// declared property setter: -(void)setMetadataItems:(id)items;
// declared property setter: -(void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;
// declared property setter: -(void)setMovieTimeScale:(int)scale;
// declared property setter: -(void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;
// declared property setter: -(void)setURL:(id)url;
// declared property getter: -(BOOL)shouldOptimizeForNetworkUse;
@end
