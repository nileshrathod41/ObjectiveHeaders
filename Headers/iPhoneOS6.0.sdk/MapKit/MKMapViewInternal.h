/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import "UITextFieldDelegate.h"
#import "PBRequesterDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, MKMapView, MKAnnotationContainerView, MKVariableDelayTapRecognizer, MKMapViewPositioningChange, UIView, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIGestureRecognizer, MKAttributionLabel, MKMapGestureController, UITouch, UIEvent, VKMapView, MKOverlayContainerView;
@protocol MKMapViewDelegatePrivate, MKMapViewDelegate;

__attribute__((visibility("hidden")))
@interface MKMapViewInternal : XXUnknownSuperclass <UITextFieldDelegate, PBRequesterDelegate> {
@private
	MKMapView* view;
	UIView* contentView;
	MKAnnotationContainerView* annotationContainer;
	MKAttributionLabel* _attributionLabel;
	UIImageView* attributionBadgeView;
	NSTimer* annotationTimer;
	NSTimer* startEffectsTimer;
	id<MKMapViewDelegate, MKMapViewDelegatePrivate> delegate;
	int animationType;
	unsigned suspendedEffectsCount;
	unsigned eventMode;
	unsigned eventModeHistory;
	unsigned mapType;
	CGRect centeringRect;
	unsigned tileCount;
	unsigned levelViewLoadingCount;
	NSTimer* defaultLocationTimer;
	double hoverStartTime;
	NSTimer* hoverExpirationTimer;
	NSTimer* scrollToReCenterUserTimer;
	NSTimer* positioningChangeTimer;
	UILabel* debugView;
	NSTimer* debugTimer;
	MKMapViewPositioningChange* positioningChange;
	NSTimer* tapAndHoldTimer;
	int rotationDirection;
	double heading;
	double annotationViewPerspectiveHeading;
	UILongPressGestureRecognizer* longPressGestureRecognizer;
	UITapGestureRecognizer* tapGestureRecognizer;
	UITapGestureRecognizer* immediateTapGesture;
	MKVariableDelayTapRecognizer* doubleTapGestureRecognizer;
	UITapGestureRecognizer* twoFingerTapGestureRecognizer;
	UIGestureRecognizer* locationConsoleGesture;
	int scrollViewTouchCount;
	UITouch* savedTouchBegan;
	UIEvent* savedEventBegan;
	MKMapGestureController* gestureController;
	MKOverlayContainerView* overlayContainer;
	int rotationState;
	float angularVelocity;
	int userTrackingMode;
	VKMapView* mapView;
	UIView* scrollContainerView;
	id regionSetterWhenSized;
	struct {
		unsigned callsDelegateForAllRegionChanges : 1;
		unsigned changingRegion : 1;
		unsigned debugViewHeading : 1;
		unsigned didStartDragging : 1;
		unsigned draggingInterrupted : 1;
		unsigned didStartSmoothScrolling : 1;
		unsigned drawGridBackground : 1;
		unsigned hasRenderedSomething : 1;
		unsigned ignoreHeadingUpdates : 1;
		unsigned ignoreLocationUpdates : 1;
		unsigned isRunningPositioningChange : 1;
		unsigned isSuspended : 1;
		unsigned levelCrossFade : 1;
		unsigned liveTrackingAutoSelectZoomLevel : 1;
		unsigned longPressing : 1;
		unsigned needsPerspectiveUpdate : 1;
		unsigned persistFixedUserLocation : 1;
		unsigned regionChangeIsAnimated : 1;
		unsigned regionChangeIsUserInitiated : 1;
		unsigned rotationSupported : 1;
		unsigned scrollEnabled : 1;
		unsigned scrolling : 1;
		unsigned scrollIsAnimated : 1;
		unsigned shouldRotateForHeading : 1;
		unsigned showsUserLocation : 1;
		unsigned zoomEnabled : 1;
		unsigned zoomIsAnimated : 1;
		unsigned zooming : 1;
		unsigned wasZooming : 1;
		unsigned inSetZoomScale : 1;
		unsigned annotationViewsAreAddedImmediately : 1;
		unsigned nextPositioningChangeIsInstant : 1;
		unsigned isChangingViewSize : 1;
		unsigned shouldSetRegionOnSizeChange : 1;
		unsigned showsAttribution : 1;
		unsigned showsAttributionBadge : 1;
		unsigned delegateShouldReceiveTouch : 1;
		unsigned delegateShouldDelayTapResponse : 1;
		unsigned delegateWillChangeRotation : 1;
		unsigned delegateWillChangeRotationAnimation : 1;
		unsigned delegateDidUpdateUserLocation : 1;
		unsigned delegateDidFailToLocateUser : 1;
		unsigned delegateWillChangeRegion : 1;
		unsigned delegateDidChangeRegion : 1;
		unsigned delegateDidStartMapRendering : 1;
		unsigned delegateDidFinishMapRendering : 1;
		unsigned delegateDidChangeUserTrackingMode : 1;
		unsigned delegateDidChangeUserTrackingModeButton : 1;
		unsigned delegateDidChangeMapType : 1;
	} flags;
}
-(void)runPositioningChangeIfNeeded;
-(void)runPositioningChangeIfNeeded:(id)needed;
-(void)scrollToUserLocation;
-(void)startEffects;
-(void)stopHoverWithChange:(id)change;
@end
