/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterTerminalHelper.h"
#import "AVFoundation-Structs.h"

@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
@private
	NSError* _terminalError;
}
-(id)initWithConfigurationState:(id)configurationState;
-(id)initWithConfigurationState:(id)configurationState terminalError:(id)error;
-(void)dealloc;
-(void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;
-(id)error;
-(void)finishWriting;
-(void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;
-(int)status;
@end

