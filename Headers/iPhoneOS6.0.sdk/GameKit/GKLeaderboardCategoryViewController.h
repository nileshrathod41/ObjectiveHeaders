/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKTableViewControllerV2.h"

@class GKCategoryListSection, GKCategoryListSectionDataSource, GKLeaderboardCategory, NSArray, GKGame, GKLeaderboardViewController, NSString, GKPlayer;
@protocol GKLeaderboardCategoryPopoverDelegate, GKLeaderboardViewControllerDelegate;

@interface GKLeaderboardCategoryViewController : GKTableViewControllerV2 {
@private
	GKGame* _game;
	GKPlayer* _player;
	BOOL _hasAggregate;
	NSArray* _categories;
	GKLeaderboardCategory* _aggregateCategory;
	GKLeaderboardViewController* _publicLeaderboard;
	id<GKLeaderboardViewControllerDelegate> _leaderboardDelegate;
	GKLeaderboardViewController* _controllerForDelegate;
	BOOL _isInPopover;
	id<GKLeaderboardCategoryPopoverDelegate> _delegate;
	NSString* _selectedCategoryID;
	int _navbarStyle;
	GKCategoryListSection* _categorySection;
	GKCategoryListSectionDataSource* _categoryDataSource;
}
@property(retain, nonatomic) GKLeaderboardCategory* aggregateCategory;	// @synthesize=_aggregateCategory
@property(retain, nonatomic) NSArray* categories;	// @synthesize=_categories
@property(retain, nonatomic) GKCategoryListSectionDataSource* categoryDataSource;	// @synthesize=_categoryDataSource
@property(retain, nonatomic) GKCategoryListSection* categorySection;	// @synthesize=_categorySection
@property(assign, nonatomic) GKLeaderboardViewController* controllerForDelegate;	// @synthesize=_controllerForDelegate
@property(assign, nonatomic) id<GKLeaderboardCategoryPopoverDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) GKGame* game;	// @synthesize=_game
@property(assign, nonatomic) BOOL hasAggregate;	// @synthesize=_hasAggregate
@property(assign, nonatomic) BOOL isInPopover;	// @synthesize=_isInPopover
@property(assign, nonatomic) id<GKLeaderboardViewControllerDelegate> leaderboardDelegate;	// @synthesize=_leaderboardDelegate
@property(assign, nonatomic) int navbarStyle;	// @synthesize=_navbarStyle
@property(retain, nonatomic) GKPlayer* player;	// @synthesize=_player
@property(assign, nonatomic) GKLeaderboardViewController* publicLeaderboard;	// @synthesize=_publicLeaderboard
@property(copy, nonatomic) NSString* selectedCategoryID;	// @synthesize=_selectedCategoryID
-(id)initWithGame:(id)game player:(id)player;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(id)completionHandlerAndError;
// declared property getter: -(id)aggregateCategory;
// declared property getter: -(id)categories;
// declared property getter: -(id)categoryDataSource;
// declared property getter: -(id)categorySection;
// declared property getter: -(id)controllerForDelegate;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)didSelectCategory:(id)category;
-(void)donePressed:(id)pressed;
// declared property getter: -(id)game;
// declared property getter: -(BOOL)hasAggregate;
// declared property getter: -(BOOL)isInPopover;
// declared property getter: -(id)leaderboardDelegate;
// declared property getter: -(int)navbarStyle;
-(void)playTapped;
// declared property getter: -(id)player;
// declared property getter: -(id)publicLeaderboard;
// declared property getter: -(id)selectedCategoryID;
// declared property setter: -(void)setAggregateCategory:(id)category;
// declared property setter: -(void)setCategories:(id)categories;
// declared property setter: -(void)setCategoryDataSource:(id)source;
// declared property setter: -(void)setCategorySection:(id)section;
// declared property setter: -(void)setControllerForDelegate:(id)delegate;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setGame:(id)game;
// declared property setter: -(void)setHasAggregate:(BOOL)aggregate;
// declared property setter: -(void)setIsInPopover:(BOOL)popover;
// declared property setter: -(void)setLeaderboardDelegate:(id)delegate;
// declared property setter: -(void)setNavbarStyle:(int)style;
// declared property setter: -(void)setPlayer:(id)player;
// declared property setter: -(void)setPublicLeaderboard:(id)leaderboard;
// declared property setter: -(void)setSelectedCategoryID:(id)anId;
-(void)updateNavbarButtons;
-(void)updateSelection;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)view;
@end

