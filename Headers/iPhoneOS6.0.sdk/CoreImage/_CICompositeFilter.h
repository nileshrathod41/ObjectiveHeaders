/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface _CICompositeFilter : CIFilter {
@private
	CIImage* inputImage;
	CIImage* inputBackgroundImage;
}
@property(retain, nonatomic) CIImage* inputBackgroundImage;	// @synthesize
@property(retain, nonatomic) CIImage* inputImage;	// @synthesize
+(id)_filter_display_name;
+(id)_kernel;
+(id)_kernel_name;
+(id)_kernel_source;
+(id)customAttributes;
-(CGRect)_extentForInputExtent:(CGRect)inputExtent backgroundExtent:(CGRect)extent;
// declared property getter: -(id)inputBackgroundImage;
// declared property getter: -(id)inputImage;
-(id)outputImage;
// declared property setter: -(void)setInputBackgroundImage:(id)image;
// declared property setter: -(void)setInputImage:(id)image;
@end

