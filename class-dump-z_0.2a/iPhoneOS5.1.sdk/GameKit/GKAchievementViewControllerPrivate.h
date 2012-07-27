/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKTableViewControllerV2.h"

@class GKTableViewCell, NSMutableArray, NSArray, GKAchievementSectionDataSource, GKGameRecord;

@interface GKAchievementViewControllerPrivate : GKTableViewControllerV2 {
	NSMutableArray* _achievements;
	XXStruct_CXv6bA _flags;
@private
	GKGameRecord* _gameRecord;
	GKTableViewCell* _detailHeaderCell;
	BOOL _showRatingControl;
	GKAchievementSectionDataSource* _achievementViewSection;
}
@property(retain, nonatomic) GKAchievementSectionDataSource* achievementViewSection;	// @synthesize=_achievementViewSection
@property(retain, nonatomic) NSArray* achievements;	// @synthesize=_achievements
@property(retain, nonatomic) GKTableViewCell* detailHeaderCell;	// @synthesize=_detailHeaderCell
@property(retain, nonatomic) GKGameRecord* gameRecord;	// @synthesize=_gameRecord
@property(assign, nonatomic, getter=isPlayButtonVisible) BOOL playButtonVisible;
@property(assign, nonatomic) BOOL showRatingControl;	// @synthesize=_showRatingControl
-(id)initWithGameRecord:(id)gameRecord;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(id)completionHandlerAndError;
// declared property getter: -(id)achievementViewSection;
// declared property getter: -(id)achievements;
-(void)dealloc;
// declared property getter: -(id)detailHeaderCell;
// declared property getter: -(id)gameRecord;
// declared property getter: -(BOOL)isPlayButtonVisible;
-(void)loadView;
-(void)localPlayerDidAuthenticate:(id)localPlayer;
-(float)marginForTableView:(id)tableView;
-(void)playTapped;
-(void)reloadView;
// declared property setter: -(void)setAchievementViewSection:(id)section;
// declared property setter: -(void)setAchievements:(id)achievements;
// declared property setter: -(void)setDetailHeaderCell:(id)cell;
// declared property setter: -(void)setGameRecord:(id)record;
// declared property setter: -(void)setPlayButtonVisible:(BOOL)visible;
// declared property setter: -(void)setShowRatingControl:(BOOL)control;
-(void)setupSectionDataSource:(id)source;
// declared property getter: -(BOOL)showRatingControl;
-(id)title;
-(id)tokenImageForAchievement:(id)achievement withCompletionHandler:(id)completionHandler;
-(void)updateStatusWithError:(id)error;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

