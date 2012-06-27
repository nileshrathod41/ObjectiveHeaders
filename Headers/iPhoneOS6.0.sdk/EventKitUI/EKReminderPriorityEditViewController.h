/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "EventKitUI-Structs.h"
#import "EKEditItemViewController.h"

@class UITableView;

@interface EKReminderPriorityEditViewController : EKEditItemViewController <UITableViewDelegate, UITableViewDataSource> {
@private
	unsigned _priority;
	UITableView* _tableView;
}
@property(assign, nonatomic) unsigned priority;	// @synthesize=_priority
-(id)initWithFrame:(CGRect)frame styleProvider:(id)provider;
-(void)dealloc;
-(void)loadView;
// declared property getter: -(unsigned)priority;
// declared property setter: -(void)setPriority:(unsigned)priority;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)viewDidUnload;
@end

