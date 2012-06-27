/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "NSObject.h"


@protocol UITableViewDataSource <NSObject>
@optional
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)sectionIndexTitlesForTableView:(id)tableView;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;
@required
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
@optional
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
@required
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
@optional
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
@end

