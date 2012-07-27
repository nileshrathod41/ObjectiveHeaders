/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVAudioMixInternal, NSArray;

@interface AVAudioMix : XXUnknownSuperclass <NSCopying, NSMutableCopying> {
@private
	AVAudioMixInternal* _audioMix;
}
@property(readonly, assign, nonatomic) NSArray* inputParameters;
-(id)init;
-(id)_audioVolumeCurveForTrackID:(int)trackID;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)finalize;
// declared property getter: -(id)inputParameters;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(void)setInputParameters:(id)parameters;
@end

