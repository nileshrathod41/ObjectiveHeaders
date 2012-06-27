/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AddressBookUI-Structs.h"

@class UIImage, UIView;

@interface ABPersonIconImageView : XXUnknownSuperclass {
@private
	UIView* _imageView;
	int _imageType;
	CGSize _iconSize;
	UIImage* _maskImage;
	UIImage* _overlayImage;
	id _styleHelper;
}
@property(readonly, assign, nonatomic) int imageType;	// @synthesize=_imageType
@property(retain, nonatomic) UIImage* maskImage;	// @synthesize=_maskImage
@property(retain, nonatomic) UIImage* overlayImage;	// @synthesize=_overlayImage
@property(assign, nonatomic) BOOL shouldPickBestImage;
+(BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlayForType:(int)_cardPlaceholderImage;
+(id)_placeholderCompanyImageForType:(int)type size:(CGSize)size;
+(id)_placeholderPersonImageForType:(int)type size:(CGSize)size;
+(id)genericBlankPlaceholderImageOfSize:(CGSize)size;
+(id)leftRightBorderOverlayImageOfSize:(CGSize)size;
+(id)newImageViewWithIconSize:(CGSize)iconSize imageType:(int)type;
+(CGSize)optimalIconSize;
+(id)rightBorderOverlayImageOfSize:(CGSize)size;
-(id)init;
-(id)initWithIconSize:(CGSize)iconSize imageType:(int)type;
-(BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlay;
-(id)_maskImageOrNSNull;
-(id)_overlayImageOrNSNull;
-(id)_placeholderCompanyImage;
-(id)_placeholderPersonImage;
-(void)_updateImages;
-(void)dealloc;
-(void*)displayedPerson;
-(BOOL)hasImageToDisplay;
// declared property getter: -(int)imageType;
// declared property getter: -(id)maskImage;
// declared property getter: -(id)overlayImage;
-(id)personImageView;
-(void)setDisplayedPerson:(void*)person;
// declared property setter: -(void)setMaskImage:(id)image;
-(void)setNeedsRecompositing;
-(void)setNeedsReload;
// declared property setter: -(void)setOverlayImage:(id)image;
// declared property setter: -(void)setShouldPickBestImage:(BOOL)pickBestImage;
// declared property getter: -(BOOL)shouldPickBestImage;
@end

