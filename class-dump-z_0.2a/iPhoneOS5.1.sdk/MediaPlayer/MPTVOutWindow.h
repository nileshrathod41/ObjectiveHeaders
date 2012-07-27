/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MPVideoView, MPMovieTVHUDView, NPTVOutBackgroundView;

@interface MPTVOutWindow : XXUnknownSuperclass {
	NPTVOutBackgroundView* _backgroundView;
	MPMovieTVHUDView* _hudView;
	MPVideoView* _videoView;
}
-(id)init;
-(void)_playbackStateChanged:(id)changed;
-(BOOL)_setupTargetScreen:(id)screen;
-(void)dealloc;
-(BOOL)setVideoView:(id)view;
-(id)videoView;
@end

