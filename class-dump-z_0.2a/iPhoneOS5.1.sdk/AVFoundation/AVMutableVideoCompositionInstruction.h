/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVVideoCompositionInstruction.h"
#import "AVFoundation-Structs.h"

@class NSArray, AVMutableVideoCompositionInstructionInternal;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {
@private
	AVMutableVideoCompositionInstructionInternal* _mutableInstruction;
}
@property(retain, nonatomic) CGColorRef backgroundColor;
@property(assign, nonatomic) BOOL enablePostProcessing;
@property(copy, nonatomic) NSArray* layerInstructions;
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;
+(id)videoCompositionInstruction;
// declared property getter: -(CGColorRef)backgroundColor;
// declared property getter: -(BOOL)enablePostProcessing;
// declared property getter: -(id)layerInstructions;
// declared property setter: -(void)setBackgroundColor:(CGColorRef)color;
// declared property setter: -(void)setEnablePostProcessing:(BOOL)processing;
// declared property setter: -(void)setLayerInstructions:(id)instructions;
// declared property setter: -(void)setTimeRange:(XXStruct_yD8eWC)range;
// declared property getter: -(XXStruct_yD8eWC)timeRange;
@end

