/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, UIActivityIndicatorView, UIToolbar, UIView, UINavigationBar, UIImageView, MKMapView;
@protocol MKUserTrackingView;

@interface MKUserTrackingBarButtonItem : XXUnknownSuperclass {
@private
	id<MKUserTrackingView> _userTrackingView;
	UIActivityIndicatorView* _progressIndicator;
	UIImageView* _imageView;
	int _state;
	UIToolbar* _toolbar;
	UINavigationBar* _navigationBar;
	UIView* _associatedView;
	BOOL _silverStyle;
	UIImage* _trackingEmptyImage;
	UIImage* _trackingNoneImage;
	UIImage* _trackingFollowImage;
	UIImage* _trackingFollowWithHeadingImage;
}
@property(retain, nonatomic) UIView* _associatedView;	// @synthesize
@property(retain, nonatomic) UIImageView* _imageView;	// @synthesize
@property(retain, nonatomic) UINavigationBar* _navigationBar;	// @synthesize
@property(retain, nonatomic) UIActivityIndicatorView* _progressIndicator;	// @synthesize
@property(assign, nonatomic) BOOL _silverStyle;	// @synthesize
@property(assign, nonatomic) int _state;	// @synthesize
@property(retain, nonatomic) UIToolbar* _toolbar;	// @synthesize
@property(retain, nonatomic) UIImage* _trackingEmptyImage;	// @synthesize
@property(retain, nonatomic) UIImage* _trackingFollowImage;	// @synthesize
@property(retain, nonatomic) UIImage* _trackingFollowWithHeadingImage;	// @synthesize
@property(retain, nonatomic) UIImage* _trackingNoneImage;	// @synthesize
@property(retain, nonatomic, setter=_setUserTrackingView:) id<MKUserTrackingView> _userTrackingView;	// @synthesize
@property(retain, nonatomic) MKMapView* mapView;
+(Class)_activityIndicatorClass;
-(id)initWithMapView:(id)mapView;
-(id)initWithWorldView:(id)worldView;
-(id)initWithWorldView:(id)worldView forceSilverStyle:(BOOL)style;
-(int)_activityIndicatorStyle;
// declared property getter: -(id)_associatedView;
-(id)_contentAnimation;
-(id)_expandAnimation;
-(void)_goToNextMode:(id)nextMode;
-(id)_imageForState:(int)state;
// declared property getter: -(id)_imageView;
-(id)_initWithUserTrackingView:(id)userTrackingView forceSilverStyle:(BOOL)style;
-(BOOL)_isInMiniBar;
// declared property getter: -(id)_navigationBar;
// declared property getter: -(id)_progressIndicator;
-(void)_repositionViews;
// declared property setter: -(void)_setUserTrackingView:(id)view;
-(BOOL)_shouldAnimateFromState:(int)state toState:(int)state2;
-(id)_shrinkAnimation;
// declared property getter: -(BOOL)_silverStyle;
// declared property getter: -(int)_state;
-(int)_styleForState:(int)state;
// declared property getter: -(id)_toolbar;
// declared property getter: -(id)_trackingEmptyImage;
// declared property getter: -(id)_trackingFollowImage;
// declared property getter: -(id)_trackingFollowWithHeadingImage;
// declared property getter: -(id)_trackingNoneImage;
-(void)_updateState;
// declared property getter: -(id)_userTrackingView;
-(float)_verticalOffsetForState:(int)state;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(id)createView;
-(id)createViewForNavigationItem:(id)navigationItem;
-(id)createViewForToolbar:(id)toolbar;
-(void)dealloc;
// declared property getter: -(id)mapView;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)setEnabled:(BOOL)enabled;
// declared property setter: -(void)setMapView:(id)view;
-(void)setState:(int)state;
// declared property setter: -(void)set_associatedView:(id)view;
// declared property setter: -(void)set_imageView:(id)view;
// declared property setter: -(void)set_navigationBar:(id)bar;
// declared property setter: -(void)set_progressIndicator:(id)indicator;
// declared property setter: -(void)set_silverStyle:(BOOL)style;
// declared property setter: -(void)set_state:(int)state;
// declared property setter: -(void)set_toolbar:(id)toolbar;
// declared property setter: -(void)set_trackingEmptyImage:(id)image;
// declared property setter: -(void)set_trackingFollowImage:(id)image;
// declared property setter: -(void)set_trackingFollowWithHeadingImage:(id)headingImage;
// declared property setter: -(void)set_trackingNoneImage:(id)image;
@end
