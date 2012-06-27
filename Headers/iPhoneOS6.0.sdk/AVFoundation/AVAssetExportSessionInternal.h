/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVVideoComposition, NSArray, AVAssetTrack, NSString, NSError, NSObject, AVAudioMix, AVAsset, NSURL, AVWeakReference;
@protocol OS_dispatch_queue;

@interface AVAssetExportSessionInternal : XXUnknownSuperclass {
	AVWeakReference* weakReference;
	NSObject<OS_dispatch_queue>* readWriteQueue;
	OpaqueFigRemaker* remaker;
	int status;
	NSError* error;
	float progress;
	AVAsset* asset;
	AVAssetTrack* firstVideoTrack;
	NSString* preset;
	NSString* preset16x9;
	NSURL* outputURL;
	NSString* outputFileType;
	AVAudioMix* audioMix;
	AVVideoComposition* videoComposition;
	NSArray* metadata;
	XXStruct_yD8eWC timeRange;
	long long maxFileSize;
	id handler;
	BOOL optimizeForNetworkUse;
	BOOL outputFileCreatedByRemaker;
	BOOL useHardwareVideoEncoderIfAvailable;
	long compatibleFileTypesDispatchOncePredicate;
	NSArray* compatibleFileTypes;
	NSObject<OS_dispatch_queue>* remakerNotificationSerializationQueue;
}
@end

