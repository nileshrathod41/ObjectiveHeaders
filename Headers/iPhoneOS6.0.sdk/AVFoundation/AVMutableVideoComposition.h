/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoComposition.h"

@class AVMutableVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVMutableVideoComposition : AVVideoComposition {
@private
	AVMutableVideoCompositionInternal* _mutableVideoComposition;
}
@property(retain, nonatomic) AVVideoCompositionCoreAnimationTool* animationTool;
@property(assign, nonatomic) XXStruct_pwHToB frameDuration;
@property(copy, nonatomic) NSArray* instructions;
@property(assign, nonatomic) float renderScale;
@property(assign, nonatomic) CGSize renderSize;
+(id)videoComposition;
+(id)videoCompositionWithPropertiesOfAsset:(id)asset;
+(id)videoCompositionWithPropertiesOfAsset:(id)asset videoGravity:(id)gravity;
// declared property getter: -(id)animationTool;
-(id)compositor;
// declared property getter: -(XXStruct_pwHToB)frameDuration;
// declared property getter: -(id)instructions;
// declared property getter: -(float)renderScale;
// declared property getter: -(CGSize)renderSize;
// declared property setter: -(void)setAnimationTool:(id)tool;
-(void)setCompositor:(id)compositor;
// declared property setter: -(void)setFrameDuration:(XXStruct_pwHToB)duration;
// declared property setter: -(void)setInstructions:(id)instructions;
// declared property setter: -(void)setRenderScale:(float)scale;
// declared property setter: -(void)setRenderSize:(CGSize)size;
@end

