/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIToneCurve : CIFilter {
@private
	CIImage* inputImage;
	CIVector* inputPoint0;
	CIVector* inputPoint1;
	CIVector* inputPoint2;
	CIVector* inputPoint3;
	CIVector* inputPoint4;
	CIImage* _curveImage;
}
@property(retain, nonatomic) CIImage* inputImage;	// @synthesize
@property(copy, nonatomic) CIVector* inputPoint0;	// @synthesize
@property(copy, nonatomic) CIVector* inputPoint1;	// @synthesize
@property(copy, nonatomic) CIVector* inputPoint2;	// @synthesize
@property(copy, nonatomic) CIVector* inputPoint3;	// @synthesize
@property(copy, nonatomic) CIVector* inputPoint4;	// @synthesize
+(id)curveImageFromPoints:(const CGPoint*)points;
+(id)curveImageFromPoints:(const CGPoint*)points linear:(BOOL)linear;
+(id)customAttributes;
+(void)splineCurveTable:(float*)table tableSize:(int)size gamma:(float)gamma from:(const CGPoint*)from;
-(id)_initFromProperties:(id)properties;
-(BOOL)_isIdentity;
-(id)_kernel16;
-(id)_outputProperties;
-(void)dealloc;
// declared property getter: -(id)inputImage;
// declared property getter: -(id)inputPoint0;
// declared property getter: -(id)inputPoint1;
// declared property getter: -(id)inputPoint2;
// declared property getter: -(id)inputPoint3;
// declared property getter: -(id)inputPoint4;
-(id)outputImage;
-(void)setDefaults;
// declared property setter: -(void)setInputImage:(id)image;
// declared property setter: -(void)setInputPoint0:(id)a0;
// declared property setter: -(void)setInputPoint1:(id)a1;
// declared property setter: -(void)setInputPoint2:(id)a2;
// declared property setter: -(void)setInputPoint3:(id)a3;
// declared property setter: -(void)setInputPoint4:(id)a4;
@end

