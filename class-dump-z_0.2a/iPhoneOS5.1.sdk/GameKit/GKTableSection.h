/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "NSObject.h"
#import "GKTopCapListTableSection.h"

@class NSArray, NSString;

@protocol GKTableSection <NSObject>
@optional
@property(assign, nonatomic, getter=isLoading) BOOL loading;
-(id)alternateSectionHeaderTitleInTableView:(id)tableView;
-(void)filterWithSearchText:(id)searchText;
// declared property getter: -(BOOL)isLoading;
-(void)refreshDataWithCompletionHandlerAndError:(id)completionHandlerAndError;
-(float)sectionFooterHeightInTableView:(id)tableView;
-(id)sectionFooterViewInTableView:(id)tableView;
-(float)sectionHeaderHeightInTableView:(id)tableView;
-(id)sectionHeaderTitleInTableView:(id)tableView;
-(id)sectionHeaderTitleSecondaryTextInTableView:(id)tableView;
-(id)sectionHeaderViewInTableView:(id)tableView;
@required
-(int)sectionRowCountInTableView:(id)tableView;
@optional
// declared property setter: -(void)setLoading:(BOOL)loading;
-(id)swipeDeleteConfirmTitleInTableView:(id)tableView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectIndexPath:(id)path;
-(void)tableView:(id)view didSwipeToDeleteRow:(id)deleteRow;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfColumnsForRow:(int)row;
-(id)tableView:(id)view objectForIndexPath:(id)indexPath;
@required
-(id)tableView:(id)view prepareContents:(id)contents forCell:(id)cell atIndexPath:(id)indexPath;
@optional
-(void)tableView:(id)view prepareExpensiveContentAtIndexPaths:(id)indexPaths withCompletionHandler:(id)completionHandler;
-(void)tableView:(id)view refreshCellAtIndexPath:(id)indexPath;
@required
-(id)tableView:(id)view reuseIdentifierForRow:(int)row;
@optional
-(void)tableView:(id)view willDrawCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectIndexPath:(id)path;
@end

@interface GKTableSection : GKTopCapListTableSection {
@private
	NSArray* _visibleItems;
	NSString* _title;
	NSString* _secondaryTitle;
	NSString* _abbreviatedTitle;
	BOOL _usesTopCapTitle;
	int _loadingState;
}
@property(retain, nonatomic) NSString* abbreviatedTitle;	// @synthesize=_abbreviatedTitle
@property(assign, nonatomic) int loadingState;	// @synthesize=_loadingState
@property(retain, nonatomic) NSString* secondaryTitle;	// @synthesize=_secondaryTitle
@property(retain, nonatomic) NSString* title;	// @synthesize=_title
@property(assign, nonatomic) BOOL usesTopCapTitle;	// @synthesize=_usesTopCapTitle
@property(retain, nonatomic) NSArray* visibleItems;	// @synthesize=_visibleItems
-(id)init;
// declared property getter: -(id)abbreviatedTitle;
-(id)currentSectionHeaderAbbreviatedTitleInTableView:(id)tableView;
-(id)currentSectionHeaderSecondaryTitleInTableView:(id)tableView;
-(id)currentSectionHeaderTitleInTableView:(id)tableView;
-(void)dealloc;
// declared property getter: -(int)loadingState;
// declared property getter: -(id)secondaryTitle;
-(float)sectionHeaderHeightInTableView:(id)tableView;
-(int)sectionHeaderRowCountInTableView:(id)tableView;
-(id)sectionHeaderTitleInTableView:(id)tableView;
-(id)sectionHeaderViewInTableView:(id)tableView;
// declared property setter: -(void)setAbbreviatedTitle:(id)title;
// declared property setter: -(void)setLoadingState:(int)state;
// declared property setter: -(void)setSecondaryTitle:(id)title;
// declared property setter: -(void)setTitle:(id)title;
// declared property setter: -(void)setUsesTopCapTitle:(BOOL)title;
// declared property setter: -(void)setVisibleItems:(id)items;
// declared property getter: -(id)title;
// declared property getter: -(BOOL)usesTopCapTitle;
// declared property getter: -(id)visibleItems;
@end

