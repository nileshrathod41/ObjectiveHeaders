/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIColor.h"
#import "NSCoding.h"
#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CIColor, NSString;

@interface UIColor : XXUnknownSuperclass <NSCoding> {
@private
	NSString* _systemColorName;
}
@property(readonly, assign, nonatomic) CGColorRef CGColor;
@property(readonly, assign, nonatomic) CIColor* CIColor;
@property(retain, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString* systemColorName;
+(id)_systemColorForColor:(id)color withName:(id)name;
+(id)_systemColorWithName:(id)name;
+(id)allocWithZone:(NSZone*)zone;
+(id)blackColor;
+(id)blueColor;
+(id)brownColor;
+(id)clearColor;
+(id)colorWithCGColor:(CGColorRef)cgcolor;
+(id)colorWithCIColor:(id)cicolor;
+(id)colorWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;
+(id)colorWithPatternImage:(id)patternImage;
+(id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
+(id)colorWithWhite:(float)white alpha:(float)alpha;
+(id)cyanColor;
+(id)darkGrayColor;
+(id)grayColor;
+(id)greenColor;
+(id)infoTextOverPinStripeTextColor;
+(void)initialize;
+(id)lightGrayColor;
+(id)magentaColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)redColor;
+(id)sectionHeaderBackgroundColor;
+(id)sectionHeaderBorderColor;
+(id)sectionHeaderOpaqueBackgroundColor;
+(id)sectionListBorderColor;
+(id)tableBackgroundColor;
+(id)tableCellBlueTextColor;
+(id)tableCellGrayTextColor;
+(id)tableCellGroupedBackgroundColor;
+(id)tableCellGroupedBackgroundColorLegacyWhite;
+(id)tableCellPlainBackgroundColor;
+(id)tableCellValue1BlueColor;
+(id)tableCellValue2BlueColor;
+(id)tableGroupedSeparatorLightColor;
+(id)tableGroupedTopShadowColor;
+(id)tableSelectionColor;
+(id)tableSelectionGradientEndColor;
+(id)tableSelectionGradientStartColor;
+(id)tableSeparatorDarkColor;
+(id)tableSeparatorLightColor;
+(id)tableShadowColor;
+(id)textFieldAtomBlueColor;
+(id)textFieldAtomPurpleColor;
+(id)whiteColor;
+(id)yellowColor;
-(id)initWithCGColor:(CGColorRef)cgcolor;
-(id)initWithCIColor:(id)cicolor;
-(id)initWithCoder:(id)coder;
-(id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;
-(id)initWithPatternImage:(id)patternImage;
-(id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
-(id)initWithWhite:(float)white alpha:(float)alpha;
// declared property getter: -(CGColorRef)CGColor;
// declared property getter: -(id)CIColor;
// declared property setter: -(void)_setSystemColorName:(id)name;
// declared property getter: -(id)_systemColorName;
-(float)alphaComponent;
-(CGColorRef)cgColor;
-(Class)classForCoder;
-(id)colorWithAlphaComponent:(float)alphaComponent;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(BOOL)getHue:(float*)hue saturation:(float*)saturation brightness:(float*)brightness alpha:(float*)alpha;
-(BOOL)getRed:(float*)red green:(float*)green blue:(float*)blue alpha:(float*)alpha;
-(BOOL)getWhite:(float*)white alpha:(float*)alpha;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isPatternColor;
-(void)set;
-(void)setFill;
-(void)setStroke;
-(id)styleString;
@end

@interface UIColor (UIColorSystemColors)
+(id)darkTextColor;
+(id)groupTableViewBackgroundColor;
+(id)insertionPointColor;
+(id)lightTextColor;
+(id)pinStripeColor;
+(id)scrollViewTexturedBackgroundColor;
+(id)selectionHighlightColor;
+(id)underPageBackgroundColor;
+(id)viewFlipsideBackgroundColor;
@end

@interface UIColor (UIColorSystemColorsPrivate)
+(id)_translucentPaperTextureColor;
+(id)noContentDarkGradientBackgroundColor;
+(id)noContentLightGradientBackgroundColor;
@end

