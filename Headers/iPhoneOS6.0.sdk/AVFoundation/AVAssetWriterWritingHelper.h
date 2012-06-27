/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterHelper.h"
#import "AVFoundation-Structs.h"

@class AVWeakReference;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper {
@private
	AVWeakReference* _weakReference;
	OpaqueFigAssetWriter* _figAssetWriter;
	BOOL _startSessionCalled;
}
-(id)initWithConfigurationState:(id)configurationState;
-(id)initWithConfigurationState:(id)configurationState error:(id*)error;
-(void)_handleFailedNotificationWithError:(id)error;
-(void)_handleServerDiedNotification;
-(void)cancelWriting;
-(void)dealloc;
-(void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;
-(id)figTrackReferences;
-(void)finalize;
-(void)finishWriting;
-(void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;
-(int)status;
@end
