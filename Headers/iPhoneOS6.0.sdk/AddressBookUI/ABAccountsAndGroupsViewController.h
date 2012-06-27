/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UITableViewDelegate.h"
#import "AddressBookUI-Structs.h"
#import "ABAbstractViewController.h"

@class UITableView, ABPeoplePickerNavigationController, ABAccountsAndGroupDataSource;

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate> {
@private
	ABAccountsAndGroupDataSource* _dataSource;
	BOOL _needsReload;
	BOOL _tableViewNeedsReloadAfterResume;
	BOOL _showsRefreshButton;
	ABPeoplePickerNavigationController* _peoplePickerNavigationController;
}
@property(readonly, assign, nonatomic) ABAccountsAndGroupDataSource* dataSource;	// @synthesize=_dataSource
@property(assign, nonatomic) BOOL hidesGlobalGroupWrapper;
@property(assign, nonatomic) BOOL hidesSearchableSources;
@property(assign, nonatomic) ABPeoplePickerNavigationController* peoplePickerNavigationController;	// @synthesize=_peoplePickerNavigationController
@property(readonly, assign, nonatomic) UITableView* tableView;
-(id)initWithModel:(id)model;
-(void)_applyAccessibilityFontChanges;
-(void)_applyStylesToTableView:(id)tableView;
-(void)_updateDisplayedContactsFilterFromSelection;
-(int)abViewControllerType;
-(void)accessibilityLargeTextDidChange;
-(id)allGroupWrapperIndexPaths;
-(void)applicationDidResume;
// declared property getter: -(id)dataSource;
-(void)dealloc;
-(void)done:(id)done;
// declared property getter: -(BOOL)hidesGlobalGroupWrapper;
// declared property getter: -(BOOL)hidesSearchableSources;
-(void)loadView;
-(id)model;
-(void)modelDatabaseChange:(id)change;
// declared property getter: -(id)peoplePickerNavigationController;
-(void)refreshEverythingNow;
-(void)reloadData;
// declared property setter: -(void)setHidesGlobalGroupWrapper:(BOOL)wrapper;
// declared property setter: -(void)setHidesSearchableSources:(BOOL)sources;
-(void)setModel:(id)model;
// declared property setter: -(void)setPeoplePickerNavigationController:(id)controller;
-(void)setStyleProvider:(id)provider;
// declared property getter: -(id)tableView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)updateRefreshButton;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end

