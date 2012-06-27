/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollViewDelegate.h"
#import "UIView.h"

@class UIImageView, UIButton, UIPageControl, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIActivityListView : UIView <UIScrollViewDelegate> {
@private
	UIView* _headerView;
	int _numberOfPages;
	UIImageView* _shadowView;
	int _numberOfColumns;
	UIImageView* _backgroundView;
	float _blankSpace;
	UIScrollView* _scrollView;
	CGSize _containerSize;
	BOOL _presentingModally;
	int _numberOfRows;
	UIPageControl* _pageControl;
	UIButton* _cancelButton;
}
@property(retain, nonatomic) UIImageView* backgroundView;	// @synthesize=_backgroundView
@property(assign, nonatomic) float blankSpace;	// @synthesize=_blankSpace
@property(retain, nonatomic) UIButton* cancelButton;	// @synthesize=_cancelButton
@property(assign, nonatomic) CGSize containerSize;	// @synthesize=_containerSize
@property(retain, nonatomic) UIView* headerView;	// @synthesize=_headerView
@property(assign, nonatomic) int numberOfColumns;	// @synthesize=_numberOfColumns
@property(assign, nonatomic) int numberOfPages;	// @synthesize=_numberOfPages
@property(assign, nonatomic) int numberOfRows;	// @synthesize=_numberOfRows
@property(retain, nonatomic) UIPageControl* pageControl;	// @synthesize=_pageControl
@property(assign, nonatomic) BOOL presentingModally;	// @synthesize=_presentingModally
@property(retain, nonatomic) UIScrollView* scrollView;	// @synthesize=_scrollView
@property(retain, nonatomic) UIImageView* shadowView;	// @synthesize=_shadowView
-(id)initPresentingModally:(BOOL)modally containerSize:(CGSize)size;
-(void)_changePage;
-(void)_setupBackground;
-(void)_setupScrollView;
-(void)addActivityButton:(id)button activityTitle:(id)title target:(id)target action:(SEL)action;
-(void)addCancelButton:(id)button action:(SEL)action;
// declared property getter: -(id)backgroundView;
// declared property getter: -(float)blankSpace;
// declared property getter: -(id)cancelButton;
// declared property getter: -(CGSize)containerSize;
-(void)dealloc;
// declared property getter: -(id)headerView;
-(void)layoutSubviews;
// declared property getter: -(int)numberOfColumns;
// declared property getter: -(int)numberOfPages;
// declared property getter: -(int)numberOfRows;
// declared property getter: -(id)pageControl;
// declared property getter: -(BOOL)presentingModally;
-(void)reloadActivityButton:(id)button;
// declared property getter: -(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
// declared property setter: -(void)setBackgroundView:(id)view;
// declared property setter: -(void)setBlankSpace:(float)space;
// declared property setter: -(void)setCancelButton:(id)button;
// declared property setter: -(void)setContainerSize:(CGSize)size;
// declared property setter: -(void)setHeaderView:(id)view;
-(void)setHeaderVisible:(BOOL)visible;
// declared property setter: -(void)setNumberOfColumns:(int)columns;
// declared property setter: -(void)setNumberOfPages:(int)pages;
// declared property setter: -(void)setNumberOfRows:(int)rows;
// declared property setter: -(void)setPageControl:(id)control;
// declared property setter: -(void)setPresentingModally:(BOOL)modally;
// declared property setter: -(void)setScrollView:(id)view;
// declared property setter: -(void)setShadowView:(id)view;
// declared property getter: -(id)shadowView;
-(CGSize)sizeThatFits:(CGSize)fits;
@end

