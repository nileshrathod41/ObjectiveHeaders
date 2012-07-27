/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIColor, UIImage;

@interface UIGradientBar : UIView {
	UIImageView* _topShineView;
	UIImageView* _gradientFillView;
	UIView* _bottomLineView;
	float _gradientHeight;
}
@property(retain, nonatomic) UIColor* customBottomLineColor;
@property(retain, nonatomic) UIImage* customGradientFillImage;
@property(retain, nonatomic) UIImage* customTopShineImage;
+(id)bottomLineColor;
+(id)gradientFillImage;
+(id)topShineImage;
-(id)initWithFrame:(CGRect)frame;
-(void)_tile;
// declared property getter: -(id)customBottomLineColor;
// declared property getter: -(id)customGradientFillImage;
// declared property getter: -(id)customTopShineImage;
-(void)dealloc;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(void)setBottomLineAlpha:(float)alpha;
// declared property setter: -(void)setCustomBottomLineColor:(id)color;
// declared property setter: -(void)setCustomGradientFillImage:(id)image;
// declared property setter: -(void)setCustomTopShineImage:(id)image;
-(void)setFrame:(CGRect)frame;
-(void)setGradientHeight:(float)height;
@end

