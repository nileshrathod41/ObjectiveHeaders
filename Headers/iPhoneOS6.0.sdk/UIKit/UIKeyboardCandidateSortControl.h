/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UISegmentedControl;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateSortControl : UIView {
@private
	UISegmentedControl* _segmentedControl;
}
@property(readonly, assign) UISegmentedControl* segmentedControl;	// @synthesize=_segmentedControl
-(id)initWithFrame:(CGRect)frame;
-(void)addSegmentedControlWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)layoutSubviews;
// declared property getter: -(id)segmentedControl;
-(void)selectNextSegment;
-(void)selectPreviousSegment;
-(void)setSortControlTitles:(id)titles;
@end

