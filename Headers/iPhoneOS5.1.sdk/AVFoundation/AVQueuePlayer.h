/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVPlayer.h"

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
@private
	AVQueuePlayerInternal* _queuePlayer;
}
+(void)initialize;
+(id)playerWithPlayerItem:(id)playerItem;
+(id)playerWithURL:(id)url;
+(id)queuePlayerWithItems:(id)items;
-(id)init;
-(id)initWithItems:(id)items;
-(int)_defaultActionAtItemEnd;
-(void)_enqueueModification:(id)modification;
-(BOOL)_shouldEnqueueModifications;
-(void)advanceToNextItem;
-(void)beginModifications;
-(BOOL)canInsertItem:(id)item afterItem:(id)item2;
-(void)commitModifications;
-(void)dealloc;
-(void)insertItem:(id)item afterItem:(id)item2;
-(id)items;
-(void)removeAllItems;
-(void)removeItem:(id)item;
-(void)setActionAtItemEnd:(int)itemEnd;
@end
