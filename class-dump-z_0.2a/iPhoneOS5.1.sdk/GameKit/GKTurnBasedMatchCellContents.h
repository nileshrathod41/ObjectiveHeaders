/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKPlayerCellContentView.h"

@class NSMutableDictionary, GKTurnBasedMatch;

@interface GKTurnBasedMatchCellContents : GKPlayerCellContentView {
@private
	GKTurnBasedMatch* _match;
	NSMutableDictionary* _players;
	int _sectionStyle;
}
@property(retain, nonatomic) GKTurnBasedMatch* match;	// @synthesize=_match
@property(retain, nonatomic) NSMutableDictionary* players;	// @synthesize=_players
@property(assign, nonatomic) int sectionStyle;	// @synthesize=_sectionStyle
+(id)turnBasedMatchCellContentWithTheme:(id)theme;
-(void)dealloc;
// declared property getter: -(id)match;
// declared property getter: -(id)players;
-(void)prepareForReuse;
// declared property getter: -(int)sectionStyle;
// declared property setter: -(void)setMatch:(id)match;
// declared property setter: -(void)setPlayers:(id)players;
// declared property setter: -(void)setSectionStyle:(int)style;
-(void)updateLines;
@end

