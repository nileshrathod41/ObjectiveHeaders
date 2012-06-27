/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewController.h"
#import "UIKit-Structs.h"

@class UIPrintingMessageView, NSArray;

__attribute__((visibility("hidden")))
@interface UIPrintStatusJobsViewController : UITableViewController {
@private
	NSArray* _jobs;
	BOOL _autoPush;
	UIPrintingMessageView* _noJobsView;
}
-(id)init;
-(CGSize)contentSizeForViewInPopover;
-(void)dealloc;
-(void)handleJobListDidChange;
-(void)loadView;
-(void)pushJob:(id)job animated:(BOOL)animated;
-(void)pushSingleJobAnimated:(BOOL)animated;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)updateForJobCountChange;
-(void)updateJobInfo:(id)info;
-(void)updateTableViewCell:(id)cell withJob:(id)job;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(id)visibleJobs;
-(void)willReappear;
@end

