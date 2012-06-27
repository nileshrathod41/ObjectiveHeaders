/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MPDetailSliderDelegate.h"

@class MPButton, CABasicAnimation, MPAVItem, UIImage, MPTimeMarker, UIActivityIndicatorView, UILabel, UIView, MPDetailSlider, MPAVController;
@protocol MPPlaybackControlsDelegate;

@interface MPPlaybackControlsView : XXUnknownSuperclass <MPDetailSliderDelegate> {
	UIActivityIndicatorView* _activityIndicator;
	id<MPPlaybackControlsDelegate> _delegate;
	MPButton* _fastFowardButton;
	UIView* _fastFowardButtonBezel;
	MPButton* _geniusButton;
	MPAVItem* _item;
	MPTimeMarker* _markerForProgressControlDuration;
	MPButton* _mailButton;
	MPButton* _playbackSpeedButton;
	MPDetailSlider* _progressControl;
	MPButton* _repeatButton;
	MPButton* _rewindButton;
	UIView* _rewindButtonBezel;
	CABasicAnimation* _rewindOpacityAnimation;
	MPAVController* _player;
	double _progressOffset;
	float _seekedToValue;
	MPButton* _shuffleButton;
	MPButton* _socialLikeButton;
	MPButton* _socialPostButton;
	double _tickInterval;
	UILabel* _trackInfoLabel;
	unsigned long long _visibleParts;
	unsigned _wantsTick : 1;
	unsigned _geniusButtonDisabled : 1;
	unsigned _fastForwardAndRewindButtonDisabled : 1;
	unsigned _playbackSpeedButtonDisabled : 1;
	unsigned _mailButtonDisabled : 1;
	unsigned _mailButtonHidden : 1;
	unsigned _socialLikeButtonHidden : 1;
	unsigned _socialLikeButtonSelected : 1;
	unsigned _socialPostButtonHidden : 1;
	unsigned _useMediaDetailSlider : 1;
	unsigned _detailScrubbing : 1;
	unsigned _needsUpdateButtonVisibility : 1;
}
@property(assign, nonatomic) id<MPPlaybackControlsDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL hideGeniusButton;
@property(readonly, assign, nonatomic) BOOL isScrubbing;
@property(retain, nonatomic) MPAVItem* item;	// @synthesize=_item
@property(readonly, assign, nonatomic) UIImage* mailButtonImage;
@property(retain, nonatomic) MPAVController* player;	// @synthesize=_player
@property(readonly, assign, nonatomic) UIImage* repeatButtonImage;
@property(readonly, assign, nonatomic) unsigned repeatType;
@property(readonly, assign, nonatomic) UIImage* shuffleButtonImage;
@property(readonly, assign, nonatomic) BOOL shuffleIsOn;
@property(readonly, assign, nonatomic) unsigned shuffleType;
@property(assign, nonatomic) unsigned long long visibleParts;	// @synthesize=_visibleParts
+(unsigned)defaultVisibleParts;
-(id)initWithFrame:(CGRect)frame;
-(void)_addOpacityAnimationToBezelView:(id)bezelView reversed:(BOOL)reversed;
-(void)_applicationDidBecomeActiveNotification:(id)_application;
-(void)_applicationWillResignActiveNotification:(id)_application;
-(void)_changeGeniusImageToNormalImage:(id)normalImage;
-(void)_changeGeniusImageToPressedImage:(id)pressedImage;
-(void)_contentsChangedNotification:(id)notification;
-(double)_currentDisplayTime;
-(void)_fastForwardButton:(id)button;
-(void)_geniusButton:(id)button;
-(void)_handleGeniusButtonClick;
-(void)_initializeControls;
-(void)_isGeniusEnabledDidChangeNotification:(id)_isGeniusEnabled;
-(void)_mailButton:(id)button;
-(void)_playbackSpeedButton:(id)button;
-(void)_repeatButton:(id)button;
-(void)_resetGeniusButtonImages;
-(void)_rewindButton:(id)button;
-(void)_setVisiblePartsNeedReload;
-(void)_shuffleButton:(id)button;
-(void)_socialLikeButton:(id)button;
-(void)_socialPostButton:(id)button;
-(void)_tickNotification:(id)notification;
-(void)_trackInfoButton:(id)button;
-(void)_updateButtonVisibility;
-(void)_updateForPlaybackSpeed;
-(double)_updatedDisplayDurationForTime:(double)time;
-(void)_validityChangedNotification:(id)notification;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)crossedTimeMakerWithEvent:(id)event;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;
-(void)detailSlider:(id)slider didChangeValue:(float)value;
-(void)detailSliderTrackingDidBegin:(id)detailSliderTracking;
-(void)detailSliderTrackingDidCancel:(id)detailSliderTracking;
-(void)detailSliderTrackingDidEnd:(id)detailSliderTracking;
-(void)didMoveToSuperview;
-(unsigned long long)displayablePartsInPartMask:(unsigned long long)partMask;
-(id)geniusButtonImageForControlState:(unsigned)controlState;
-(void)handleChangeToRepeatType:(unsigned)repeatType;
-(void)handleChangeToShuffleType:(unsigned)shuffleType;
// declared property getter: -(BOOL)hideGeniusButton;
// declared property getter: -(BOOL)isScrubbing;
// declared property getter: -(id)item;
-(void)layoutSubviews;
// declared property getter: -(id)mailButtonImage;
-(id)newButtonForPart:(unsigned long long)part;
-(id)newProgressIndicator;
-(id)newTrackInfoLabel;
-(id)playbackSpeedButtonImageForPlaybackSpeed:(unsigned)playbackSpeed;
// declared property getter: -(id)player;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(BOOL)progressBarClipsToChapterDuration;
-(void)registerForPlayerNotifications;
-(void)reloadButtonVisibility;
-(void)reloadView;
// declared property getter: -(id)repeatButtonImage;
// declared property getter: -(unsigned)repeatType;
-(void)resetDetailSlider:(id)slider;
-(void)setCurrentTime:(double)time;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setItem:(id)item;
// declared property setter: -(void)setPlayer:(id)player;
// declared property setter: -(void)setVisibleParts:(unsigned long long)parts;
// declared property getter: -(id)shuffleButtonImage;
// declared property getter: -(BOOL)shuffleIsOn;
// declared property getter: -(unsigned)shuffleType;
-(void)startTicking;
-(void)stopTicking;
-(void)unregisterForPlayerNotifications;
-(void)updateForEndOfDetailScrubbing;
// declared property getter: -(unsigned long long)visibleParts;
@end

