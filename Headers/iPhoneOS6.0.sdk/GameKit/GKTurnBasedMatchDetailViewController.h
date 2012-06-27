/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKTableViewControllerV2.h"

@class GKSectionArrayDataSource, NSMutableDictionary, GKTurnBasedParticipant, NSIndexPath, GKTurnBasedMatch;
@protocol GKTurnBasedMatchDetailViewControllerDelegate;

@interface GKTurnBasedMatchDetailViewController : GKTableViewControllerV2 {
@private
	id<GKTurnBasedMatchDetailViewControllerDelegate> _delegate;
	GKTurnBasedMatch* _match;
	NSMutableDictionary* _players;
	GKSectionArrayDataSource* _matchDetailDataSource;
	int _matchStyle;
	GKTurnBasedParticipant* _showcaseParticipant;
	NSIndexPath* _parentIndexPath;
}
@property(retain, nonatomic) id<GKTurnBasedMatchDetailViewControllerDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) GKTurnBasedMatch* match;	// @synthesize=_match
@property(retain, nonatomic) GKSectionArrayDataSource* matchDetailDataSource;	// @synthesize=_matchDetailDataSource
@property(assign, nonatomic) int matchStyle;	// @synthesize=_matchStyle
@property(retain, nonatomic) NSIndexPath* parentIndexPath;	// @synthesize=_parentIndexPath
@property(retain, nonatomic) NSMutableDictionary* players;	// @synthesize=_players
@property(retain, nonatomic) GKTurnBasedParticipant* showcaseParticipant;	// @synthesize=_showcaseParticipant
-(id)init;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(id)completionHandlerAndError;
-(void)acceptInvitation;
-(id)activeTitle;
-(id)buttonSectionWithTitle:(id)title action:(SEL)action;
-(void)chooseMatch;
-(void)dealloc;
-(void)declineInvitation;
// declared property getter: -(id)delegate;
-(id)finishedTitle;
-(id)invitationTitle;
// declared property getter: -(id)match;
// declared property getter: -(id)matchDetailDataSource;
// declared property getter: -(int)matchStyle;
// declared property getter: -(id)parentIndexPath;
// declared property getter: -(id)players;
-(void)prepareDataSource;
-(void)quitMatch;
-(void)removeMatch;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setMatch:(id)match;
// declared property setter: -(void)setMatchDetailDataSource:(id)source;
// declared property setter: -(void)setMatchStyle:(int)style;
// declared property setter: -(void)setParentIndexPath:(id)path;
// declared property setter: -(void)setPlayers:(id)players;
// declared property setter: -(void)setShowcaseParticipant:(id)participant;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
// declared property getter: -(id)showcaseParticipant;
@end

