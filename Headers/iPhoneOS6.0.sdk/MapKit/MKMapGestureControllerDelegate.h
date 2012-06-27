/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "NSObject.h"


@protocol MKMapGestureControllerDelegate <NSObject>
@optional
-(double)gestureController:(id)controller shouldWaitForNextTapForDuration:(double)duration afterTouch:(id)touch;
@required
-(void)gestureControllerDidStopPanning:(id)gestureController willDecelerate:(BOOL)decelerate;
-(void)gestureControllerDidStopPanningDecelerating:(id)gestureController;
-(void)gestureControllerDidStopUserInteraction:(id)gestureController;
-(void)gestureControllerDidStopZooming:(id)gestureController willDecelerate:(BOOL)decelerate;
-(void)gestureControllerDidStopZoomingDecelerating:(id)gestureController;
-(void)gestureControllerWillStartPanning:(id)gestureController;
-(void)gestureControllerWillStartUserInteraction:(id)gestureController;
-(void)gestureControllerWillStartZooming:(id)gestureController;
@end
