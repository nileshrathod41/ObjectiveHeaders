/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MKUserLocationMarker.h"
#import "MapKit-Structs.h"

@class VKImageAnnotationMarkerLayer, VKCircleAnnotationMarkerLayer, VKAnimation;

@interface MKGemUserLocationMarker : MKUserLocationMarker {
	BOOL _shouldPulse;
	VKImageAnnotationMarkerLayer* _imageLayer;
	VKImageAnnotationMarkerLayer* _headingLayer;
	VKCircleAnnotationMarkerLayer* _accuracyLayer;
	VKImageAnnotationMarkerLayer* _pulseLayer;
	VKAnimation* _pulseAnimation;
}
-(id)initWithAnnotation:(id)annotation reuseIdentifier:(id)identifier;
-(id)_headingImageForAccuracy:(double)accuracy;
-(void)_setShouldPulse:(BOOL)_set;
-(void)_startPulseAnimationIfPossible;
-(void)dealloc;
-(CGRect)maximumBoundingRectWithCanvasSize:(CGSize)canvasSize;
-(void)setEffectsEnabled:(BOOL)enabled;
-(void)setHeadingAccuracy:(double)accuracy;
-(void)setLocationAccuracy:(double)accuracy;
-(void)setLocationSource:(int)source;
-(void)setOpacity:(float)opacity;
-(void)setSelected:(BOOL)selected;
-(void)setShouldDisplayHeading:(BOOL)displayHeading;
-(void)setStale:(BOOL)stale;
@end

