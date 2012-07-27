/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKSessionDelegate.h"
#import "GKSessionPrivateDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, GKSession, NSMutableDictionary, NSMutableArray, GKConnection, NSData;
@protocol GKMatchDelegate;

@interface GKMatch : XXUnknownSuperclass <GKSessionDelegate, GKSessionPrivateDelegate> {
@private
	id<GKMatchDelegate> _delegate;
	GKSession* _session;
	GKConnection* _connection;
	unsigned _expectedPlayerCount;
	NSMutableDictionary* _playerEventQueues;
	NSMutableArray* _reinvitedPlayers;
	NSData* _selfBlob;
	unsigned char _version;
	id<GKMatchDelegate> _inviteDelegate;
	unsigned _packetSequenceNumber;
	NSMutableDictionary* _playerPushTokens;
	NSMutableArray* _opponentIDs;
}
@property(retain, nonatomic) GKConnection* connection;	// @synthesize=_connection
@property(assign, nonatomic) id<GKMatchDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) unsigned expectedPlayerCount;	// @synthesize=_expectedPlayerCount
@property(assign, nonatomic) id<GKMatchDelegate> inviteDelegate;	// @synthesize=_inviteDelegate
@property(retain, nonatomic) NSMutableArray* opponentIDs;	// @synthesize=_opponentIDs
@property(assign, nonatomic) unsigned packetSequenceNumber;	// @synthesize=_packetSequenceNumber
@property(retain, nonatomic) NSMutableDictionary* playerEventQueues;	// @synthesize=_playerEventQueues
@property(readonly, assign, nonatomic) NSArray* playerIDs;
@property(retain, nonatomic) NSMutableDictionary* playerPushTokens;	// @synthesize=_playerPushTokens
@property(retain, nonatomic) NSMutableArray* reinvitedPlayers;	// @synthesize=_reinvitedPlayers
@property(retain, nonatomic) NSData* selfBlob;	// @synthesize=_selfBlob
@property(retain, nonatomic) GKSession* session;	// @synthesize=_session
@property(assign, nonatomic) unsigned char version;	// @synthesize=_version
-(id)init;
-(void)initRelayConnectionForPlayer:(id)player;
-(void)initRelayInfoFromCallback:(id)callback forPlayer:(id)player;
-(void)initRelayInfoFromPush:(id)push forPlayer:(id)player;
-(void)initRelayInfoFromServerResponse:(id)serverResponse forPlayer:(id)player;
-(void)initRelayResponse:(id)response playerID:(id)anId;
-(void)acceptRelayResponse:(id)response playerID:(id)anId;
-(id)allIDs;
-(void)conditionallyReinvitePlayer:(id)player sessionToken:(id)token;
-(void)conditionallyRelaunchPlayer:(id)player;
-(void)connectToPeersWithDictionaries:(id)dictionaries version:(unsigned char)version sessionToken:(id)token cdxTicket:(id)ticket;
-(BOOL)connected:(id)connected;
// declared property getter: -(id)connection;
-(id)dataFromBase64String:(id)base64String;
-(void)dealloc;
-(void)deferStateCallbackForPlayer:(id)player state:(int)state;
// declared property getter: -(id)delegate;
-(void)disconnect;
// declared property getter: -(unsigned)expectedPlayerCount;
-(void)getLocalConnectionDataWithCompletionHandler:(id)completionHandler;
// declared property getter: -(id)inviteDelegate;
-(void)inviteeComboMatched:(int)matched;
// declared property getter: -(id)opponentIDs;
-(id)packet:(unsigned char)packet data:(id)data;
// declared property getter: -(unsigned)packetSequenceNumber;
-(id)peerFromPlayer:(id)player;
// declared property getter: -(id)playerEventQueues;
-(id)playerFromPeer:(id)peer;
// declared property getter: -(id)playerIDs;
// declared property getter: -(id)playerPushTokens;
-(void)preLoadInviter:(id)inviter sessionToken:(id)token;
-(void)preemptRelay:(id)relay;
-(void)queueData:(id)data forPlayer:(id)player;
-(void)receiveData:(id)data fromPeer:(id)peer inSession:(id)session context:(void*)context;
// declared property getter: -(id)reinvitedPlayers;
-(void)reinviteeAcceptedNotification:(id)notification;
-(void)reinviteeDeclinedNotification:(id)notification;
-(void)relayPush:(id)push;
-(void)relayPushNotification:(id)notification;
-(void)requestRelayInitForPlayer:(id)player;
-(void)requestRelayUpdateForPlayer:(id)player;
// declared property getter: -(id)selfBlob;
-(void)sendData:(id)data fromPlayer:(id)player;
-(BOOL)sendData:(id)data toPlayers:(id)players withDataMode:(int)dataMode error:(id*)error;
-(BOOL)sendDataToAllPlayers:(id)allPlayers withDataMode:(int)dataMode error:(id*)error;
-(BOOL)sendInviteData:(id)data error:(id*)error;
-(void)sendQueuedPacketsForPlayer:(id)player;
-(void)sendStateCallbackForPlayer:(id)player state:(int)state;
-(void)sendVersionData:(unsigned char)data;
-(void)sendVersionData:(unsigned char)data toPeer:(id)peer;
// declared property getter: -(id)session;
-(void)session:(id)session connectionWithPeerFailed:(id)peerFailed withError:(id)error;
-(void)session:(id)session didFailWithError:(id)error;
-(void)session:(id)session initiateRelay:(id)relay forPeer:(id)peer;
-(void)session:(id)session peer:(id)peer didChangeState:(int)state;
-(void)session:(id)session updateRelay:(id)relay forPeer:(id)peer;
// declared property setter: -(void)setConnection:(id)connection;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setInviteDelegate:(id)delegate;
// declared property setter: -(void)setOpponentIDs:(id)ids;
// declared property setter: -(void)setPacketSequenceNumber:(unsigned)number;
// declared property setter: -(void)setPlayerEventQueues:(id)queues;
// declared property setter: -(void)setPlayerPushTokens:(id)tokens;
// declared property setter: -(void)setReinvitedPlayers:(id)players;
// declared property setter: -(void)setSelfBlob:(id)blob;
// declared property setter: -(void)setSession:(id)session;
// declared property setter: -(void)setVersion:(unsigned char)version;
-(BOOL)shouldStartRelay:(id)relay;
-(void)updateRelayConnectionForPlayer:(id)player;
-(void)updateRelayInfo:(id)info forPlayer:(id)player;
-(void)updateRelayInfoFromCallback:(id)callback forPlayer:(id)player;
-(void)updateStateForPlayer:(id)player state:(int)state;
// declared property getter: -(unsigned char)version;
-(id)voiceChatWithName:(id)name;
@end

