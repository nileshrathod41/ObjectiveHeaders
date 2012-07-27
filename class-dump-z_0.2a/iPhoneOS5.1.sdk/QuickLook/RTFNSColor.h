/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "QuickLook-Structs.h"


__attribute__((visibility("hidden")))
@interface RTFNSColor : XXUnknownSuperclass {
@private
	float _red;
	float _green;
	float _blue;
	float _alpha;
}
@property(assign) float alpha;	// @synthesize=_alpha
@property(assign) float blue;	// @synthesize=_blue
@property(assign) float green;	// @synthesize=_green
@property(assign) float red;	// @synthesize=_red
+(id)blackColor;
+(id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;
+(id)colorWithCalibratedWhite:(float)calibratedWhite alpha:(float)alpha;
+(id)whiteColor;
-(id)init;
-(id)initWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;
-(id)initWithCalibratedWhite:(float)calibratedWhite alpha:(float)alpha;
// declared property getter: -(float)alpha;
// declared property getter: -(float)blue;
-(id)colorUsingColorSpaceName:(id)name;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)getRed:(float*)red green:(float*)green blue:(float*)blue alpha:(float*)alpha;
// declared property getter: -(float)green;
// declared property getter: -(float)red;
// declared property setter: -(void)setAlpha:(float)alpha;
// declared property setter: -(void)setBlue:(float)blue;
// declared property setter: -(void)setGreen:(float)green;
// declared property setter: -(void)setRed:(float)red;
@end

