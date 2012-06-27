/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKViewController.h"
#import "GameKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "GKTableViewControllerDelegate.h"

@class GKInviteButton, GKSectionArrayDataSource, UIPopoverController, UIView, NSObject, NSArray, GKTableView, GKMultiColumnTableViewCell, UIImageView, NSIndexPath;
@protocol GKTableViewCellContents, OS_dispatch_source;

@interface GKTableViewControllerV2 : GKViewController <UIGestureRecognizerDelegate, UIPopoverControllerDelegate, UITableViewDelegate, UITableViewDataSource, GKTableViewControllerDelegate> {
@private
	double _selectGestureStartTime;
	BOOL _isStoreDemoModeEnabled;
	unsigned _pendingReload : 1;
	unsigned _pendingAnimation : 1;
	int _loadDataReentryCount;
	int _tableViewStyle;
	BOOL _shouldDelayTableReloadForDeselectAnimation;
	BOOL _clearsSelectionOnViewWillAppear;
	GKTableView* _tableView;
	GKTableView* _portraitTableView;
	GKTableView* _landscapeTableView;
	UIView* _overlayTouchView;
	UIImageView* _bottomShadowView;
	BOOL _isInFormSheet;
	CGPoint _portraitContentOffset;
	CGPoint _landscapeContentOffset;
	float _columnSeparatorWidth;
	GKMultiColumnTableViewCell* _selectedCell;
	unsigned _selectedColumn;
	BOOL _scrollDisabledForConfirmation;
	GKSectionArrayDataSource* _sectionDataSource;
	UIView<GKTableViewCellContents>* _editingContentView;
	NSIndexPath* _detailPopoverIndexPath;
	UIPopoverController* _detailPopoverController;
	GKInviteButton* _confirmationButton;
	UIView* _confirmationClipView;
	int _sectionTransitionCount;
	int _lastKnownOrientation;
	UIEdgeInsets _tableInsets;
	NSArray* _indexPathsOfCellsToRefresh;
	NSObject<OS_dispatch_source>* _refreshCellTimer;
	BOOL _didSuspendRefreshCellTimer;
}
@property(retain, nonatomic) UIImageView* bottomShadowView;	// @synthesize=_bottomShadowView
@property(assign, nonatomic) BOOL clearsSelectionOnViewWillAppear;	// @synthesize=_clearsSelectionOnViewWillAppear
@property(assign, nonatomic) float columnSeparatorWidth;	// @synthesize=_columnSeparatorWidth
@property(retain, nonatomic) GKInviteButton* confirmationButton;	// @synthesize=_confirmationButton
@property(retain, nonatomic) UIView* confirmationClipView;	// @synthesize=_confirmationClipView
@property(retain, nonatomic) UIPopoverController* detailPopoverController;	// @synthesize=_detailPopoverController
@property(retain, nonatomic) NSIndexPath* detailPopoverIndexPath;	// @synthesize=_detailPopoverIndexPath
@property(assign, nonatomic) BOOL didSuspendRefreshCellTimer;	// @synthesize=_didSuspendRefreshCellTimer
@property(retain, nonatomic) UIView<GKTableViewCellContents>* editingContentView;	// @synthesize=_editingContentView
@property(retain, nonatomic) NSArray* indexPathsOfCellsToRefresh;	// @synthesize=_indexPathsOfCellsToRefresh
@property(assign, nonatomic) BOOL isInFormSheet;	// @synthesize=_isInFormSheet
@property(assign, nonatomic) CGPoint landscapeContentOffset;	// @synthesize=_landscapeContentOffset
@property(retain, nonatomic) GKTableView* landscapeTableView;	// @synthesize=_landscapeTableView
@property(assign, nonatomic) int lastKnownOrientation;	// @synthesize=_lastKnownOrientation
@property(retain, nonatomic) UIView* overlayTouchView;	// @synthesize=_overlayTouchView
@property(assign, nonatomic) CGPoint portraitContentOffset;	// @synthesize=_portraitContentOffset
@property(retain, nonatomic) GKTableView* portraitTableView;	// @synthesize=_portraitTableView
@property(assign, nonatomic) NSObject<OS_dispatch_source>* refreshCellTimer;	// @synthesize=_refreshCellTimer
@property(assign, nonatomic) BOOL scrollDisabledForConfirmation;	// @synthesize=_scrollDisabledForConfirmation
@property(retain, nonatomic) GKSectionArrayDataSource* sectionDataSource;	// @synthesize=_sectionDataSource
@property(assign, nonatomic) int sectionTransitionCount;	// @synthesize=_sectionTransitionCount
@property(retain, nonatomic) GKMultiColumnTableViewCell* selectedCell;	// @synthesize=_selectedCell
@property(assign, nonatomic) unsigned selectedColumn;	// @synthesize=_selectedColumn
@property(assign, nonatomic) BOOL shouldDelayTableReloadForDeselectAnimation;	// @synthesize=_shouldDelayTableReloadForDeselectAnimation
@property(assign, nonatomic) UIEdgeInsets tableInsets;	// @synthesize=_tableInsets
@property(retain, nonatomic) GKTableView* tableView;	// @synthesize=_tableView
@property(readonly, assign, nonatomic) int tableViewStyle;	// @synthesize=_tableViewStyle
+(id)_gkAllDescriptionsWithTableViewCells;
-(id)init;
-(id)initWithStyle:(int)style;
-(id)_description;
-(id)_descriptionWithChildren:(int)children;
-(id)_gkDescriptionWithChildren:(int)children;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(id)completionHandlerAndError;
-(void)_handleLoadDataNotifierForIndexPaths:(id)indexPaths expectedRefreshGeneration:(unsigned)generation;
-(id)_indexesOfDirtySections;
-(BOOL)_numberOfRowsIsValidForSection:(id)section;
-(BOOL)_numberOfRowsIsValidForSectionAtIndex:(int)index;
-(BOOL)_numberOfRowsIsValidForSections:(id)sections;
-(BOOL)_numberOfSectionsIsValid;
-(BOOL)_sectionUpdateNeededForDataSource:(id)dataSource;
-(id)addTouchCaptureOverlayViewWithTarget:(id)target action:(SEL)action;
-(void)animateViewsToOrientation:(int)orientation;
// declared property getter: -(id)bottomShadowView;
-(void)cancelSwipeToDeleteConfirmation;
// declared property getter: -(BOOL)clearsSelectionOnViewWillAppear;
-(int)columnCountForTableView:(id)tableView rowAtIndexPath:(id)indexPath;
// declared property getter: -(float)columnSeparatorWidth;
// declared property getter: -(id)confirmationButton;
// declared property getter: -(id)confirmationClipView;
-(id)contentsAtIndexPaths:(id)indexPaths inTableView:(id)tableView;
-(void)dataSource:(id)source didReloadSections:(id)sections;
-(void)dataSource:(id)source willReloadSections:(id)sections;
-(void)dealloc;
-(void)deleteConfirmationWasTouched:(id)touched;
// declared property getter: -(id)detailPopoverController;
// declared property getter: -(id)detailPopoverIndexPath;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)didShowMoreRowsForTableView:(id)tableView section:(int)section;
// declared property getter: -(BOOL)didSuspendRefreshCellTimer;
-(void)didUpdateSectionsInDataSource:(id)dataSource;
-(void)dismissPopoverAnimated:(BOOL)animated;
// declared property getter: -(id)editingContentView;
-(void)forceReloadOfSection:(id)section;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)handleHorizontalSwipeGesture:(id)gesture;
-(id)indexPathForItem:(id)item inTableView:(id)tableView;
-(id)indexPathsByStrippingColumn:(id)column;
// declared property getter: -(id)indexPathsOfCellsToRefresh;
// declared property getter: -(BOOL)isInFormSheet;
-(void)keyboardWillHideShow:(id)keyboard;
// declared property getter: -(CGPoint)landscapeContentOffset;
// declared property getter: -(id)landscapeTableView;
// declared property getter: -(int)lastKnownOrientation;
-(void)loadAdditionalDataForIndexPaths:(id)indexPaths;
-(void)loadAdditionalDataForVisibleContents;
-(void)loadView;
-(void)loadingDidCompleteWithContext:(unsigned long long)loading error:(id)error;
-(unsigned long long)loadingWillBegin;
-(void)localeDidChangeNotification:(id)locale;
-(void)nudgeContentSizeOfParentPopover:(CGSize)parentPopover;
-(int)numberOfSectionsInTableView:(id)tableView;
// declared property getter: -(id)overlayTouchView;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
// declared property getter: -(CGPoint)portraitContentOffset;
// declared property getter: -(id)portraitTableView;
-(void)prepareDataSource;
-(void)presentViewController:(id)controller inPopoverFromIndexPath:(id)indexPath animated:(BOOL)animated;
-(void)presentViewController:(id)controller inPopoverFromItem:(id)item animated:(BOOL)animated;
-(void)presentViewController:(id)controller inPopoverFromView:(id)view animated:(BOOL)animated;
-(CGRect)rectToKeepVisibleAboveKeyboardWithinView:(id)keepVisibleAboveKeyboardWithinView;
// declared property getter: -(id)refreshCellTimer;
-(void)refreshDataWithCompletionHandlerAndError:(id)completionHandlerAndError;
-(void)reloadView;
-(void)removeTouchCaptureOverlayView;
-(id)rootNavigationItem;
// declared property getter: -(BOOL)scrollDisabledForConfirmation;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(id)searchTitle;
// declared property getter: -(id)sectionDataSource;
// declared property getter: -(int)sectionTransitionCount;
-(void)selectColumnInCell:(id)cell;
// declared property getter: -(id)selectedCell;
// declared property getter: -(unsigned)selectedColumn;
// declared property setter: -(void)setBottomShadowView:(id)view;
// declared property setter: -(void)setClearsSelectionOnViewWillAppear:(BOOL)appear;
// declared property setter: -(void)setColumnSeparatorWidth:(float)width;
// declared property setter: -(void)setConfirmationButton:(id)button;
// declared property setter: -(void)setConfirmationClipView:(id)view;
// declared property setter: -(void)setDetailPopoverController:(id)controller;
// declared property setter: -(void)setDetailPopoverIndexPath:(id)path;
// declared property setter: -(void)setDidSuspendRefreshCellTimer:(BOOL)suspendRefreshCellTimer;
// declared property setter: -(void)setEditingContentView:(id)view;
// declared property setter: -(void)setIndexPathsOfCellsToRefresh:(id)refresh;
// declared property setter: -(void)setIsInFormSheet:(BOOL)formSheet;
// declared property setter: -(void)setLandscapeContentOffset:(CGPoint)offset;
// declared property setter: -(void)setLandscapeTableView:(id)view;
// declared property setter: -(void)setLastKnownOrientation:(int)orientation;
// declared property setter: -(void)setOverlayTouchView:(id)view;
// declared property setter: -(void)setPortraitContentOffset:(CGPoint)offset;
// declared property setter: -(void)setPortraitTableView:(id)view;
// declared property setter: -(void)setRefreshCellTimer:(id)timer;
// declared property setter: -(void)setScrollDisabledForConfirmation:(BOOL)confirmation;
// declared property setter: -(void)setSectionDataSource:(id)source;
// declared property setter: -(void)setSectionTransitionCount:(int)count;
// declared property setter: -(void)setSelectedCell:(id)cell;
// declared property setter: -(void)setSelectedColumn:(unsigned)column;
// declared property setter: -(void)setShouldDelayTableReloadForDeselectAnimation:(BOOL)delayTableReloadForDeselectAnimation;
-(void)setStatusViewVisible:(BOOL)visible;
// declared property setter: -(void)setTableInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setTableView:(id)view;
-(void)setupViewsWithOrientation:(int)orientation;
-(BOOL)shouldAdjustInsetsForKeyboard;
// declared property getter: -(BOOL)shouldDelayTableReloadForDeselectAnimation;
-(id)swipeConfirmationButtonForView:(id)view withTitle:(id)title;
// declared property getter: -(UIEdgeInsets)tableInsets;
// declared property getter: -(id)tableView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view indexPathWithColumnForCell:(id)cell withIndexPath:(id)indexPath atPoint:(CGPoint)point;
-(id)tableView:(id)view indexPathWithColumnForCell:(id)cell withIndexPath:(id)indexPath atPoint:(CGPoint)point extendEdgeColumnsToInfinity:(BOOL)infinity;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)tableView:(id)view prepareContentViewsForCell:(id)cell atIndexPath:(id)indexPath;
-(void)tableView:(id)view refreshCellAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
// declared property getter: -(int)tableViewStyle;
-(void)updateBottomShadowFrame;
-(void)updateFlexibleSpacesIfNeeded;
-(void)updateTableInsetsForKeyboardHeight:(float)keyboardHeight;
-(void)updateTableViewFrame:(id)frame;
-(BOOL)usesCrossfade;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(id)visibleContentViews;
-(id)visibleContentViewsForTableView:(id)tableView;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willUpdateSectionsInDataSource:(id)dataSource;
@end

