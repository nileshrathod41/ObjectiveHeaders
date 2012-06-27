/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class NSMutableArray, UISegment, UIColor;

@interface UISegmentedControl : UIControl <NSCoding> {
@private
	NSMutableArray* _segments;
	int _selectedSegment;
	int _highlightedSegment;
	UIView* _removedSegment;
	id _delegate;
	UIColor* _tintColor;
	int _barStyle;
	id _appearanceStorage;
	UIView* _backgroundBarView;
	float _enabledAlpha;
	struct {
		unsigned style : 3;
		unsigned size : 2;
		unsigned showsDisclosure : 1;
		unsigned delegateSelectedSegmentChanged : 1;
		unsigned delegateDisclosureButtonClicked : 1;
		unsigned delegateAlwaysNotifiesDelegateOfSegmentClicks : 1;
		unsigned momentaryClick : 1;
		unsigned dontAlwaysToggleForTwoSegments : 1;
		unsigned tracking : 1;
		unsigned mouseInside : 1;
		unsigned autosizeToFitSegments : 1;
		unsigned isSizingToFit : 1;
		unsigned autosizeText : 1;
		unsigned transparentBackground : 1;
		unsigned useProportionalWidthSegments : 1;
		unsigned translucentBackground : 1;
		unsigned appearanceNeedsUpdate : 1;
	} _segmentedControlFlags;
}
@property(assign, nonatomic) BOOL apportionsSegmentWidthsByContent;
@property(assign, nonatomic, getter=isMomentary) BOOL momentary;	// @dynamic
@property(readonly, assign, nonatomic) unsigned numberOfSegments;	// @dynamic
@property(retain, nonatomic) UISegment* removedSegment;
@property(assign, nonatomic) int segmentedControlStyle;	// @dynamic
@property(assign, nonatomic) int selectedSegmentIndex;	// @dynamic
@property(retain, nonatomic) UIColor* tintColor;	// @synthesize=_tintColor
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
+(float)defaultHeight;
+(float)defaultHeightForStyle:(int)style;
+(float)defaultHeightForStyle:(int)style size:(int)size;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame withStyle:(int)style withItems:(id)items;
-(id)initWithItems:(id)items;
-(float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;
-(id)_badgeValueForSegmentAtIndex:(unsigned)index;
-(float)_barHeight;
-(void)_clearSelectedSegment;
-(void)_commonSegmentedControlInit;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(id)_createSegmentAtIndex:(int)index position:(unsigned)position withInfo:(id)info;
-(void)_didMoveFromWindow:(id)window toWindow:(id)window2;
-(void)_insertSegment:(int)segment withInfo:(id)info animated:(BOOL)animated;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)size;
-(BOOL)_isInMiniBar;
-(BOOL)_isInTranslucentToolbar;
-(id)_optionsBackgroundImage;
-(BOOL)_optionsShadowHidden;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)_removeSegmentAnimationFinished:(id)finished finished:(id)finished2 context:(void*)context;
-(void)_resetForAppearanceChange;
-(void)_setAppearanceIsTiled:(BOOL)tiled leftCapWidth:(unsigned)width rightCapWidth:(unsigned)width3;
-(void)_setAutosizeText:(BOOL)text;
-(void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;
-(void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;
-(void)_setBadgeValue:(id)value forSegmentAtIndex:(unsigned)index;
-(void)_setControlSize:(int)size andInvalidate:(BOOL)invalidate;
-(void)_setDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state barMetrics:(int)metrics;
-(void)_setEnabled:(BOOL)enabled forcePropagateToSegments:(BOOL)segments;
-(void)_setNeedsAppearanceUpdate;
-(void)_setOptionsBackgroundImage:(id)image;
-(void)_setOptionsShadowHidden:(BOOL)hidden;
-(void)_setSegmentedControlAppearance:(XXStruct_wXTbsB*)appearance;
-(void)_setSelectedSegmentIndex:(int)index notify:(BOOL)notify;
-(void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;
-(void)_setTranslucentOptionsBackground:(BOOL)background;
-(BOOL)_shouldSelectSegmentAtIndex:(int)index;
-(void)_updateDividerImageForSegmentAtIndex:(unsigned)index;
-(void)_updateOptionsBackground;
-(void)addSegmentWithTitle:(id)title;
-(UIEdgeInsets)alignmentRectInsets;
// declared property getter: -(BOOL)apportionsSegmentWidthsByContent;
-(id)backgroundImageForState:(unsigned)state barMetrics:(int)metrics;
-(int)barStyle;
-(CGRect)bounds;
-(CGSize)contentOffsetForSegment:(unsigned)segment;
-(CGSize)contentOffsetForSegmentAtIndex:(unsigned)index;
-(UIOffset)contentPositionAdjustmentForSegmentType:(int)segmentType barMetrics:(int)metrics;
-(int)controlSize;
-(void)dealloc;
-(id)dividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state barMetrics:(int)metrics;
-(void)encodeWithCoder:(id)coder;
-(CGRect)frame;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)highlightSegment:(int)segment;
-(id)imageForSegment:(unsigned)segment;
-(id)imageForSegmentAtIndex:(unsigned)index;
-(id)infoViewForSegment:(int)segment;
-(void)insertSegment:(unsigned)segment withImage:(id)image animated:(BOOL)animated;
-(void)insertSegment:(unsigned)segment withTitle:(id)title animated:(BOOL)animated;
-(void)insertSegmentWithImage:(id)image atIndex:(unsigned)index animated:(BOOL)animated;
-(void)insertSegmentWithTitle:(id)title atIndex:(unsigned)index animated:(BOOL)animated;
-(BOOL)isEnabledForSegment:(unsigned)segment;
-(BOOL)isEnabledForSegmentAtIndex:(unsigned)index;
// declared property getter: -(BOOL)isMomentary;
-(void)layoutSubviews;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)mouseUp:(GSEventRef)up;
// declared property getter: -(unsigned)numberOfSegments;
-(BOOL)pointMostlyInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;
-(void)removeAllSegments;
-(void)removeSegment:(unsigned)segment animated:(BOOL)animated;
-(void)removeSegmentAtIndex:(unsigned)index animated:(BOOL)animated;
// declared property getter: -(id)removedSegment;
-(id)scriptingInfoWithChildren;
-(int)segmentControlStyle;
// declared property getter: -(int)segmentedControlStyle;
-(void)selectSegment:(int)segment;
-(int)selectedSegment;
// declared property getter: -(int)selectedSegmentIndex;
-(void)setAlpha:(float)alpha;
-(void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)segmentClicks;
-(void)setAlwaysToggleForTwoSegments:(BOOL)twoSegments;
// declared property setter: -(void)setApportionsSegmentWidthsByContent:(BOOL)content;
-(void)setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;
-(void)setBarStyle:(int)style;
-(void)setBounds:(CGRect)bounds;
-(void)setContentOffset:(CGSize)offset forSegment:(unsigned)segment;
-(void)setContentOffset:(CGSize)offset forSegmentAtIndex:(unsigned)index;
-(void)setContentPositionAdjustment:(UIOffset)adjustment forSegmentType:(int)segmentType barMetrics:(int)metrics;
-(void)setControlSize:(int)size;
-(void)setDelegate:(id)delegate;
-(void)setDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state barMetrics:(int)metrics;
-(void)setEnabled:(BOOL)enabled;
-(void)setEnabled:(BOOL)enabled forSegment:(unsigned)segment;
-(void)setEnabled:(BOOL)enabled forSegmentAtIndex:(unsigned)index;
-(void)setFrame:(CGRect)frame;
-(void)setImage:(id)image forSegment:(unsigned)segment;
-(void)setImage:(id)image forSegmentAtIndex:(unsigned)index;
-(void)setImagePadding:(CGSize)padding forSegment:(unsigned)segment;
// declared property setter: -(void)setMomentary:(BOOL)momentary;
-(void)setMomentaryClick:(BOOL)click;
// declared property setter: -(void)setRemovedSegment:(id)segment;
-(void)setSegmentControlStyle:(int)style;
// declared property setter: -(void)setSegmentedControlStyle:(int)style;
-(void)setSelectedSegment:(int)segment;
// declared property setter: -(void)setSelectedSegmentIndex:(int)index;
-(void)setShowsDisclosure:(BOOL)disclosure;
// declared property setter: -(void)setTintColor:(id)color;
-(void)setTitle:(id)title forSegment:(unsigned)segment;
-(void)setTitle:(id)title forSegmentAtIndex:(unsigned)index;
-(void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;
-(void)setTransparentBackground:(BOOL)background;
-(void)setWidth:(float)width forSegment:(unsigned)segment;
-(void)setWidth:(float)width forSegmentAtIndex:(unsigned)index;
-(BOOL)shouldTrack;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)sizeToFit;
// declared property getter: -(id)tintColor;
-(id)titleForSegment:(unsigned)segment;
-(id)titleForSegmentAtIndex:(unsigned)index;
-(id)titleTextAttributesForState:(unsigned)state;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(BOOL)transparentBackground;
-(void)updateForMiniBarState:(BOOL)miniBarState;
-(BOOL)useBlockyMagnificationInClassic;
-(id)viewForBaselineLayout;
-(float)widthForSegment:(unsigned)segment;
-(float)widthForSegmentAtIndex:(unsigned)index;
@end
