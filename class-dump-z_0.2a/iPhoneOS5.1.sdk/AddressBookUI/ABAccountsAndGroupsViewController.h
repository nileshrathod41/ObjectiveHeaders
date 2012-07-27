/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABAccountsAndGroupsViewController.h"
#import "AddressBookUI-Structs.h"
#import "UITableViewDelegate.h"
#import "ABAbstractViewController.h"

@class UITableView, ABAccountsAndGroupDataSource;

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate> {
@private
	ABAccountsAndGroupDataSource* _dataSource;
	BOOL _needsReload;
	BOOL _tableViewNeedsReloadAfterResume;
	BOOL _showsRefreshButton;
	BOOL _reselectLastSelectedCell;
}
@property(readonly, assign, nonatomic) ABAccountsAndGroupDataSource* dataSource;	// @synthesize=_dataSource
-(id)initWithModel:(id)model;
-(void)_applyStylesToTableView:(id)tableView;
-(int)abViewControllerType;
-(void)applicationDidResume;
-(void)cancel:(id)cancel;
// declared property getter: -(id)dataSource;
-(void)dealloc;
-(void)loadView;
-(id)model;
-(void)modelDatabaseChange:(id)change;
-(void)reselectLastSelectedCellIfNeeded;
-(void)setModel:(id)model;
-(void)setStyleProvider:(id)provider;
-(void)showMembersOfGroup:(void*)group animate:(BOOL)animate;
-(void)showMembersOfGroupWrapper:(id)groupWrapper animate:(BOOL)animate;
-(void)showMembersOfGroupWrapper:(id)groupWrapper animate:(BOOL)animate loadState:(BOOL)state;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)updateNavigationButtons;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end

@interface ABAccountsAndGroupsViewController (Internal)
@property(assign, nonatomic) BOOL hidesGlobalGroupWrapper;
@property(assign, nonatomic) BOOL hidesSearchableSources;
@property(readonly, assign, nonatomic) UITableView* tableView;
-(void)_applyAccessibilityFontChanges;
-(void)_showMembersWithModel:(id)model animate:(BOOL)animate loadState:(BOOL)state;
-(void)accessibilityLargeTextDidChange;
-(id)copyMembersViewControllerWithModel:(id)model;
-(id)dataSource;
// declared property getter: -(BOOL)hidesGlobalGroupWrapper;
// declared property getter: -(BOOL)hidesSearchableSources;
-(BOOL)preservesSelection;
-(void)refreshEverythingNow;
-(void)reloadData;
// declared property setter: -(void)setHidesGlobalGroupWrapper:(BOOL)wrapper;
// declared property setter: -(void)setHidesSearchableSources:(BOOL)sources;
-(BOOL)shouldShowGroups;
// declared property getter: -(id)tableView;
-(void)updateRefreshButton;
@end

