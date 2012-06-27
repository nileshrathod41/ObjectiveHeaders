/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class FigVideoLayerInternal;

@interface FigVideoLayer : XXUnknownSuperclass {
@private
	FigVideoLayerInternal* _videoLayer;
}
-(id)init;
-(id)initWithLayer:(id)layer;
-(void)_sendVideoLayerIsBeingServicedNotification;
-(void)dealloc;
-(void)finalize;
-(BOOL)isVideoLayerBeingServiced;
-(void)layerDidBecomeVisible:(BOOL)layer;
-(void)notificationBarrier;
@end

