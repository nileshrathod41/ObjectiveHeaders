/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UITransitionState.h"
#import "UIKit-Structs.h"

@class UIView, _UIPageCurl;

__attribute__((visibility("hidden")))
@interface _UIPageCurlState : _UITransitionState {
@private
	_UIPageCurl* _pageCurl;
	int _curlType;
	CGPoint _initialLocation;
	CGPoint _referenceLocation;
	UIView* _frontPageView;
	UIView* _backPageView;
	UIView* _frontView;
	UIView* _backView;
	int _completionCount;
	int _curlState;
	BOOL _finished;
	BOOL _willComplete;
	id _finally;
}
@property(readonly, assign, nonatomic) UIView* backPageView;
@property(readonly, assign, nonatomic) UIView* backView;	// @synthesize=_backView
@property(readonly, assign, nonatomic) int curlState;	// @synthesize=_curlState
@property(readonly, assign, nonatomic) int curlType;	// @synthesize=_curlType
@property(readonly, assign, nonatomic) UIView* frontPageView;
@property(readonly, assign, nonatomic) UIView* frontView;	// @synthesize=_frontView
@property(readonly, assign, nonatomic) CGPoint initialLocation;	// @synthesize=_initialLocation
@property(readonly, assign, nonatomic) _UIPageCurl* pageCurl;	// @synthesize=_pageCurl
@property(readonly, assign, nonatomic, getter=hasPendingAnimations) BOOL pendingAnimations;
@property(readonly, assign, nonatomic) CGPoint referenceLocation;	// @synthesize=_referenceLocation
-(id)initWithPageCurl:(id)pageCurl andCurlType:(int)type fromLocation:(CGPoint)location withReferenceLocation:(CGPoint)referenceLocation inDirection:(int)direction withView:(id)view revealingView:(id)view7 completion:(id)completion finally:(id)finally;
-(int)_effectiveTransitionDirection;
-(CGRect)_pageViewFrame;
-(void)addBackPageContent;
-(void)addFrontPageContent;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
// declared property getter: -(id)backPageView;
// declared property getter: -(id)backView;
-(void)cleanup;
-(void)cleanupWithFinishedState:(BOOL)finishedState completedState:(BOOL)state;
// declared property getter: -(int)curlState;
// declared property getter: -(int)curlType;
-(void)dealloc;
-(void)finally;
// declared property getter: -(id)frontPageView;
// declared property getter: -(id)frontView;
// declared property getter: -(BOOL)hasPendingAnimations;
-(void)incrementCompletionCount;
// declared property getter: -(CGPoint)initialLocation;
-(void)invalidatePageCurl;
-(BOOL)isCompatibleWithCurlOfType:(int)type inDirection:(int)direction;
// declared property getter: -(id)pageCurl;
// declared property getter: -(CGPoint)referenceLocation;
-(void)setCurlState:(int)state willComplete:(BOOL)complete;
@end

