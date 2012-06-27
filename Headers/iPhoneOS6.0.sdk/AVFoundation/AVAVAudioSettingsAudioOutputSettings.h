/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVReencodedAudioSettingsForFig.h"
#import "AVDecodedAudioSettingsForFig.h"
#import "AVFoundation-Structs.h"
#import "AVAudioOutputSettings.h"


@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig> {
}
+(id)_audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id*)reason;
+(id)eligibleOutputSettingsDictionaryKeys;
-(id)initWithAVAudioSettingsDictionary:(id)avaudioSettingsDictionary exceptionReason:(id*)reason;
-(id)initWithTrustedAVAudioSettingsDictionary:(id)trustedAVAudioSettingsDictionary;
-(id)audioOptions;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)reason;
-(AudioChannelLayout*)copyAudioChannelLayoutForSourceFormatDescription:(opaqueCMFormatDescription*)sourceFormatDescription audioChannelLayoutSize:(unsigned*)size;
-(void)getAudioStreamBasicDescription:(AudioStreamBasicDescription*)description forAudioFileTypeID:(unsigned long)audioFileTypeID sourceFormatDescription:(opaqueCMFormatDescription*)description3;
-(BOOL)isCodecAvailableOnCurrentSystem;
-(BOOL)willYieldCompressedSamples;
@end

