/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "_UIShadowedView.h"

@class UIImageView, UITabBarItem, NSMutableArray, UIColor, NSArray, UIImage;
@protocol UITabBarDelegate;

@interface UITabBar : UIView <_UIShadowedView> {
@private
	UIView* _customizeView;
	UIView* _backgroundView;
	UIImageView* _shadowView;
	id<UITabBarDelegate> _delegate;
	NSArray* _items;
	UITabBarItem* _selectedItem;
	NSArray* _customizationItems;
	struct {
		unsigned pushedRunLoop : 1;
		unsigned isRotatingRight : 1;
		unsigned isZoomRubberBandEnabled : 1;
		unsigned zoomsFromCurrentToMinOrMax : 1;
		unsigned updatesScroller : 1;
		unsigned isAnimatingZoomFailure : 1;
	} _tabBarFlags;
	NSArray* _buttonItems;
	CFArrayRef _hiddenItems;
	id _appearanceStorage;
	float _nextSelectionSlideDuration;
	float _tabButtonWidth;
	float _interTabButtonSpacing;
	BOOL _dividerImagesChangeWithSelection;
	BOOL _dividerImagesAreInvalid;
	NSMutableArray* _dividerImageViews;
}
@property(retain, nonatomic, setter=_setBackgroundView:) UIView* _backgroundView;
@property(retain, nonatomic, setter=_setDividerImageViews:) NSMutableArray* _dividerImageViews;	// @synthesize
@property(assign, nonatomic, setter=_setDividerImagesAreInvalid:) BOOL _dividerImagesAreInvalid;	// @synthesize
@property(assign, nonatomic, setter=_setDividerImagesChangeWithSelection:) BOOL _dividerImagesChangeWithSelection;	// @synthesize
@property(assign, nonatomic, setter=_setInterTabButtonSpacing:) float _interTabButtonSpacing;	// @synthesize
@property(assign, nonatomic, setter=_setNextSelectionSlideDuration:) float _nextSelectionSlideDuration;	// @synthesize
@property(assign, nonatomic, setter=_setTabButtonWidth:) float _tabButtonWidth;	// @synthesize
@property(retain, nonatomic) UIImage* backgroundImage;
@property(assign, nonatomic) id<UITabBarDelegate> delegate;	// @synthesize=_delegate
@property(copy, nonatomic) NSArray* items;
@property(retain, nonatomic) UIColor* selectedImageTintColor;
@property(assign, nonatomic) UITabBarItem* selectedItem;
@property(retain, nonatomic) UIImage* selectionIndicatorImage;
@property(retain, nonatomic) UIImage* shadowImage;
@property(retain, nonatomic) UIColor* tintColor;
+(float)_buttonGap;
+(float)defaultHeightForBarSize:(int)barSize;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(void)_activityViewControllerIsAppearing:(id)appearing;
-(void)_activityViewControllerIsDisappearing:(id)disappearing;
-(void)_adjustButtonSelection:(id)selection;
-(void)_alertDidHide;
-(void)_alertWillShow:(BOOL)_alert duration:(float)duration;
-(void)_animateSelectionChangeFromView:(id)view toView:(id)view2 duration:(float)duration;
-(id)_appearanceStorage;
-(float)_autolayoutSpacingAtEdge:(int)edge inContainer:(id)container;
-(float)_autolayoutSpacingAtEdge:(int)edge nextToNeighbor:(id)neighbor;
// declared property getter: -(id)_backgroundView;
-(void)_buttonCancel:(id)cancel;
-(void)_buttonDown:(id)down;
-(void)_buttonDownDelayed:(id)delayed;
-(void)_buttonUp:(id)up;
-(BOOL)_canDrawContent;
-(void)_configureTabBarReplacingItem:(id)item withNewItem:(id)newItem dragging:(BOOL)dragging swapping:(BOOL)swapping;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)_customizeDoneButtonAction:(id)action;
-(void)_customizeWithAvailableItems:(id)availableItems;
-(void)_didMoveFromWindow:(id)window toWindow:(id)window2;
-(void)_dismissCustomizeSheet:(BOOL)sheet;
-(id)_dividerImageForLeftButtonState:(unsigned)leftButtonState rightButtonState:(unsigned)state;
// declared property getter: -(id)_dividerImageViews;
// declared property getter: -(BOOL)_dividerImagesAreInvalid;
// declared property getter: -(BOOL)_dividerImagesChangeWithSelection;
-(void)_finishCustomizeAnimation:(id)animation;
-(void)_finishSetItems:(id)items finished:(id)finished context:(void*)context;
-(BOOL)_hasCustomAutolayoutNeighborSpacing;
// declared property getter: -(float)_interTabButtonSpacing;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)size;
-(void)_invalidateDividerImages;
-(BOOL)_isHidden:(id)hidden;
// declared property getter: -(float)_nextSelectionSlideDuration;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)_positionTabBarButtons:(id)buttons ignoringItem:(id)item;
-(void)_sendAction:(id)action withEvent:(id)event;
-(void)_setBackgroundImage:(id)image;
// declared property setter: -(void)_setBackgroundView:(id)view;
-(void)_setDividerImage:(id)image forLeftButtonState:(unsigned)leftButtonState rightButtonState:(unsigned)state;
// declared property setter: -(void)_setDividerImageViews:(id)views;
// declared property setter: -(void)_setDividerImagesAreInvalid:(BOOL)invalid;
// declared property setter: -(void)_setDividerImagesChangeWithSelection:(BOOL)selection;
// declared property setter: -(void)_setInterTabButtonSpacing:(float)spacing;
-(void)_setLabelFont:(id)font;
-(void)_setLabelShadowColor:(id)color;
-(void)_setLabelShadowOffset:(CGSize)offset;
-(void)_setLabelTextColor:(id)color selectedTextColor:(id)color2;
// declared property setter: -(void)_setNextSelectionSlideDuration:(float)duration;
-(void)_setSelectionIndicatorImage:(id)image;
// declared property setter: -(void)_setTabButtonWidth:(float)width;
-(id)_shadowView;
-(BOOL)_subclassImplementsDrawRect;
-(void)_tabBarFinishedAnimating;
// declared property getter: -(float)_tabButtonWidth;
-(id)_topmostDividerImageView;
-(void)_updateAppearanceCustomizationIfNecessaryForItem:(id)item;
-(void)_updateBackgroundImage;
-(void)_updateDividerImagesIfNecessary;
-(void)_updateTintedImages:(id)images selected:(BOOL)selected;
-(void)addConstraint:(id)constraint;
// declared property getter: -(id)backgroundImage;
-(void)beginCustomizingItems:(id)items;
-(id)buttonItems;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)dismissCustomizeSheet:(BOOL)sheet;
-(void)drawRect:(CGRect)rect;
-(void)encodeWithCoder:(id)coder;
-(BOOL)endCustomizingAnimated:(BOOL)animated;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(BOOL)isCustomizing;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)isLocked;
// declared property getter: -(id)items;
-(void)layoutSubviews;
-(void)removeConstraint:(id)constraint;
// declared property getter: -(id)selectedImageTintColor;
// declared property getter: -(id)selectedItem;
// declared property getter: -(id)selectionIndicatorImage;
-(void)setAutoresizingMask:(unsigned)mask;
// declared property setter: -(void)setBackgroundImage:(id)image;
-(void)setBadgeAnimated:(BOOL)animated forButton:(int)button;
-(void)setBadgeGlyph:(id)glyph forButton:(int)button;
-(void)setBadgeValue:(id)value forButton:(int)button;
-(void)setBounds:(CGRect)bounds;
-(void)setButtonItems:(id)items;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setItems:(id)items;
-(void)setItems:(id)items animated:(BOOL)animated;
-(void)setLocked:(BOOL)locked;
// declared property setter: -(void)setSelectedImageTintColor:(id)color;
// declared property setter: -(void)setSelectedItem:(id)item;
// declared property setter: -(void)setSelectionIndicatorImage:(id)image;
// declared property setter: -(void)setShadowImage:(id)image;
// declared property setter: -(void)setTintColor:(id)color;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)constraints;
// declared property getter: -(id)shadowImage;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(id)tintColor;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
@end

