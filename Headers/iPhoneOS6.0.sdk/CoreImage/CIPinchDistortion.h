/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIPinchDistortion : CIFilter {
@private
	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputScale;
}
@property(copy, nonatomic) CIVector* inputCenter;	// @synthesize
@property(retain, nonatomic) CIImage* inputImage;	// @synthesize
@property(copy, nonatomic) NSNumber* inputRadius;	// @synthesize
@property(copy, nonatomic) NSNumber* inputScale;	// @synthesize
+(id)customAttributes;
-(id)_pinchDistortionScaleGE1;
-(id)_pinchDistortionScaleLT1;
-(CGRect)computeDOD:(float)dod scale:(float)scale;
// declared property getter: -(id)inputCenter;
// declared property getter: -(id)inputImage;
// declared property getter: -(id)inputRadius;
// declared property getter: -(id)inputScale;
-(id)outputImage;
-(void)setDefaults;
// declared property setter: -(void)setInputCenter:(id)center;
// declared property setter: -(void)setInputImage:(id)image;
// declared property setter: -(void)setInputRadius:(id)radius;
// declared property setter: -(void)setInputScale:(id)scale;
@end

