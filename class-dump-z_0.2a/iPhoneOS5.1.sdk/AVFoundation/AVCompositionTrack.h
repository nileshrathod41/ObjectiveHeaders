/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrack.h"

@class NSArray, AVCompositionTrackInternal;

@interface AVCompositionTrack : AVAssetTrack {
@private
	AVCompositionTrackInternal* _priv;
}
@property(readonly, assign, nonatomic) NSArray* segments;
-(id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;
-(OpaqueFigMutableComposition*)_mutableComposition;
-(void)dealloc;
-(void)finalize;
// declared property getter: -(id)segments;
@end

