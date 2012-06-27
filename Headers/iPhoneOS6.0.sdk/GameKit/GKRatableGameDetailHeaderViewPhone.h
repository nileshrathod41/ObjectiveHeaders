/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKGameDetailHeaderViewPhone.h"
#import "GameKit-Structs.h"

@class GKStoreItemInternal, UILabel, UIImageView, GKFacebookLikeButton, GKRatingControl;

@interface GKRatableGameDetailHeaderViewPhone : GKGameDetailHeaderViewPhone {
@private
	GKRatingControl* _ratingControl;
	GKFacebookLikeButton* _likeButton;
	UILabel* _ratingLabel;
	GKStoreItemInternal* _storeItem;
	UIImageView* _dividerView;
}
@property(retain, nonatomic) UIImageView* dividerView;	// @synthesize=_dividerView
@property(retain, nonatomic) GKFacebookLikeButton* likeButton;	// @synthesize=_likeButton
@property(retain, nonatomic) GKRatingControl* ratingControl;	// @synthesize=_ratingControl
@property(retain, nonatomic) UILabel* ratingLabel;	// @synthesize=_ratingLabel
@property(retain, nonatomic) GKStoreItemInternal* storeItem;	// @synthesize=_storeItem
-(id)init;
-(void)applyRating:(id)rating;
-(void)configureTitleView;
-(void)dealloc;
// declared property getter: -(id)dividerView;
-(int)gameIconStyle;
-(BOOL)iconOnLeft;
-(CGRect)layoutSubviewsForBounds:(CGRect)bounds;
// declared property getter: -(id)likeButton;
-(float)preferredHeightForOrientation:(int)orientation;
// declared property getter: -(id)ratingControl;
// declared property getter: -(id)ratingLabel;
-(void)readRating;
// declared property setter: -(void)setDividerView:(id)view;
// declared property setter: -(void)setLikeButton:(id)button;
// declared property setter: -(void)setRatingControl:(id)control;
// declared property setter: -(void)setRatingLabel:(id)label;
// declared property setter: -(void)setStoreItem:(id)item;
// declared property getter: -(id)storeItem;
-(void)updateFromGameRecord;
@end

