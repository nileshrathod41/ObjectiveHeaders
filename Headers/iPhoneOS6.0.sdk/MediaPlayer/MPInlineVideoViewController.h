/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoViewController.h"
#import "MPVideoOverlayDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class _UIHostedWindow, MPInlineVideoOverlay, MPInlineAudioOverlay, MPAudioVideoRoutingPopoverController, NSString, UIViewController, NSTimer, UITapGestureRecognizer, UIView, UIPinchGestureRecognizer, UIWindow;
@protocol MPVideoOverlay;

@interface MPInlineVideoViewController : MPVideoViewController <MPVideoOverlayDelegate, UIPopoverControllerDelegate> {
@private
	int _videoOverlayStyle;
	MPInlineVideoOverlay* _inlineOverlayView;
	UIView<MPVideoOverlay>* _fullscreenOverlayView;
	MPInlineAudioOverlay* _audioOverlayView;
	int _audioOverlayStyle;
	UIView* _overlayViewBeingHidden;
	BOOL _overlayViewIsVisible;
	NSString* _playbackErrorDescription;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	UITapGestureRecognizer* _fullscreenTapGestureRecognizer;
	UITapGestureRecognizer* _fullscreenDoubleTapGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIPinchGestureRecognizer* _fullscreenPinchGestureRecognizer;
	NSTimer* _idleTimer;
	MPAudioVideoRoutingPopoverController* _routePopoverController;
	UIWindow* _windowForDisablingAutorotation;
	unsigned _wantsOverlayVisibleWhenItemIsAvailable : 1;
	unsigned _wantsOverlayVisibleWhenItemIsAvailableAnimated : 1;
	unsigned _animatingOverlay : 1;
	unsigned _inCloneMirrorMode : 1;
	UIView* _fullscreenView;
	UIView* _superviewBeforeFullscreen;
	UIViewController* _parentViewControllerBeforeFullscreen;
	unsigned _indexInSuperviewBeforeFullscreen;
	CGRect _nonFullscreenDestinationFrame;
	int _desiredInterfaceOrientation;
	int _previousStatusBarStyle;
	_UIHostedWindow* _hostedWindow;
	unsigned _statusBarWasHidden : 1;
	unsigned _isFullscreen : 1;
	unsigned _animatingFullscreenTransition : 1;
	unsigned _animatingFullscreenTransitionToInline : 1;
	unsigned _contentViewDidClipToBounds : 1;
	unsigned _fullscreenViewSizeIsExternallyManaged : 1;
	unsigned _swallowNextTapGesture : 1;
	unsigned _disableTaps : 1;
}
@property(assign, nonatomic) int audioOverlayStyle;	// @synthesize=_audioOverlayStyle
@property(readonly, assign, nonatomic) UIView* fullscreenView;
@property(copy, nonatomic) NSString* playbackErrorDescription;	// @synthesize=_playbackErrorDescription
@property(assign, nonatomic) int videoOverlayStyle;	// @synthesize=_videoOverlayStyle
-(id)init;
-(void)_applicationDidChangeStatusBarFrameNotification:(id)_application;
-(void)_bufferingStateDidChangeNotification:(id)_bufferingState;
-(BOOL)_canHideOverlay:(BOOL)overlay;
-(void)_cancelOverlayIdleTimer;
-(unsigned)_effectiveItemType;
-(void)_fireOverlayIdleTimer:(id)timer;
-(void)_hideOverlayAnimated:(BOOL)animated;
-(void)_hideOverlayDidEnd:(id)_hideOverlay finished:(id)finished;
-(void)_layoutForItemTypeAvailable;
-(void)_playbackStateDidChangeNotification:(id)_playbackState;
-(void)_removeCoverView;
-(void)_resetOverlayIdleTimer;
-(void)_showOverlayAnimated:(BOOL)animated;
-(void)_showOverlayDidEnd;
-(void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated;
-(void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated fromDoneButton:(BOOL)doneButton;
-(void)_transitionFromFullscreenDidEnd;
-(void)_transitionToFullscreenAnimated:(BOOL)fullscreenAnimated;
-(void)_transitionToFullscreenDidEnd;
-(void)_updateForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;
-(BOOL)_useInlineControls;
-(id)_viewControllerForRotationForViewController:(id)viewController;
-(void)_viewWasPinched:(id)pinched;
-(void)_viewWasTapped:(id)tapped;
// declared property getter: -(int)audioOverlayStyle;
-(id)audioOverlayViewIfLoaded;
-(id)backgroundView;
-(void)backgroundViewDidUpdate;
-(BOOL)canShowQTAudioOnlyUI;
-(BOOL)controlsOverlayVisible;
-(id)createChapterFlipTransition;
-(void)dealloc;
-(void)displayVideoViewOnScreen;
// declared property getter: -(id)fullscreenView;
-(unsigned)hostedWindowContextID;
-(BOOL)isFullscreen;
-(BOOL)isTransitioningFromFullscreen;
-(BOOL)isTransitioningToFullscreen;
-(void)loadView;
-(void)overlayDidDismissAlternateTracksPopover:(id)overlay;
-(void)overlayTappedBackButton:(id)button;
-(void)overlayTappedScaleModeButton:(id)button;
// declared property getter: -(id)playbackErrorDescription;
-(id)popViewControllerAnimated:(BOOL)animated;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)registerForPlayerNotifications;
-(void)setAllowsWirelessPlayback:(BOOL)playback;
// declared property setter: -(void)setAudioOverlayStyle:(int)style;
-(void)setControlsNeedLayout;
-(void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;
-(void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;
-(void)setDisableControlsAutohide:(BOOL)autohide;
-(void)setDisabledParts:(unsigned long long)parts;
-(void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;
-(void)setInlinePlaybackUsesTVOut:(BOOL)anOut;
-(void)setItem:(id)item;
-(void)setItemTypeOverride:(unsigned)override;
-(void)setOrientation:(int)orientation animate:(BOOL)animate;
// declared property setter: -(void)setPlaybackErrorDescription:(id)description;
-(void)setTVOutEnabled:(BOOL)enabled;
-(void)setUseHostedWindowWhenFullscreen:(BOOL)fullscreen;
// declared property setter: -(void)setVideoOverlayStyle:(int)style;
-(void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)startTicking;
-(void)stopTicking;
-(void)swipableViewHadActivity:(id)activity;
-(BOOL)transportControls:(id)controls heldButtonPart:(unsigned long long)part;
-(BOOL)transportControls:(id)controls releasedHeldButtonPart:(unsigned long long)part;
-(BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;
-(void)unregisterForPlayerNotifications;
// declared property getter: -(int)videoOverlayStyle;
-(id)videoOverlayView;
-(id)videoOverlayViewIfLoaded;
-(void)videoView_firstVideoFrameDisplayedNotification:(id)notification;
-(void)videoView_itemTypeAvailableNotification:(id)notification;
-(void)videoView_tvOutCapabilityDidChangeNotification:(id)videoView_tvOutCapability;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
@end

