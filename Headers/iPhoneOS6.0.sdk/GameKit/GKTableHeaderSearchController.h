/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "UISearchBarDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UISearchDisplayDelegate.h"
#import "GameKit-Structs.h"

@class GKTableViewControllerV2, UISearchDisplayController, UISearchBar, NSOrderedSet, GKTableView;

@interface GKTableHeaderSearchController : XXUnknownSuperclass <UISearchBarDelegate, UISearchDisplayDelegate> {
@private
	GKTableView* _tableView;
	GKTableViewControllerV2* _tableController;
	UISearchDisplayController* _searchController;
	UISearchBar* _searchBar;
	NSOrderedSet* _searchTableSections;
	BOOL _searchBarHidden;
}
@property(retain, nonatomic) UISearchBar* searchBar;	// @synthesize=_searchBar
@property(assign, nonatomic) BOOL searchBarHidden;	// @synthesize=_searchBarHidden
@property(retain, nonatomic) UISearchDisplayController* searchDisplayController;	// @synthesize=_searchController
@property(retain, nonatomic) NSOrderedSet* searchTableSections;	// @synthesize=_searchTableSections
@property(assign, nonatomic) GKTableViewControllerV2* tableController;	// @synthesize=_tableController
@property(readonly, assign, nonatomic) GKTableView* tableView;	// @synthesize=_tableView
+(id)playerNamePredicateForSearchText:(id)searchText;
+(id)searchControllerForTableView:(id)tableView withController:(id)controller;
-(Class)_resultsTableViewClass;
-(void)cancelSearchAndDismiss;
-(void)dealloc;
-(void)didTouchOverlayView;
-(BOOL)isSearchActive;
// declared property getter: -(id)searchBar;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarCancelButtonClicked:(id)clicked;
// declared property getter: -(BOOL)searchBarHidden;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(void)searchBarTextDidEndEditing:(id)searchBarText;
// declared property getter: -(id)searchDisplayController;
-(void)searchDisplayController:(id)controller didHideSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller didShowSearchResultsTableView:(id)view;
// declared property getter: -(id)searchTableSections;
// declared property setter: -(void)setSearchBar:(id)bar;
// declared property setter: -(void)setSearchBarHidden:(BOOL)hidden;
// declared property setter: -(void)setSearchDisplayController:(id)controller;
// declared property setter: -(void)setSearchTableSections:(id)sections;
// declared property setter: -(void)setTableController:(id)controller;
-(void)setTableView:(id)view tableController:(id)controller;
// declared property getter: -(id)tableController;
// declared property getter: -(id)tableView;
@end

