/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIScrollAnimation, UIGestureAnimation;

__attribute__((visibility("hidden")))
@interface UIGestureInfo : XXUnknownSuperclass {
@private
	id delegate;
	int enabledGestures;
	int rotationState;
	int zoomState;
	int panState;
	CGPoint startGestureInner;
	CGPoint startGestureOuter;
	CGPoint startScrollPoint;
	CGPoint endScrollPoint;
	CGSize visibleSize;
	CGRect centerRect;
	UIGestureAnimation* rotationAnimation;
	float rotationDegrees;
	float recentRotationDegrees;
	float minDegrees;
	float maxDegrees;
	float startDegrees;
	float endDegrees;
	UIGestureAnimation* zoomAnimation;
	int zoomRubberBandHysteresisCount;
	float zoomScale;
	float startScale;
	float endScale;
	float unadjustedScale;
	float zoomMultiplier;
	float minScale;
	float maxScale;
	CGPoint zoomFailureWindowPoint;
	float zoomFailureDuration;
	float zoomFailureStartScale;
	float zoomAnimationProgress;
	UIScrollAnimation* scrollAnimation;
	struct {
		unsigned pushedRunLoop : 1;
		unsigned isRotatingRight : 1;
		unsigned isZoomRubberBandEnabled : 1;
		unsigned zoomsFromCurrentToMinOrMax : 1;
		unsigned updatesScroller : 1;
		unsigned isAnimatingZoomFailure : 1;
	} flags;
}
-(id)init;
-(void)dealloc;
@end

