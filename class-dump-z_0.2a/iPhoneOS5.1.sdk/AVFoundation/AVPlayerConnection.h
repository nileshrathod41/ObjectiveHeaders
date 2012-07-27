/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <Foundation/NSAssertionHandler.h>

@class AVWeakReference, AVPlayer, NSError, AVPlayerItem;

@interface AVPlayerConnection : NSAssertionHandler {
@private
	AVWeakReference* _playerReference;
	AVWeakReference* _playerItemReference;
	BOOL _shouldAppendItem;
	int _status;
	NSError* _error;
	AVPlayerItem* _previousPlayerItem;
}
@property(readonly, assign, nonatomic) NSError* error;
@property(readonly, assign, nonatomic) AVPlayer* player;
@property(readonly, assign, nonatomic) AVPlayerItem* playerItem;
@property(readonly, assign, nonatomic) dispatch_queue_s* serializationQueue;
@property(readonly, assign, nonatomic) int status;
-(id)initWithWeakReferenceToPlayer:(id)player weakReferenceToPlayerItem:(id)playerItem shouldAppendItem:(BOOL)item;
-(BOOL)addItemToPlayQueue;
-(void)dealloc;
-(id)description;
-(void)ensureItemAddedToPlayQueueWithCompletionHandler:(id)completionHandler;
// declared property getter: -(id)error;
// declared property getter: -(id)player;
// declared property getter: -(id)playerItem;
-(void)removeItemFromPlayQueue;
// declared property getter: -(dispatch_queue_s*)serializationQueue;
// declared property getter: -(int)status;
@end

