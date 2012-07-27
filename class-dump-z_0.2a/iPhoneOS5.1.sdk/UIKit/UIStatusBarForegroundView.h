/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UIStatusBarComposedData, UIStatusBarLayoutManager, UILabel;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundView : UIView {
@private
	int _foregroundStyle;
	NSString* _statusString;
	BOOL _itemIsEnabled[23];
	UIStatusBarLayoutManager* _layoutManagers[3];
	UILabel* _doubleHeightLabel;
	int _ignoreDataLevel;
	UIStatusBarComposedData* _pendedData;
	int _pendedActions;
	BOOL _performedStyleChangeReflow;
}
@property(readonly, assign, nonatomic) int foregroundStyle;	// @synthesize=_foregroundStyle
-(id)initWithFrame:(CGRect)frame foregroundStyle:(int)style;
-(void)_cleanUpAfterDataChange;
-(void)_cleanUpAfterSimpleReflow;
-(void)_computeVisibleItems:(id*)items eitherSideItems:(id)items2;
-(void)_reflowItemViewsWithDuration:(double)duration suppressCenterAnimation:(BOOL)animation;
-(BOOL)_tryToPlaceItem:(id)placeItem inItemArray:(id)itemArray layoutManager:(id)manager roomRemaining:(float*)remaining allowSwap:(BOOL)swap swappedItem:(id*)item;
-(void)dealloc;
// declared property getter: -(int)foregroundStyle;
-(BOOL)ignoringData;
-(void)reflowItemViews:(BOOL)views suppressCenterAnimation:(BOOL)animation;
-(void)setStatusBarData:(id)data actions:(int)actions animated:(BOOL)animated;
-(void)startIgnoringData;
-(void)stopIgnoringData:(BOOL)data;
@end

