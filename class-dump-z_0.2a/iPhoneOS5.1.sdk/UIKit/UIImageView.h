/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIImageView.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UIImage;

@interface UIImageView : UIView {
@private
	id _storage;
}
@property(assign, nonatomic) double animationDuration;
@property(copy, nonatomic) NSArray* animationImages;
@property(assign, nonatomic) int animationRepeatCount;
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;
@property(copy, nonatomic) NSArray* highlightedAnimationImages;
@property(retain, nonatomic) UIImage* highlightedImage;
@property(retain, nonatomic) UIImage* image;
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// @dynamic
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithImage:(id)image;
-(id)initWithImage:(id)image highlightedImage:(id)image2;
-(void)_setViewGeometry:(CGRect)geometry forMetric:(int)metric;
// declared property getter: -(double)animationDuration;
// declared property getter: -(id)animationImages;
// declared property getter: -(int)animationRepeatCount;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)highlightedAnimationImages;
// declared property getter: -(id)highlightedImage;
// declared property getter: -(id)image;
-(BOOL)isAnimating;
// declared property getter: -(BOOL)isHighlighted;
// declared property setter: -(void)setAnimationDuration:(double)duration;
// declared property setter: -(void)setAnimationImages:(id)images;
// declared property setter: -(void)setAnimationRepeatCount:(int)count;
-(void)setBackgroundColor:(id)color;
-(void)setBounds:(CGRect)bounds;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setHighlighted:(BOOL)highlighted;
// declared property setter: -(void)setHighlightedAnimationImages:(id)images;
// declared property setter: -(void)setHighlightedImage:(id)image;
// declared property setter: -(void)setImage:(id)image;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)startAnimating;
-(void)stopAnimating;
@end

@interface UIImageView (UIImageViewInternal)
-(BOOL)_canDrawContent;
-(BOOL)_setImageViewContents:(id)contents;
-(BOOL)_shouldDrawImage:(id)image;
-(void)_updateState;
-(void)setContentStretch:(CGRect)stretch;
@end

@interface UIImageView (UIImageViewPrivate)
@property(assign, nonatomic) int drawMode;	// @dynamic
-(BOOL)_shouldAnimatePropertyWithKey:(id)key;
// declared property getter: -(int)drawMode;
-(CGImageRef)imageRef;
-(void)setAnimating:(BOOL)animating;
-(void)setCGImageRef:(CGImageRef)ref;
// declared property setter: -(void)setDrawMode:(int)mode;
@end

@interface UIImageView (ClassicAdditions)
-(BOOL)useBlockyMagnificationInClassic;
@end

@interface UIImageView (UIKitAccessibilityInterfaceBuilderSupport)
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

@interface UIImageView (Pretiling)
-(id)_cachedPretiledImageForImage:(id)image;
-(void)_clearPretiledImageCacheForImage:(id)image;
-(BOOL)_recomputePretilingState;
-(void)_updatePretiledImageCacheForImage:(id)image;
@end

