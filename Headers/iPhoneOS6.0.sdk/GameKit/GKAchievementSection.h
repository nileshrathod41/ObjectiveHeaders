/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKTableSection.h"

@class GKBackgroundView, GKGameRecord, NSDictionary, NSOrderedSet, GKTableViewCell;

@interface GKAchievementSection : GKTableSection {
	GKGameRecord* _gameRecord;
	NSOrderedSet* _achievements;
	XXStruct_CXv6bA _flags;
@private
	GKTableViewCell* _detailHeaderCell;
	GKBackgroundView* _bgView;
	BOOL _isInFormSheet;
	BOOL _useLargeIcons;
	NSDictionary* _achievementDescriptionsLookup;
}
@property(retain, nonatomic) NSDictionary* achievementDescriptionsLookup;	// @synthesize=_achievementDescriptionsLookup
@property(readonly, assign, nonatomic) NSOrderedSet* achievements;
@property(retain, nonatomic) GKBackgroundView* bgView;	// @synthesize=_bgView
@property(retain, nonatomic) GKTableViewCell* detailHeaderCell;	// @synthesize=_detailHeaderCell
@property(retain, nonatomic) GKGameRecord* gameRecord;	// @synthesize=_gameRecord
@property(assign, nonatomic) BOOL isInFormSheet;	// @synthesize=_isInFormSheet
@property(assign, nonatomic) BOOL useLargeIcons;	// @synthesize=_useLargeIcons
// declared property getter: -(id)achievementDescriptionsLookup;
// declared property getter: -(id)achievements;
// declared property getter: -(id)bgView;
-(int)columnCountInTableView:(id)tableView;
-(void)dealloc;
// declared property getter: -(id)detailHeaderCell;
// declared property getter: -(id)gameRecord;
-(float)heightForHeaderInTableView:(id)tableView;
// declared property getter: -(BOOL)isInFormSheet;
-(id)progressImageForAchievement:(id)achievement isHighlighted:(BOOL)highlighted withCompletionHandler:(id)completionHandler;
-(void)refreshDataWithCompletionHandlerAndError:(id)completionHandlerAndError;
-(id)secondaryTitleForHeaderInTableView:(id)tableView;
-(int)sectionItemCountInTableView:(id)tableView;
-(id)sectionReuseIdentifierInTableView:(id)tableView;
// declared property setter: -(void)setAchievementDescriptionsLookup:(id)lookup;
// declared property setter: -(void)setBgView:(id)view;
// declared property setter: -(void)setDetailHeaderCell:(id)cell;
// declared property setter: -(void)setGameRecord:(id)record;
// declared property setter: -(void)setIsInFormSheet:(BOOL)formSheet;
// declared property setter: -(void)setUseLargeIcons:(BOOL)icons;
-(float)tableView:(id)view heightForContentRow:(int)contentRow;
-(id)tableView:(id)view itemAtIndex:(int)index;
-(id)tableView:(id)view itemAtIndex:(int)index column:(int)column;
-(id)tableView:(id)view prepareContents:(id)contents forItem:(id)item;
-(BOOL)tableView:(id)view shouldSelectItem:(id)item;
-(void)tableView:(id)view updateStatusViewAfterLoading:(id)loading withError:(id)error;
-(void)tableView:(id)view updateStatusViewBeforeLoading:(id)loading;
-(void)tableView:(id)view willDrawCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)titleForHeaderInTableView:(id)tableView;
-(id)tokenImageForAchievement:(id)achievement withCompletionHandler:(id)completionHandler;
-(void)updateStatusWithError:(id)error;
// declared property getter: -(BOOL)useLargeIcons;
@end

