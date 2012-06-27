/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSString, MPButton, MPAVController, MPAVItem, NSMutableIndexSet;

@interface MPTransportControls : XXUnknownSuperclass {
	id _target;
	MPAVItem* _item;
	MPAVController* _player;
	unsigned long long _desiredParts;
	unsigned long long _disabledParts;
	NSMutableIndexSet* _heldParts;
	unsigned long long _visibleParts;
	unsigned _playing : 1;
	BOOL _allowsWirelessPlayback;
	BOOL _registeredForPlayerNotifications;
	MPButton* _alternatesButton;
	MPButton* _bookmarkButton;
	MPButton* _chaptersButton;
	MPButton* _devicePickerButton;
	MPButton* _emailButton;
	MPButton* _likeOrBanButton;
	MPButton* _nextButton;
	MPButton* _playButton;
	MPButton* _previousButton;
	MPButton* _rewind30SecondsButton;
	MPButton* _scaleButton;
	MPButton* _toggleFullscreenButton;
	id _volumeSlider;
}
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// @synthesize=_allowsWirelessPlayback
@property(assign, nonatomic) unsigned long long desiredParts;	// @synthesize=_desiredParts
@property(assign, nonatomic) unsigned long long disabledParts;	// @synthesize=_disabledParts
@property(retain, nonatomic) MPAVItem* item;	// @synthesize=_item
@property(readonly, assign, nonatomic) NSString* pauseButtonImage;
@property(readonly, assign, nonatomic) NSString* playButtonImage;
@property(readonly, assign, nonatomic) NSString* playPauseButtonImage;
@property(retain, nonatomic) MPAVController* player;	// @synthesize=_player
@property(assign, nonatomic) BOOL registeredForPlayerNotifications;	// @synthesize=_registeredForPlayerNotifications
@property(assign, nonatomic) id target;	// @synthesize=_target
@property(assign, nonatomic) unsigned long long visibleParts;	// @synthesize=_visibleParts
+(Class)buttonClass;
+(unsigned long long)defaultVisibleParts;
-(id)init;
-(id)initWithFrame:(CGRect)frame;
-(void)_alternateTypesChangedNotification:(id)notification;
-(void)_applyDesiredPartsWithAnimation:(BOOL)animation;
-(unsigned long long)_applyPossibleVisiblePartsToParts:(unsigned long long)parts;
-(void)_availableRoutesChangedNotification:(id)notification;
-(void)_handleHoldForPart:(unsigned long long)part;
-(void)_handleReleaseForPart:(unsigned long long)part;
-(void)_handleTapForPart:(unsigned long long)part;
-(void)_isAirPlayVideoActiveDidChangeNotification:(id)_isAirPlayVideoActive;
-(void)_itemChangedNotification:(id)notification;
-(void)_playbackStateChangedNotification:(id)notification;
-(void)_reloadViewWithAnimation:(BOOL)animation;
-(void)_timeMarkersAvailableNotification:(id)notification;
-(id)_updateAdditions:(id)additions removals:(id)removals forPart:(unsigned long long)part;
-(void)_updateEnabledStates:(BOOL)states;
-(void)_validityChangedNotification:(id)notification;
// declared property getter: -(BOOL)allowsWirelessPlayback;
-(BOOL)allowsWirelessPlaybackForCurrentItem;
-(BOOL)alwaysHidesSystemVolumeHUD;
-(void)buttonDown:(id)down;
-(id)buttonForPart:(unsigned long long)part;
-(void)buttonHeld:(id)held;
-(void)buttonHoldReleased:(id)released;
-(id)buttonImageForPart:(unsigned long long)part;
-(void)buttonUp:(id)up;
-(void)dealloc;
// declared property getter: -(unsigned long long)desiredParts;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
// declared property getter: -(unsigned long long)disabledParts;
-(id)highlightedButtonImageForPart:(unsigned long long)part;
// declared property getter: -(id)item;
-(id)newButtonForPart:(unsigned long long)part;
-(id)newVolumeSlider;
// declared property getter: -(id)pauseButtonImage;
// declared property getter: -(id)playButtonImage;
// declared property getter: -(id)playPauseButtonImage;
// declared property getter: -(id)player;
-(void)registerForPlayerNotifications;
// declared property getter: -(BOOL)registeredForPlayerNotifications;
-(void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;
// declared property setter: -(void)setAllowsWirelessPlayback:(BOOL)playback;
-(void)setAlpha:(float)alpha;
// declared property setter: -(void)setDesiredParts:(unsigned long long)parts;
-(void)setDesiredParts:(unsigned long long)parts animated:(BOOL)animated;
// declared property setter: -(void)setDisabledParts:(unsigned long long)parts;
-(void)setFrame:(CGRect)frame;
-(void)setHidden:(BOOL)hidden;
// declared property setter: -(void)setItem:(id)item;
// declared property setter: -(void)setPlayer:(id)player;
// declared property setter: -(void)setRegisteredForPlayerNotifications:(BOOL)playerNotifications;
// declared property setter: -(void)setTarget:(id)target;
// declared property setter: -(void)setVisibleParts:(unsigned long long)parts;
-(void)setVisibleParts:(unsigned long long)parts animated:(BOOL)animated;
-(BOOL)showsVolumeSliderWhenNoVolumeControlAvailable;
// declared property getter: -(id)target;
-(void)unregisterForPlayerNotifications;
// declared property getter: -(unsigned long long)visibleParts;
@end

