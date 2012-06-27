/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVDecodedVideoSettingsForFig.h"
#import "AVVideoOutputSettings.h"

@class NSDictionary;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
}
@property(readonly, assign, nonatomic) NSDictionary* pixelBufferAttributes;
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id*)reason;
+(id)eligibleOutputSettingsDictionaryKeys;
-(id)initWithPixelBufferAttributes:(id)pixelBufferAttributes exceptionReason:(id*)reason;
-(id)initWithTrustedPixelBufferAttributes:(id)trustedPixelBufferAttributes;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)reason;
-(int)height;
-(BOOL)isCodecAvailableOnCurrentSystem;
// declared property getter: -(id)pixelBufferAttributes;
-(int)width;
-(BOOL)willYieldCompressedSamples;
@end

