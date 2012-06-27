/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UIImageView;

@interface GKDetailHeaderView : XXUnknownSuperclass {
@private
	UIEdgeInsets _backgroundInsets;
	UIEdgeInsets _contentInsets;
	UIView* _accessoryView;
	float _accessoryMarginX;
	float _accessoryMarginY;
	float _accessoryHeightBelowFrame;
	BOOL _showsWoodenFrame;
	BOOL _shouldUseNarrowWoodenFrame;
	float _maxWidth;
	UIImageView* _backgroundView;
}
@property(assign, nonatomic) float accessoryHeightBelowFrame;	// @synthesize=_accessoryHeightBelowFrame
@property(assign, nonatomic) float accessoryMarginX;	// @synthesize=_accessoryMarginX
@property(assign, nonatomic) float accessoryMarginY;	// @synthesize=_accessoryMarginY
@property(retain, nonatomic) UIView* accessoryView;	// @synthesize=_accessoryView
@property(assign, nonatomic) UIEdgeInsets backgroundInsets;	// @synthesize=_backgroundInsets
@property(retain, nonatomic) UIImageView* backgroundView;	// @synthesize=_backgroundView
@property(assign, nonatomic) UIEdgeInsets contentInsets;	// @synthesize=_contentInsets
@property(assign, nonatomic) float maxWidth;	// @synthesize=_maxWidth
@property(assign, nonatomic) BOOL shouldUseNarrowWoodenFrame;	// @synthesize=_shouldUseNarrowWoodenFrame
@property(assign, nonatomic) BOOL showsWoodenFrame;	// @synthesize=_showsWoodenFrame
-(id)initWithFrame:(CGRect)frame;
-(BOOL)_usePadUI;
// declared property getter: -(float)accessoryHeightBelowFrame;
// declared property getter: -(float)accessoryMarginX;
// declared property getter: -(float)accessoryMarginY;
// declared property getter: -(id)accessoryView;
// declared property getter: -(UIEdgeInsets)backgroundInsets;
// declared property getter: -(id)backgroundView;
// declared property getter: -(UIEdgeInsets)contentInsets;
-(void)dealloc;
-(id)framedHeaderBackgroundImageForRect:(CGRect)rect;
-(void)invalidateBackgroundImage;
-(void)layoutAccessoryViewForBounds:(CGRect)bounds;
-(void)layoutSubviews;
-(CGRect)layoutSubviewsForBounds:(CGRect)bounds;
-(void)layoutWoodenFrameForBounds:(CGRect)bounds;
// declared property getter: -(float)maxWidth;
// declared property setter: -(void)setAccessoryHeightBelowFrame:(float)frame;
// declared property setter: -(void)setAccessoryMarginX:(float)x;
// declared property setter: -(void)setAccessoryMarginY:(float)y;
// declared property setter: -(void)setAccessoryView:(id)view;
// declared property setter: -(void)setBackgroundInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setBackgroundView:(id)view;
// declared property setter: -(void)setContentInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setMaxWidth:(float)width;
// declared property setter: -(void)setShouldUseNarrowWoodenFrame:(BOOL)useNarrowWoodenFrame;
// declared property setter: -(void)setShowsWoodenFrame:(BOOL)frame;
// declared property getter: -(BOOL)shouldUseNarrowWoodenFrame;
// declared property getter: -(BOOL)showsWoodenFrame;
@end

