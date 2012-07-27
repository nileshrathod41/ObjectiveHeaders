/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CIAffineTransform.h"

@class CIImage, NSValue;

__attribute__((visibility("hidden")))
@interface CIAffineTransform : CIFilter {
@private
	CIImage* inputImage;
	NSValue* inputTransform;
}
@property(retain, nonatomic) CIImage* inputImage;	// @synthesize
@property(copy, nonatomic) NSValue* inputTransform;	// @synthesize
+(id)customAttributes;
// declared property getter: -(id)inputImage;
// declared property getter: -(id)inputTransform;
-(id)outputImage;
-(void)setDefaults;
// declared property setter: -(void)setInputImage:(id)image;
// declared property setter: -(void)setInputTransform:(id)transform;
@end

@interface CIAffineTransform (PrivateXMPSupport)
-(id)_initFromProperties:(id)properties;
-(id)_outputProperties;
@end

