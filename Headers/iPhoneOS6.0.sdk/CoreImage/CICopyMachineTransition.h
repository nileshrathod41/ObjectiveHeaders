/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIVector, CIColor, CIImage;

__attribute__((visibility("hidden")))
@interface CICopyMachineTransition : CIFilter {
@private
	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIVector* inputExtent;
	CIColor* inputColor;
	NSNumber* inputTime;
	NSNumber* inputAngle;
	NSNumber* inputWidth;
	NSNumber* inputOpacity;
}
@property(copy, nonatomic) NSNumber* inputAngle;	// @synthesize
@property(copy, nonatomic) CIColor* inputColor;	// @synthesize
@property(copy, nonatomic) CIVector* inputExtent;	// @synthesize
@property(retain, nonatomic) CIImage* inputImage;	// @synthesize
@property(copy, nonatomic) NSNumber* inputOpacity;	// @synthesize
@property(retain, nonatomic) CIImage* inputTargetImage;	// @synthesize
@property(copy, nonatomic) NSNumber* inputTime;	// @synthesize
@property(copy, nonatomic) NSNumber* inputWidth;	// @synthesize
+(id)customAttributes;
-(id)_kernel;
// declared property getter: -(id)inputAngle;
// declared property getter: -(id)inputColor;
// declared property getter: -(id)inputExtent;
// declared property getter: -(id)inputImage;
// declared property getter: -(id)inputOpacity;
// declared property getter: -(id)inputTargetImage;
// declared property getter: -(id)inputTime;
// declared property getter: -(id)inputWidth;
-(id)outputImage;
-(void)setDefaults;
// declared property setter: -(void)setInputAngle:(id)angle;
// declared property setter: -(void)setInputColor:(id)color;
// declared property setter: -(void)setInputExtent:(id)extent;
// declared property setter: -(void)setInputImage:(id)image;
// declared property setter: -(void)setInputOpacity:(id)opacity;
// declared property setter: -(void)setInputTargetImage:(id)image;
// declared property setter: -(void)setInputTime:(id)time;
// declared property setter: -(void)setInputWidth:(id)width;
@end

