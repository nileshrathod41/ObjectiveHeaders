/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKImageCellContents.h"
#import "GameKit-Structs.h"
#import "GKTableViewCellContents.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKUITheme, UIImage;

@interface GKImageCellContents : XXUnknownSuperclass <GKTableViewCellContents> {
@private
	GKUITheme* _theme;
	UIImage* _image;
	UIEdgeInsets _imageInsets;
	CGSize _imageSize;
	id _representedObject;
}
@property(assign, nonatomic) CGRect confirmationButtonRect;
@property(retain, nonatomic) UIImage* image;	// @synthesize=_image
@property(assign, nonatomic) UIEdgeInsets imageInsets;	// @synthesize=_imageInsets
@property(assign, nonatomic) CGSize imageSize;	// @synthesize=_imageSize
@property(retain, nonatomic) id representedObject;	// @synthesize=_representedObject
@property(retain, nonatomic) GKUITheme* theme;	// @synthesize=_theme
-(void)dealloc;
// declared property getter: -(id)image;
// declared property getter: -(UIEdgeInsets)imageInsets;
// declared property getter: -(CGSize)imageSize;
-(float)preferredHeightForOrientation:(int)orientation;
-(void)prepareForReuse;
// declared property getter: -(id)representedObject;
// declared property setter: -(void)setImage:(id)image;
// declared property setter: -(void)setImageInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setImageSize:(CGSize)size;
// declared property setter: -(void)setRepresentedObject:(id)object;
// declared property setter: -(void)setTheme:(id)theme;
// declared property getter: -(id)theme;
@end

@interface GKImageCellContents (GKGameCellContents)
-(void)loadIconForGame:(id)game;
@end

