/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class _UITableCellTransientData;

@interface UITableCell : UIView {
@private
	_UITableCellTransientData* _transientData;
	float _rightMargin;
	struct {
		unsigned dontShowSelection : 1;
		unsigned showDisclosure : 1;
		unsigned showTopSeparator : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned hideDisclosure : 1;
		unsigned isBeingDeleted : 1;
		unsigned disclosureClickable : 1;
		unsigned selectionFadeFraction : 11;
		unsigned disclosureStyle : 1;
		unsigned showingRemoveControl : 1;
		unsigned alignment : 3;
		unsigned showDisclosureWhenReordering : 1;
		unsigned fadeDisclosure : 1;
		unsigned reserved : 2;
	} _tableCellFlags;
	UIView* _disclosureView;
}
-(id)_createDisclosureView;
-(void)_deselectWithFlashCount:(int)flashCount duration:(double)duration;
-(id)_disclosureView;
-(void)_finishedFadingGrabber:(id)grabber finished:(BOOL)finished;
-(void)_grabberBeganReorder:(id)reorder;
-(void)_grabberDragged:(id)dragged yDelta:(float)delta;
-(void)_grabberReleased:(id)released;
-(id)_grabberView;
-(BOOL)_isReordering;
-(void)_layoutSubviewsAnimated:(BOOL)animated;
-(void)_releaseGrabber;
-(void)_releaseRemoveControl;
-(void)_setDisclosureHidden:(BOOL)hidden;
-(void)_setDrawsTopSeparator:(BOOL)separator;
-(void)_setGrabberHidden:(BOOL)hidden;
-(void)_setRemoveCharge:(float)charge;
-(void)_setRightMargin:(float)margin;
-(void)_setSelectionFadeFraction:(float)fraction;
-(void)_setShowIndentSpacer:(BOOL)spacer animated:(BOOL)animated;
-(BOOL)_shouldTryPromoteDescendantToFirstResponder;
-(void)_showDeleteOrInsertion:(BOOL)insertion withDisclosure:(BOOL)disclosure animated:(BOOL)animated isDelete:(BOOL)aDelete andRemoveConfirmation:(BOOL)confirmation;
-(void)_uiRemoveControlMinusButtonHideAnimationDone:(id)done;
-(void)_willBeDeleted;
-(BOOL)cancelMouseTracking;
-(BOOL)cancelTouchTracking;
-(CGRect)contentBounds;
-(id)createInsertControl;
-(id)createRemoveControl;
-(void)dealloc;
-(id)disclosureImage;
-(id)disclosurePressedImage;
-(float)disclosureRightMargin;
-(int)disclosureStyle;
-(id)disclosureView;
-(void)drawBackgroundInRect:(CGRect)rect withFade:(float)fade;
-(void)drawContentInRect:(CGRect)rect selected:(BOOL)selected;
-(void)drawRect:(CGRect)rect;
-(void)drawSeparatorInRect:(CGRect)rect;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(void)insertControl:(id)control shouldInsertWithTarget:(id)target;
-(BOOL)isAtLeastHalfSelected;
-(BOOL)isRemoveControlVisible;
-(BOOL)isReorderingEnabled;
-(BOOL)isSelected;
-(void)layoutSubviews;
-(float)removeButtonAnimationDuration;
-(id)removeControl;
-(void)removeControl:(id)control didRemoveTarget:(id)target;
-(BOOL)removeControl:(id)control shouldRemoveTarget:(id)target;
-(void)removeControl:(id)control willRemoveTarget:(id)target;
-(void)removeControlWillHideRemoveConfirmation:(id)removeControl;
-(void)removeControlWillShowRemoveConfirmation:(id)removeControl;
-(void)removeFromSuperview;
-(float)selectionPercent;
-(int)separatorStyle;
-(void)setAlpha:(float)alpha;
-(void)setDisclosureClickable:(BOOL)clickable;
-(void)setDisclosureStyle:(int)style;
-(void)setDisclosureStyleNoUpdate:(int)update;
-(void)setDisclosureView:(id)view;
-(void)setEnableReordering:(BOOL)reordering animated:(BOOL)animated;
-(void)setSelected:(BOOL)selected;
-(void)setSelected:(BOOL)selected withFade:(BOOL)fade;
-(void)setSelectionStyle:(int)style;
-(void)setSeparatorStyle:(int)style;
-(void)setSeparatorStyleOnly:(int)only;
-(void)setShowDisclosure:(BOOL)disclosure;
-(void)setShowDisclosure:(BOOL)disclosure animated:(BOOL)animated;
-(void)setShowDisclosureWhenReordering:(BOOL)reordering;
-(void)setShowSelection:(BOOL)selection;
-(void)setShowSelectionNoRedisplay:(BOOL)redisplay;
-(BOOL)showDisclosure;
-(BOOL)showDisclosureWhenReordering;
-(BOOL)showSelection;
-(void)updateHighlightColors;
@end
