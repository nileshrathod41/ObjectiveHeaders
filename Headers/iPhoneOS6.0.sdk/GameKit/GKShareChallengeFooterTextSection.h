/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKTableSection.h"

@class UILabel;

@interface GKShareChallengeFooterTextSection : GKTableSection {
@private
	UILabel* _footerLabel;
}
@property(retain, nonatomic) UILabel* footerLabel;	// @synthesize=_footerLabel
-(id)init;
-(int)columnCountInTableView:(id)tableView;
-(void)dealloc;
// declared property getter: -(id)footerLabel;
-(float)heightForHeaderInTableView:(id)tableView;
-(int)rowCountInTableView:(id)tableView;
// declared property setter: -(void)setFooterLabel:(id)label;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view prepareContents:(id)contents forCell:(id)cell atIndexPath:(id)indexPath;
-(id)tableView:(id)view reuseIdentifierForRow:(int)row;
@end

