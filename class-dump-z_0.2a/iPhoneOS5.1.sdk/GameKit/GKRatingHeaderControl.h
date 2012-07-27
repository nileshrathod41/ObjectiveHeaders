/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKRatingControl.h"

@class UILabel;

@interface GKRatingHeaderControl : GKRatingControl {
@private
	UILabel* _labelView;
}
@property(retain, nonatomic) UILabel* labelView;	// @synthesize=_labelView
-(id)init;
-(void)dealloc;
// declared property getter: -(id)labelView;
-(void)layoutSubviewsInBounds:(CGRect)bounds;
-(CGRect)rectForRatingStarsWithBounds:(CGRect)bounds;
// declared property setter: -(void)setLabelView:(id)view;
@end

