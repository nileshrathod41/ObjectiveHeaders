/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVComposition.h"

@class NSArray, AVMutableCompositionInternal;

@interface AVMutableComposition : AVComposition {
@private
	AVMutableCompositionInternal* _mutablePriv;
}
@property(assign, nonatomic) CGSize naturalSize;
@property(readonly, assign, nonatomic) NSArray* tracks;
+(id)composition;
-(id)_initWithComposition:(id)composition;
-(id)_newTrackForIndex:(long)index;
-(void)_notifyAllTracksThatSegmentsDidChange;
-(id)addMutableTrackWithMediaType:(id)mediaType preferredTrackID:(int)anId;
-(id)copyWithZone:(NSZone*)zone;
-(void)insertEmptyTimeRange:(XXStruct_yD8eWC)range;
-(BOOL)insertTimeRange:(XXStruct_yD8eWC)range ofAsset:(id)asset atTime:(XXStruct_pwHToB)time error:(id*)error;
-(id)mutableTrackCompatibleWithTrack:(id)track;
// declared property getter: -(CGSize)naturalSize;
-(void)removeTimeRange:(XXStruct_yD8eWC)range;
-(void)removeTrack:(id)track;
-(void)scaleTimeRange:(XXStruct_yD8eWC)range toDuration:(XXStruct_pwHToB)duration;
// declared property setter: -(void)setNaturalSize:(CGSize)size;
// declared property getter: -(id)tracks;
@end
