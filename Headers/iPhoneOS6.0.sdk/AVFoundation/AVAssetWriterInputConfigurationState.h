/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString, AVOutputSettings, NSArray;

@interface AVAssetWriterInputConfigurationState : XXUnknownSuperclass {
@private
	NSString* _mediaType;
	AVOutputSettings* _outputSettings;
	opaqueCMFormatDescription* _sourceFormatHint;
	NSDictionary* _sourcePixelBufferAttributes;
	BOOL _attachedToPixelBufferAdaptor;
	NSArray* _metadataItems;
	CGAffineTransform _transform;
	int _mediaTimeScale;
	BOOL _expectsMediaDataInRealTime;
	CGSize _naturalSize;
	NSString* _languageCode;
	NSString* _extendedLanguageTag;
	BOOL _marksOutputTrackAsEnabled;
	short _alternateGroupID;
	NSDictionary* _trackReferences;
}
@property(assign, nonatomic) short alternateGroupID;	// @synthesize=_alternateGroupID
@property(assign, nonatomic) BOOL attachedToPixelBufferAdaptor;	// @synthesize=_attachedToPixelBufferAdaptor
@property(assign, nonatomic) BOOL expectsMediaDataInRealTime;	// @synthesize=_expectsMediaDataInRealTime
@property(copy, nonatomic) NSString* extendedLanguageTag;	// @synthesize=_extendedLanguageTag
@property(copy, nonatomic) NSString* languageCode;	// @synthesize=_languageCode
@property(assign, nonatomic) BOOL marksOutputTrackAsEnabled;	// @synthesize=_marksOutputTrackAsEnabled
@property(assign, nonatomic) int mediaTimeScale;	// @synthesize=_mediaTimeScale
@property(copy, nonatomic) NSString* mediaType;	// @synthesize=_mediaType
@property(copy, nonatomic) NSArray* metadataItems;	// @synthesize=_metadataItems
@property(assign, nonatomic) CGSize naturalSize;	// @synthesize=_naturalSize
@property(copy, nonatomic) AVOutputSettings* outputSettings;	// @synthesize=_outputSettings
@property(retain, nonatomic) opaqueCMFormatDescription* sourceFormatHint;	// @synthesize=_sourceFormatHint
@property(copy, nonatomic) NSDictionary* sourcePixelBufferAttributes;	// @synthesize=_sourcePixelBufferAttributes
@property(copy, nonatomic) NSDictionary* trackReferences;	// @synthesize=_trackReferences
@property(assign, nonatomic) CGAffineTransform transform;	// @synthesize=_transform
// declared property getter: -(short)alternateGroupID;
// declared property getter: -(BOOL)attachedToPixelBufferAdaptor;
-(void)dealloc;
// declared property getter: -(BOOL)expectsMediaDataInRealTime;
// declared property getter: -(id)extendedLanguageTag;
// declared property getter: -(id)languageCode;
// declared property getter: -(BOOL)marksOutputTrackAsEnabled;
// declared property getter: -(int)mediaTimeScale;
// declared property getter: -(id)mediaType;
// declared property getter: -(id)metadataItems;
// declared property getter: -(CGSize)naturalSize;
// declared property getter: -(id)outputSettings;
// declared property setter: -(void)setAlternateGroupID:(short)anId;
// declared property setter: -(void)setAttachedToPixelBufferAdaptor:(BOOL)pixelBufferAdaptor;
// declared property setter: -(void)setExpectsMediaDataInRealTime:(BOOL)realTime;
// declared property setter: -(void)setExtendedLanguageTag:(id)tag;
// declared property setter: -(void)setLanguageCode:(id)code;
// declared property setter: -(void)setMarksOutputTrackAsEnabled:(BOOL)enabled;
// declared property setter: -(void)setMediaTimeScale:(int)scale;
// declared property setter: -(void)setMediaType:(id)type;
// declared property setter: -(void)setMetadataItems:(id)items;
// declared property setter: -(void)setNaturalSize:(CGSize)size;
// declared property setter: -(void)setOutputSettings:(id)settings;
// declared property setter: -(void)setSourceFormatHint:(opaqueCMFormatDescription*)hint;
// declared property setter: -(void)setSourcePixelBufferAttributes:(id)attributes;
// declared property setter: -(void)setTrackReferences:(id)references;
// declared property setter: -(void)setTransform:(CGAffineTransform)transform;
// declared property getter: -(opaqueCMFormatDescription*)sourceFormatHint;
// declared property getter: -(id)sourcePixelBufferAttributes;
// declared property getter: -(id)trackReferences;
// declared property getter: -(CGAffineTransform)transform;
@end

