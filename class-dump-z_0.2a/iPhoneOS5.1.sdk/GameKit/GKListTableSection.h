/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GKTableSection.h"


@interface GKListTableSection : XXUnknownSuperclass <GKTableSection> {
@private
	SEL _action;
}
@property(assign, nonatomic) SEL action;	// @synthesize=_action
@property(assign, nonatomic, getter=isLoading) BOOL loading;
// declared property getter: -(SEL)action;
-(int)columnCountInTableView:(id)tableView;
-(float)sectionHeaderHeightInTableView:(id)tableView;
-(id)sectionHeaderTitleInTableView:(id)tableView;
-(id)sectionHeaderViewInTableView:(id)tableView;
-(int)sectionItemCountInTableView:(id)tableView;
-(id)sectionReuseIdentifierInTableView:(id)tableView;
-(int)sectionRowCountInTableView:(id)tableView;
// declared property setter: -(void)setAction:(SEL)action;
-(void)tableView:(id)view didSelectIndexPath:(id)path;
-(void)tableView:(id)view didSelectItem:(id)item;
-(id)tableView:(id)view itemAtIndex:(int)index;
-(int)tableView:(id)view numberOfColumnsForRow:(int)row;
-(id)tableView:(id)view objectForIndexPath:(id)indexPath;
-(id)tableView:(id)view prepareContents:(id)contents forCell:(id)cell atIndexPath:(id)indexPath;
-(id)tableView:(id)view prepareContents:(id)contents forItem:(id)item;
-(id)tableView:(id)view reuseIdentifierForRow:(int)row;
-(id)tableView:(id)view willSelectIndexPath:(id)path;
@end

