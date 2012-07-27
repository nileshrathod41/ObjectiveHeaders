/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterInputHelper.h"
#import "AVFoundation-Structs.h"


@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper {
}
-(id)initWithConfigurationState:(id)configurationState;
-(id)initWithMediaType:(id)mediaType outputSettings:(id)settings;
-(void)setExpectsMediaDataInRealTime:(BOOL)realTime;
-(void)setMediaTimeScale:(int)scale;
-(void)setMetadata:(id)metadata;
-(void)setSampleBufferFormatHint:(opaqueCMFormatDescription*)hint;
-(void)setSourcePixelBufferAttributes:(id)attributes;
-(void)setTransform:(CGAffineTransform)transform;
-(int)status;
@end
