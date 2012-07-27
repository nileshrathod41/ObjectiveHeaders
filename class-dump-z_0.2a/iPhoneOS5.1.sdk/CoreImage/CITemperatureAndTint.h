/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CITemperatureAndTint : CIFilter {
@private
	CIImage* inputImage;
	CIVector* inputNeutral;
	CIVector* inputTargetNeutral;
}
@property(retain, nonatomic) CIImage* inputImage;	// @synthesize
@property(copy, nonatomic) CIVector* inputNeutral;	// @dynamic
@property(copy, nonatomic) CIVector* inputTargetNeutral;	// @synthesize
+(id)customAttributes;
// declared property getter: -(id)inputImage;
// declared property getter: -(id)inputNeutral;
// declared property getter: -(id)inputTargetNeutral;
-(id)outputImage;
-(void)setDefaults;
// declared property setter: -(void)setInputImage:(id)image;
// declared property setter: -(void)setInputNeutral:(id)neutral;
// declared property setter: -(void)setInputTargetNeutral:(id)neutral;
@end

