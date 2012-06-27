/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterInputHelper.h"
#import "AVFoundation-Structs.h"

@class AVFigAssetWriterTrack, AVAssetWriterInputMediaDataRequester;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper {
@private
	AVFigAssetWriterTrack* _assetWriterTrack;
	AVAssetWriterInputMediaDataRequester* _mediaDataRequester;
	CVPixelBufferPoolRef _pixelBufferPool;
}
@property(readonly, assign, nonatomic, getter=_assetWriterTrack) AVFigAssetWriterTrack* assetWriterTrack;	// @synthesize=_assetWriterTrack
+(id)keyPathsForValuesAffectingReadyForMoreMediaData;
-(id)initWithConfigurationState:(id)configurationState;
-(id)initWithConfigurationState:(id)configurationState assetWriterTrack:(id)track error:(id*)error;
// declared property getter: -(id)_assetWriterTrack;
-(BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;
-(BOOL)appendSampleBuffer:(opaqueCMSampleBuffer*)buffer;
-(void)dealloc;
-(void)finalize;
-(BOOL)isReadyForMoreMediaData;
-(void)markAsFinished;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(void)prepareToEndSession;
-(BOOL)prepareToFinishWritingReturningError:(id*)finishWritingReturningError;
-(void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id)block;
-(int)status;
-(int)trackID;
-(void)transitionToTerminalStatus:(int)terminalStatus;
@end

