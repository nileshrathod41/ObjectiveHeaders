/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABStyleProvider.h"

@class ABPersonIconImageView, ABPersonImageView;

@interface ABPersonIconImageStyleProvider : ABStyleProvider {
	ABPersonImageView* _imageView;
	ABPersonIconImageView* _iconImageView;
}
-(id)initWithIconImageView:(id)iconImageView imageView:(id)view;
-(void)_clearAsStyleProvider;
-(id)cardPhotoBackgroundImage;
-(id)cardPhotoFacebookAttributionImage;
-(float)cardPhotoFrameBorderSize;
-(id)cardPhotoMaskImage;
-(CGSize)cardPhotoOffset;
-(id)cardPhotoOverlayImage;
-(id)cardPlaceholderCompanyImage;
-(BOOL)cardPlaceholderImageShouldApplyMaskAndOverlay;
-(id)cardPlaceholderPersonImage;
-(void)clearWeakReferencesToObject:(id)object;
-(void)dealloc;
-(float)personViewHeaderImageHeight;
-(float)personViewHeaderImageWidth;
@end

