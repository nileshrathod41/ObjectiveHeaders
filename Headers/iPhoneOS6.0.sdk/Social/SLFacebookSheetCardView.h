/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import "Social-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, CAGradientLayer, UIView;

__attribute__((visibility("hidden")))
@interface SLFacebookSheetCardView : XXUnknownSuperclass {
@private
	UIView* _contentView;
	UIView* _paperBG;
	UIView* _paperTexture;
	CAGradientLayer* _gradientLayer;
	UIImageView* _bevel;
	UIView* _headerView;
	BOOL _hidesBottom;
	BOOL _useLightShadow;
	BOOL _usedLocally;
}
@property(readonly, assign, nonatomic) UIView* contentView;
@property(assign, nonatomic) BOOL useLightShadow;	// @synthesize=_useLightShadow
@property(assign, nonatomic) BOOL usedLocally;	// @synthesize=_usedLocally
+(CGRect)cardRectForOrientation:(int)orientation options:(int)options parentBounds:(CGRect)bounds keyboardFrame:(CGRect)frame;
+(CGRect)keyboardFrameForInterfaceOrientation:(int)interfaceOrientation;
-(id)initWithFrame:(CGRect)frame;
-(void).cxx_destruct;
-(CGRect)_bevelRect;
-(void)_setHeaderBackgroundImage:(id)image;
-(void)_updateHeader;
-(void)awakeFromNib;
// declared property getter: -(id)contentView;
-(CGRect)headerFrame;
-(id)imageWithName:(id)name;
-(void)layoutSubviews;
-(CGRect)paperBounds;
-(void)restoreKeyboard;
// declared property setter: -(void)setUseLightShadow:(BOOL)shadow;
// declared property setter: -(void)setUsedLocally:(BOOL)locally;
-(void)setupSubviews;
-(void)updateCardRectForOrientation:(int)orientation options:(int)options;
-(void)updateKeyboardForOrientation:(int)orientation;
// declared property getter: -(BOOL)useLightShadow;
// declared property getter: -(BOOL)usedLocally;
@end

