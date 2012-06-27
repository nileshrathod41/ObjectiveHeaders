/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MPAVControllerNode.h"

@class NSTimer, MPAVController, MPTransitionController, MPAVItem;

@interface MPViewController : XXUnknownSuperclass <MPAVControllerNode> {
	id _delegate;
	NSTimer* _idleTimerDisablerTimer;
	int _interfaceOrientation;
	MPAVItem* _item;
	MPAVController* _player;
	MPViewController* _pushedViewController;
	MPTransitionController* _pushedTransitionController;
	id _popViewControllerHandler;
	unsigned _appearing : 1;
	unsigned _observesApplicationSuspendResumeEventsOnly : 1;
	unsigned _showOverlayWhileAppearingDisabled : 1;
	BOOL _registeredForPlayerNotifications;
	int _playerLockedCount;
}
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic, getter=idleTimerDisabled, setter=setIdleTimerDisabled:) BOOL idleTimerDisabled;
@property(retain, nonatomic) MPAVItem* item;	// @synthesize=_item
@property(assign, nonatomic) BOOL observesApplicationSuspendResumeEventsOnly;
@property(assign, nonatomic) int orientation;	// @synthesize=_interfaceOrientation
@property(retain, nonatomic) MPAVController* player;	// @synthesize=_player
@property(copy, nonatomic) id popViewControllerHandler;	// @synthesize=_popViewControllerHandler
@property(assign, nonatomic) BOOL registeredForPlayerNotifications;	// @synthesize=_registeredForPlayerNotifications
-(id)init;
-(BOOL)_canReloadView;
-(void)_popTransitionEnded:(id)ended;
-(void)_pushTransitionEnded:(id)ended;
-(void)addChildViewController:(id)controller;
-(void)applicationDidResumeEventsOnly;
-(void)applicationDidSuspendEventsOnly;
-(void)beginIgnoringChangeTypes:(unsigned)types;
-(void)beginTransitionOverlayHidding;
-(BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;
-(void)clearWeakReferencesToObject:(id)object;
-(id)copyOverlayViewForTransitionToItem:(id)item;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)didChangeToInterfaceOrientation:(int)interfaceOrientation;
-(int)displayableInterfaceOrientationForInterfaceOrientation:(int)interfaceOrientation;
-(void)endIgnoringChangeTypes:(unsigned)types;
-(void)endTransitionOverlayHidingWithTransferedOverlayView:(id)transferedOverlayView;
// declared property getter: -(BOOL)idleTimerDisabled;
-(void)incrementAggregateStatisticsDisplayCount;
-(BOOL)isAppearing;
// declared property getter: -(id)item;
-(void)lockPlayer;
-(void)noteIgnoredChangeTypes:(unsigned)types;
// declared property getter: -(BOOL)observesApplicationSuspendResumeEventsOnly;
// declared property getter: -(int)orientation;
// declared property getter: -(id)player;
-(id)popViewControllerAnimated:(BOOL)animated;
// declared property getter: -(id)popViewControllerHandler;
-(void)pushViewController:(id)controller withTransition:(id)transition;
-(void)registerForPlayerNotifications;
// declared property getter: -(BOOL)registeredForPlayerNotifications;
-(void)removeChildViewController:(id)controller;
-(void)setAppearing:(BOOL)appearing;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setIdleTimerDisabled:(BOOL)disabled;
// declared property setter: -(void)setItem:(id)item;
// declared property setter: -(void)setObservesApplicationSuspendResumeEventsOnly:(BOOL)only;
// declared property setter: -(void)setOrientation:(int)orientation;
-(void)setOrientation:(int)orientation animate:(BOOL)animate;
// declared property setter: -(void)setPlayer:(id)player;
// declared property setter: -(void)setPopViewControllerHandler:(id)handler;
// declared property setter: -(void)setRegisteredForPlayerNotifications:(BOOL)playerNotifications;
-(void)setView:(id)view;
-(void)startTicking;
-(void)stopTicking;
-(void)unlockPlayer;
-(void)unregisterForPlayerNotifications;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)willChangeToInterfaceOrientation:(int)interfaceOrientation;
@end

