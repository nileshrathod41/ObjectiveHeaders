/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GKTableSection.h"


@interface GKEmptyTableSection : XXUnknownSuperclass <GKTableSection> {
}
@property(assign, nonatomic, getter=isLoading) BOOL loading;
+(id)sharedEmptySection;
-(float)sectionFooterHeightInTableView:(id)tableView;
-(float)sectionHeaderHeightInTableView:(id)tableView;
-(int)sectionRowCountInTableView:(id)tableView;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view prepareContents:(id)contents forCell:(id)cell atIndexPath:(id)indexPath;
-(id)tableView:(id)view reuseIdentifierForRow:(int)row;
@end

