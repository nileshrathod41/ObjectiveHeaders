/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import "Social-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UIView;

@interface SLWeiboSheetCardView : XXUnknownSuperclass {
	UIView* _contentView;
	UIView* _paperBG;
	UIView* _paperTexture;
	UIImageView* _chrome;
	UIImageView* _topGradient;
	UIImageView* _bottomGradient;
	BOOL _hidesBottom;
}
@property(readonly, assign, nonatomic) UIView* contentView;
-(id)initWithFrame:(CGRect)frame;
-(void).cxx_destruct;
-(CGRect)_cardRectForOrientation:(int)orientation options:(int)options parentBounds:(CGRect)bounds keyboardFrame:(CGRect)frame;
-(id)_imageWithName:(id)name;
-(CGRect)_keyboardFrameForInterfaceOrientation:(int)interfaceOrientation;
-(CGRect)_paperBounds;
-(void)_setHidesBottom:(BOOL)bottom;
-(void)_setupSubviews;
-(void)awakeFromNib;
// declared property getter: -(id)contentView;
-(void)layoutSubviews;
-(void)restoreKeyboard;
-(void)updateCardRectForOrientation:(int)orientation options:(int)options;
-(void)updateKeyboardForOrientation:(int)orientation;
@end

