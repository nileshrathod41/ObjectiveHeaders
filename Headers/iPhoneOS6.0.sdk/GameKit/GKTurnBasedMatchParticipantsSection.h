/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKTableSection.h"

@class NSMutableDictionary, GKTurnBasedMatch;

@interface GKTurnBasedMatchParticipantsSection : GKTableSection {
@private
	GKTurnBasedMatch* _match;
	NSMutableDictionary* _players;
}
@property(retain, nonatomic) GKTurnBasedMatch* match;	// @synthesize=_match
@property(retain, nonatomic) NSMutableDictionary* players;	// @synthesize=_players
-(void)dealloc;
-(id)description;
-(float)heightForHeaderInTableView:(id)tableView;
// declared property getter: -(id)match;
// declared property getter: -(id)players;
// declared property setter: -(void)setMatch:(id)match;
// declared property setter: -(void)setPlayers:(id)players;
-(void)tableView:(id)view loadAdditionalDataForItems:(id)items thenUpdateView:(id)view3;
-(id)tableView:(id)view prepareContents:(id)contents forItem:(id)item;
-(id)tableView:(id)view reuseIdentifierForRow:(int)row;
-(id)titleForHeaderInTableView:(id)tableView;
@end

