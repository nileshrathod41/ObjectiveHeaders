/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class GKPlayer, GKGame;

@interface GKGetLastScoreTimeScopeRequest : GKDataRequest {
@private
	GKGame* _game;
	GKPlayer* _player;
	int _timeScope;
}
@property(retain, nonatomic) GKGame* game;	// @synthesize=_game
@property(retain, nonatomic) GKPlayer* player;	// @synthesize=_player
@property(readonly, assign, nonatomic) int timeScope;	// @synthesize=_timeScope
-(void)dealloc;
// declared property getter: -(id)game;
-(void)handleResponseFromServer:(id)server;
-(id)key;
// declared property getter: -(id)player;
-(id)request;
// declared property setter: -(void)setGame:(id)game;
// declared property setter: -(void)setPlayer:(id)player;
// declared property getter: -(int)timeScope;
@end

