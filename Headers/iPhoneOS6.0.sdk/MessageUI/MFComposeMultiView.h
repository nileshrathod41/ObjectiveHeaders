/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MFComposeHeaderView.h"
#import "MessageUI-Structs.h"

@class UILabel, MFHeaderLabelView;

@interface MFComposeMultiView : MFComposeHeaderView {
	UILabel* _accountLabel;
	MFHeaderLabelView* _imageSizeHeaderLabelView;
	UILabel* _imageSizeLabel;
	UILabel* _placeholderImageSizeLabel;
	BOOL _imageSizeShown;
}
-(CGRect)_initialLabelFrame;
-(id)accountLabel;
-(void)dealloc;
-(id)imageSizeHeaderLabelView;
-(id)imageSizeLabel;
-(void)layoutSubviews;
-(id)placeholderImageSizeLabel;
-(void)setAccountDescription:(id)description;
-(void)setImageSizeDescription:(id)description;
-(void)setShowsImageSize:(BOOL)size;
@end

