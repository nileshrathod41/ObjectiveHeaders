/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GKMatchPlayersDataRequest;

@interface GKMatchmaker : XXUnknownSuperclass {
@private
	GKMatchPlayersDataRequest* _matchPlayersDataRequest;
	id _inviteHandler;
}
@property(copy, nonatomic) id inviteHandler;	// @synthesize=_inviteHandler
@property(retain, nonatomic) GKMatchPlayersDataRequest* matchPlayersDataRequest;	// @synthesize=_matchPlayersDataRequest
+(id)sharedMatchmaker;
-(id)init;
-(void)addPlayersForHostedMatchRequest:(id)hostedMatchRequest existingPlayerIDs:(id)ids completionHandler:(id)handler;
-(void)addPlayersToInviteWithMatch:(id)match matchRequest:(id)request completionHandler:(id)handler;
-(void)addPlayersToMatch:(id)match matchRequest:(id)request completionHandler:(id)handler;
-(void)cancel;
-(void)dealloc;
-(void)findMatchForRequest:(id)request withCompletionHandler:(id)completionHandler;
-(void)findPlayersForHostedMatchRequest:(id)hostedMatchRequest withCompletionHandler:(id)completionHandler;
// declared property getter: -(id)inviteHandler;
-(BOOL)isMatchingPlayers;
-(void)loadConnectivitySettingsWithCompletionHandler:(id)completionHandler;
-(void)localPlayerAcceptedGameInvite:(id)invite;
-(void)lookForInvite;
// declared property getter: -(id)matchPlayersDataRequest;
-(void)matchWithRequest:(id)request currentMatch:(id)match currentPlayerIDs:(id)ids combo:(BOOL)combo serverHosted:(BOOL)hosted completionHandler:(id)handler;
-(void)queryActivityWithCompletionHandler:(id)completionHandler;
-(void)queryPlayerGroupActivity:(unsigned)activity withCompletionHandler:(id)completionHandler;
-(void)setConnectivitySettings:(id)settings;
// declared property setter: -(void)setInviteHandler:(id)handler;
// declared property setter: -(void)setMatchPlayersDataRequest:(id)request;
@end

