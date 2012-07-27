/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVOutputSettings, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInputConfigurationState : XXUnknownSuperclass {
@private
	NSString* _mediaType;
	AVOutputSettings* _outputSettings;
	opaqueCMFormatDescription* _sampleBufferFormatHint;
	NSDictionary* _sourcePixelBufferAttributes;
	BOOL _attachedToPixelBufferAdaptor;
	NSArray* _metadataItems;
	CGAffineTransform _transform;
	int _mediaTimeScale;
	BOOL _expectsMediaDataInRealTime;
}
@property(assign, nonatomic) BOOL attachedToPixelBufferAdaptor;	// @synthesize=_attachedToPixelBufferAdaptor
@property(assign, nonatomic) BOOL expectsMediaDataInRealTime;	// @synthesize=_expectsMediaDataInRealTime
@property(assign, nonatomic) int mediaTimeScale;	// @synthesize=_mediaTimeScale
@property(copy, nonatomic) NSString* mediaType;	// @synthesize=_mediaType
@property(copy, nonatomic) NSArray* metadataItems;	// @synthesize=_metadataItems
@property(copy, nonatomic) AVOutputSettings* outputSettings;	// @synthesize=_outputSettings
@property(retain, nonatomic) opaqueCMFormatDescription* sampleBufferFormatHint;	// @synthesize=_sampleBufferFormatHint
@property(copy, nonatomic) NSDictionary* sourcePixelBufferAttributes;	// @synthesize=_sourcePixelBufferAttributes
@property(assign, nonatomic) CGAffineTransform transform;	// @synthesize=_transform
// declared property getter: -(BOOL)attachedToPixelBufferAdaptor;
-(void)dealloc;
// declared property getter: -(BOOL)expectsMediaDataInRealTime;
// declared property getter: -(int)mediaTimeScale;
// declared property getter: -(id)mediaType;
// declared property getter: -(id)metadataItems;
// declared property getter: -(id)outputSettings;
// declared property getter: -(opaqueCMFormatDescription*)sampleBufferFormatHint;
// declared property setter: -(void)setAttachedToPixelBufferAdaptor:(BOOL)pixelBufferAdaptor;
// declared property setter: -(void)setExpectsMediaDataInRealTime:(BOOL)realTime;
// declared property setter: -(void)setMediaTimeScale:(int)scale;
// declared property setter: -(void)setMediaType:(id)type;
// declared property setter: -(void)setMetadataItems:(id)items;
// declared property setter: -(void)setOutputSettings:(id)settings;
// declared property setter: -(void)setSampleBufferFormatHint:(opaqueCMFormatDescription*)hint;
// declared property setter: -(void)setSourcePixelBufferAttributes:(id)attributes;
// declared property setter: -(void)setTransform:(CGAffineTransform)transform;
// declared property getter: -(id)sourcePixelBufferAttributes;
// declared property getter: -(CGAffineTransform)transform;
@end

