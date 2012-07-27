/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSObject.h"


@protocol MPPlaybackControlsDelegate <NSObject>
@optional
-(void)controlsOverlay:(id)overlay didClickMailPodcastLinkButtonForItem:(id)item;
-(void)controlsOverlay:(id)overlay didTapSocialLikeButtonForItem:(id)item;
-(void)controlsOverlay:(id)overlay didTapSocialPostButtonForItem:(id)item;
-(unsigned)controlsOverlay:(id)overlay playbackSpeedForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldDisableMailPodcastLinkButtonForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldDisablePlaybackSpeedButtonForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldDisableRewindButtonForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldHideMailPodcastLinkButtonForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldHideSocialLikeButtonForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldHideSocialPostButtonForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldSelectSocialLikeButtonForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldUseDetailScrubberForItem:(id)item;
-(void)controlsOverlayDetailSliderInstructionOverlayWillHide:(id)controlsOverlayDetailSliderInstructionOverlay;
-(void)controlsOverlayDetailSliderInstructionOverlayWillShow:(id)controlsOverlayDetailSliderInstructionOverlay;
-(void)controlsOverlayDetailSliderTrackingDidBegin:(id)controlsOverlayDetailSliderTracking;
-(void)controlsOverlayDetailSliderTrackingDidEnd:(id)controlsOverlayDetailSliderTracking;
-(void)controlsOverlayDidClickPlaybackSpeedButton:(id)controlsOverlay;
-(void)controlsOverlayDidClickRewindButton:(id)controlsOverlay;
-(BOOL)hideGeniusButtonForPlaybackControls:(id)playbackControls;
-(BOOL)playbackControls:(id)controls changedRepeatType:(unsigned)type;
-(BOOL)playbackControls:(id)controls changedShuffleType:(unsigned)type;
-(BOOL)playbackControlsDidTapGeniusButton:(id)playbackControls;
-(BOOL)playbackControlsScrubberShouldDisplaySingleChapters:(id)playbackControlsScrubber;
-(unsigned)repeatTypeForPlaybackControls:(id)playbackControls;
-(unsigned)shuffleTypeForPlaybackControls:(id)playbackControls;
@end

