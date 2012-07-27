/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"

@class CIVector, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CITwirl : CIFilter {
@private
	CIImage* inputImage;
	CIVector* inputPoint;
	NSNumber* inputAmount;
	NSNumber* inputRotation;
}
@property(retain, nonatomic) NSNumber* inputAmount;	// @synthesize
@property(retain, nonatomic) CIImage* inputImage;	// @synthesize
@property(retain, nonatomic) CIVector* inputPoint;	// @synthesize
@property(retain, nonatomic) NSNumber* inputRotation;	// @synthesize
+(id)customAttributes;
-(id)_kernel;
// declared property getter: -(id)inputAmount;
// declared property getter: -(id)inputImage;
// declared property getter: -(id)inputPoint;
// declared property getter: -(id)inputRotation;
-(id)outputImage;
-(void)setDefaults;
// declared property setter: -(void)setInputAmount:(id)amount;
// declared property setter: -(void)setInputImage:(id)image;
// declared property setter: -(void)setInputPoint:(id)point;
// declared property setter: -(void)setInputRotation:(id)rotation;
@end

