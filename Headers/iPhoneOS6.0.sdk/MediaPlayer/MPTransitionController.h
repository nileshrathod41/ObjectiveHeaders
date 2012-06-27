/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class UIView, MPViewController, NSMutableSet, UIViewController;

@interface MPTransitionController : XXUnknownSuperclass {
	CFDictionaryRef _observers;
	float _duration;
	UIView* _rootView;
	NSMutableSet* _persistentViewsToFadeOut;
	NSMutableSet* _viewsToFadeOut;
	NSMutableSet* _persistentViewsToFadeIn;
	NSMutableSet* _viewsToFadeIn;
	MPViewController* _fromViewController;
	int _fromInterfaceOrientation;
	MPViewController* _toViewController;
	int _toInterfaceOrientation;
@private
	UIViewController* _toContainerViewController;
}
@property(assign, nonatomic) float duration;	// @synthesize=_duration
@property(assign, nonatomic) int fromInterfaceOrientation;	// @synthesize=_fromInterfaceOrientation
@property(retain, nonatomic) MPViewController* fromViewController;	// @synthesize=_fromViewController
@property(retain, nonatomic) UIView* rootView;	// @synthesize=_rootView
@property(retain, nonatomic) UIViewController* toContainerViewController;	// @synthesize=_toContainerViewController
@property(assign, nonatomic) int toInterfaceOrientation;	// @synthesize=_toInterfaceOrientation
@property(retain, nonatomic) MPViewController* toViewController;	// @synthesize=_toViewController
-(id)init;
-(void)addObserver:(id)observer didEndSelector:(SEL)selector;
-(void)addViewToFadeIn:(id)anIn restoreOnPop:(BOOL)pop;
-(void)addViewToFadeOut:(id)fadeOut restoreOnPop:(BOOL)pop;
-(void)dealloc;
-(void)didFinishTransition:(BOOL)transition;
// declared property getter: -(float)duration;
-(void)fadeViewsForRestore:(BOOL)restore;
// declared property getter: -(int)fromInterfaceOrientation;
// declared property getter: -(id)fromViewController;
-(void)messageObserversWithSuccess:(BOOL)success;
-(void)performTransition:(unsigned)transition;
-(void)removeObserver:(id)observer;
// declared property getter: -(id)rootView;
// declared property setter: -(void)setDuration:(float)duration;
// declared property setter: -(void)setFromInterfaceOrientation:(int)interfaceOrientation;
// declared property setter: -(void)setFromViewController:(id)viewController;
// declared property setter: -(void)setRootView:(id)view;
// declared property setter: -(void)setToContainerViewController:(id)containerViewController;
// declared property setter: -(void)setToInterfaceOrientation:(int)interfaceOrientation;
// declared property setter: -(void)setToViewController:(id)viewController;
// declared property getter: -(id)toContainerViewController;
// declared property getter: -(int)toInterfaceOrientation;
// declared property getter: -(id)toViewController;
-(void)transition:(unsigned)transition;
-(void)willBeginTransition:(unsigned)transition;
@end

