/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _UIGestureRecognizerTransformAnalyzer : XXUnknownSuperclass {
@private
	float _lowPassTranslationMagnitudeDelta;
	float _lowPassScaleDelta;
	float _lowPassRotationDelta;
	float _translationWeight;
	float _pinchingWeight;
	float _rotationWeight;
	int _dominantComponent;
}
@property(readonly, assign, nonatomic) int dominantComponent;	// @synthesize=_dominantComponent
@property(assign, nonatomic) float pinchingWeight;	// @synthesize=_pinchingWeight
@property(assign, nonatomic) float rotationWeight;	// @synthesize=_rotationWeight
@property(assign, nonatomic) float translationWeight;	// @synthesize=_translationWeight
-(id)init;
-(void)analyzeTouches:(id)touches;
// declared property getter: -(int)dominantComponent;
// declared property getter: -(float)pinchingWeight;
-(void)reset;
// declared property getter: -(float)rotationWeight;
// declared property setter: -(void)setPinchingWeight:(float)weight;
// declared property setter: -(void)setRotationWeight:(float)weight;
// declared property setter: -(void)setTranslationWeight:(float)weight;
// declared property getter: -(float)translationWeight;
@end

