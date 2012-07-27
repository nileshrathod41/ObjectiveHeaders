/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ADBannerControllerRecipient.h"
#import "ADBannerControllerDelegate.h"
#import "iAd-Structs.h"

@class ADTapGestureRecognizer, ADBannerController, UIView, ADBannerControllerRecipient, NSString, ADLocalAd, ADRemoteView;
@protocol ADInterstitialDebuggingDelegate, ADInterstitialViewDelegate;

@interface ADInterstitialView : XXUnknownSuperclass <ADBannerControllerRecipient, ADBannerControllerDelegate> {
@private
	id<ADInterstitialViewDelegate> _delegate;
	BOOL _loaded;
	BOOL _actionInProgress;
	ADBannerController* _controller;
	ADRemoteView* _remoteView;
	UIView* _dimmerView;
	ADTapGestureRecognizer* _gestureRecognizer;
	ADBannerControllerRecipient* _recipient;
	ADLocalAd* _localAd;
	NSString* _section;
	int _previousOrientation;
	id<ADInterstitialDebuggingDelegate> _debuggingDelegate;
	BOOL _touchesBeganOnCloseBox;
	BOOL _actionWasCancelled;
	BOOL _interstitialWasDismissedByUser;
	BOOL _hasLoaded;
	BOOL _shouldSkipLoadedExceptionCheck;
	BOOL _presentedInView;
	NSString* _authenticationUserName;
}
@property(readonly, assign, nonatomic, getter=isActionInProgress) BOOL actionInProgress;	// @synthesize=_actionInProgress
@property(assign) BOOL actionWasCancelled;	// @synthesize=_actionWasCancelled
@property(copy, nonatomic) NSString* authenticationUserName;	// @synthesize=_authenticationUserName
@property(retain, nonatomic) ADBannerController* controller;	// @synthesize=_controller
@property(assign, nonatomic) id<ADInterstitialDebuggingDelegate> debuggingDelegate;	// @synthesize=_debuggingDelegate
@property(assign, nonatomic) id<ADInterstitialViewDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) UIView* dimmerView;	// @synthesize=_dimmerView
@property(retain, nonatomic) ADTapGestureRecognizer* gestureRecognizer;	// @synthesize=_gestureRecognizer
@property(assign) BOOL hasLoaded;	// @synthesize=_hasLoaded
@property(assign) BOOL interstitialWasDismissedByUser;	// @synthesize=_interstitialWasDismissedByUser
@property(assign, nonatomic, getter=isLoaded) BOOL loaded;	// @synthesize=_loaded
@property(retain, nonatomic) ADLocalAd* localAd;	// @synthesize=_localAd
@property(assign, nonatomic) BOOL presentedInView;	// @synthesize=_presentedInView
@property(assign, nonatomic) int previousOrientation;	// @synthesize=_previousOrientation
@property(retain, nonatomic) ADBannerControllerRecipient* recipient;	// @synthesize=_recipient
@property(retain, nonatomic) ADRemoteView* remoteView;	// @synthesize=_remoteView
@property(copy, nonatomic) NSString* section;	// @synthesize=_section
@property(assign) BOOL shouldSkipLoadedExceptionCheck;	// @synthesize=_shouldSkipLoadedExceptionCheck
@property(assign) BOOL touchesBeganOnCloseBox;	// @synthesize=_touchesBeganOnCloseBox
-(id)initWithFrame:(CGRect)frame;
-(void)_disposeOfController;
-(void)_gestureHandler:(id)handler;
-(void)_orientationChanged;
-(void)_propagateFrame;
-(void)_propagateProperties;
-(void)_sanitizeAndForwardErrorToDelegate:(id)delegate;
-(void)_sendDidLoad;
-(void)_sendDidUnload;
-(void)_setLoaded:(BOOL)loaded;
// declared property getter: -(BOOL)actionWasCancelled;
-(void)addSubview:(id)subview;
// declared property getter: -(id)authenticationUserName;
-(void)bannerControllerDidBecomeAvailable:(id)bannerController;
-(void)cancelAction;
// declared property getter: -(id)controller;
-(void)controller:(id)controller didFailWithError:(id)error;
-(void)controllerDidClose:(id)controller;
-(void)controllerDidOpen:(id)controller withWindowContextId:(id)windowContextId;
-(int)creativeType;
-(void)dealloc;
// declared property getter: -(id)debuggingDelegate;
// declared property getter: -(id)delegate;
-(void)didMoveToWindow;
// declared property getter: -(id)dimmerView;
-(void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;
// declared property getter: -(id)gestureRecognizer;
// declared property getter: -(BOOL)hasLoaded;
-(void)insertSubview:(id)subview above:(id)above;
-(void)insertSubview:(id)subview aboveSubview:(id)subview2;
-(void)insertSubview:(id)subview atIndex:(int)index;
-(void)insertSubview:(id)subview below:(id)below;
-(void)insertSubview:(id)subview belowSubview:(id)subview2;
// declared property getter: -(BOOL)interstitialWasDismissedByUser;
// declared property getter: -(BOOL)isActionInProgress;
// declared property getter: -(BOOL)isLoaded;
-(BOOL)isVisible:(BOOL)visible;
-(void)loadDebuggerFromPath:(id)path portName:(id)name;
// declared property getter: -(id)localAd;
// declared property getter: -(BOOL)presentedInView;
// declared property getter: -(int)previousOrientation;
// declared property getter: -(id)recipient;
// declared property getter: -(id)remoteView;
-(void)removeFromSuperview;
// declared property getter: -(id)section;
-(void)serverBannerViewDidFailToReceiveAd:(id)serverBannerView withError:(id)error;
-(void)serverBannerViewDidLoad:(id)serverBannerView;
-(void)serverBannerViewWillLoad:(id)serverBannerView;
-(void)serverInterstitialViewExpiredAndWasUnloaded:(id)unloaded;
-(void)serverStoryboardDidFinishFirstSignificantDraw:(id)serverStoryboard;
-(void)serverStoryboardDidTransitionOut:(id)serverStoryboard;
-(void)setActionInProgress:(BOOL)progress;
// declared property setter: -(void)setActionWasCancelled:(BOOL)cancelled;
-(void)setAlpha:(float)alpha;
// declared property setter: -(void)setAuthenticationUserName:(id)name;
-(void)setBounds:(CGRect)bounds;
-(void)setCenter:(CGPoint)center;
// declared property setter: -(void)setController:(id)controller;
// declared property setter: -(void)setDebuggingDelegate:(id)delegate;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDimmerView:(id)view;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setGestureRecognizer:(id)recognizer;
// declared property setter: -(void)setHasLoaded:(BOOL)loaded;
-(void)setHidden:(BOOL)hidden;
// declared property setter: -(void)setInterstitialWasDismissedByUser:(BOOL)user;
// declared property setter: -(void)setLocalAd:(id)ad;
// declared property setter: -(void)setPresentedInView:(BOOL)view;
// declared property setter: -(void)setPreviousOrientation:(int)orientation;
// declared property setter: -(void)setRecipient:(id)recipient;
// declared property setter: -(void)setRemoteView:(id)view;
// declared property setter: -(void)setSection:(id)section;
// declared property setter: -(void)setShouldSkipLoadedExceptionCheck:(BOOL)skipLoadedExceptionCheck;
// declared property setter: -(void)setTouchesBeganOnCloseBox:(BOOL)box;
-(void)setTransform:(CGAffineTransform)transform;
// declared property getter: -(BOOL)shouldSkipLoadedExceptionCheck;
-(void)skipNextLoadedExceptionCheck;
-(id)statusBarViewController;
// declared property getter: -(BOOL)touchesBeganOnCloseBox;
@end

