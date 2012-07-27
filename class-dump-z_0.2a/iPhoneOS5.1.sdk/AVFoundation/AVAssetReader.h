/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVAssetReaderInternal, NSArray, NSError, AVAsset;

@interface AVAssetReader : XXUnknownSuperclass {
@private
	AVAssetReaderInternal* _priv;
}
@property(readonly, assign, nonatomic) AVAsset* asset;
@property(readonly, assign) NSError* error;
@property(readonly, assign, nonatomic, getter=_figAssetReader) OpaqueFigAssetReader* figAssetReader;
@property(readonly, assign, nonatomic) NSArray* outputs;
@property(readonly, assign) int status;
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;
+(id)assetReaderWithAsset:(id)asset error:(id*)error;
+(void)initialize;
-(id)init;
-(id)initWithAsset:(id)asset error:(id*)error;
-(BOOL)_canAddOutput:(id)output exceptionReason:(id*)reason;
// declared property getter: -(OpaqueFigAssetReader*)_figAssetReader;
-(void)_handleServerDiedNotification;
-(void)_tearDownFigAssetReader;
-(void)_transitionToStatus:(int)status failureError:(id)error;
-(void)addOutput:(id)output;
// declared property getter: -(id)asset;
-(BOOL)canAddOutput:(id)output;
-(void)cancelReading;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)error;
-(void)finalize;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
// declared property getter: -(id)outputs;
// declared property setter: -(void)setTimeRange:(XXStruct_yD8eWC)range;
-(BOOL)startReading;
// declared property getter: -(int)status;
// declared property getter: -(XXStruct_yD8eWC)timeRange;
@end

