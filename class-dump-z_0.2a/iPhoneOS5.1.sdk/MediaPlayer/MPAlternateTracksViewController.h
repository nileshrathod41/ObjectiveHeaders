/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UITableViewDataSource.h"
#import "MPAbstractAlternateTracksViewController.h"
#import "UITableViewDelegate.h"

@class UITextLabel, UITableView, UIProgressIndicator, UIView, UINavigationBar;

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
	UIView* _backgroundView;
	UINavigationBar* _navigationBar;
	UITableView* _table;
	UIProgressIndicator* _progressIndicator;
	UITextLabel* _loadingLabel;
}
-(void)_cancelButtonAction:(id)action;
-(void)_doneButtonAction:(id)action;
-(void)_exitAnimated:(BOOL)animated;
-(void)_setCell:(id)cell isChecked:(BOOL)checked;
-(void)addLoadingUI;
-(void)dealloc;
-(void)didChangeToInterfaceOrientation:(int)interfaceOrientation;
-(void)loadView;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)reloadData;
-(void)removeLoadingUI;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)willChangeToInterfaceOrientation:(int)interfaceOrientation;
@end

