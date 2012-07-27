/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKTableViewControllerV2.h"
#import "GKTurnBasedInviteViewControllerDelegate.h"
#import "GameKit-Structs.h"

@class GKTurnBasedMatchesDataSource, GKTurnBasedMatchmakerViewController, GKMatchRequest;
@protocol GKTurnBasedMatchmakerViewControllerDelegate;

@interface GKTurnBasedMatchesViewController : GKTableViewControllerV2 <GKTurnBasedInviteViewControllerDelegate> {
@private
	id<GKTurnBasedMatchmakerViewControllerDelegate> _delegate;
	GKTurnBasedMatchmakerViewController* _matchmakerViewController;
	GKTurnBasedMatchesDataSource* _matchesDataSource;
	BOOL _showExistingMatches;
	UIEdgeInsets _formSheetInsets;
	GKMatchRequest* _matchRequest;
	BOOL _showingExistingMatches;
	int _maxMatchesSeen;
}
@property(assign, nonatomic) id<GKTurnBasedMatchmakerViewControllerDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) UIEdgeInsets formSheetInsets;	// @synthesize=_formSheetInsets
@property(retain, nonatomic) GKMatchRequest* matchRequest;	// @synthesize=_matchRequest
@property(retain, nonatomic) GKTurnBasedMatchesDataSource* matchesDataSource;	// @synthesize=_matchesDataSource
@property(assign, nonatomic) GKTurnBasedMatchmakerViewController* matchmakerViewController;	// @synthesize=_matchmakerViewController
@property(assign, nonatomic) int maxMatchesSeen;	// @synthesize=_maxMatchesSeen
@property(assign, nonatomic) BOOL showExistingMatches;	// @synthesize=_showExistingMatches
@property(assign, nonatomic) BOOL showingExistingMatches;	// @synthesize=_showingExistingMatches
-(id)initWithMatchRequest:(id)matchRequest;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(id)completionHandlerAndError;
-(void)addPressed;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)authenticatedStatusChanged:(id)changed;
-(void)cancelButtonPressed;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(id)description;
-(void)didSelectMatch:(id)match;
// declared property getter: -(UIEdgeInsets)formSheetInsets;
-(void)loadView;
// declared property getter: -(id)matchRequest;
// declared property getter: -(id)matchesDataSource;
// declared property getter: -(id)matchmakerViewController;
// declared property getter: -(int)maxMatchesSeen;
-(void)prepareDataSource;
-(void)receivedTurnBasedNotification:(id)notification;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setFormSheetInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setMatchRequest:(id)request;
// declared property setter: -(void)setMatchesDataSource:(id)source;
// declared property setter: -(void)setMatchmakerViewController:(id)controller;
// declared property setter: -(void)setMaxMatchesSeen:(int)seen;
// declared property setter: -(void)setShowExistingMatches:(BOOL)matches;
// declared property setter: -(void)setShowingExistingMatches:(BOOL)matches;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
// declared property getter: -(BOOL)showExistingMatches;
-(void)showInvitationAlertForMatch:(id)match;
-(void)showInviteControllerAnimated:(BOOL)animated;
// declared property getter: -(BOOL)showingExistingMatches;
-(void)tableView:(id)view didDeleteMatch:(id)match withIndexPath:(id)indexPath fromSection:(id)section;
-(id)title;
-(void)turnBasedInviteViewController:(id)controller didCreateSession:(id)session;
-(void)turnBasedInviteViewController:(id)controller didFailWithError:(id)error;
-(void)turnBasedInviteViewControllerWasCancelled:(id)cancelled;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
@end
