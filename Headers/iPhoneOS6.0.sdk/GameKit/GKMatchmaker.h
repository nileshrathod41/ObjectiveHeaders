/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GKDiscovery, NSMutableDictionary, NSSet, GKMatch, NSDate;

@interface GKMatchmaker : XXUnknownSuperclass {
@private
	id _inviteHandler;
	GKMatch* _match;
	id _inviteeResponseHandler;
	NSSet* _invitees;
	id _nearbyPlayerHandler;
	double _nearbyQueryAllowance;
	NSDate* _nearbyQueryLastCheckDate;
	BOOL _nearbyAdvertising;
	BOOL _nearbyBrowsing;
	NSMutableDictionary* _nearbyPlayers;
	GKDiscovery* _nearbyDiscovery;
}
@property(copy, nonatomic) id inviteHandler;	// @synthesize=_inviteHandler
@property(copy, nonatomic) id inviteeResponseHandler;	// @synthesize=_inviteeResponseHandler
@property(retain, nonatomic) NSSet* invitees;	// @synthesize=_invitees
@property(retain, nonatomic) GKMatch* match;	// @synthesize=_match
@property(assign, nonatomic) BOOL nearbyAdvertising;	// @synthesize=_nearbyAdvertising
@property(assign, nonatomic) BOOL nearbyBrowsing;	// @synthesize=_nearbyBrowsing
@property(retain, nonatomic) GKDiscovery* nearbyDiscovery;	// @synthesize=_nearbyDiscovery
@property(copy, nonatomic) id nearbyPlayerHandler;	// @synthesize=_nearbyPlayerHandler
@property(retain, nonatomic) NSMutableDictionary* nearbyPlayers;	// @synthesize=_nearbyPlayers
@property(assign, nonatomic) double nearbyQueryAllowance;	// @synthesize=_nearbyQueryAllowance
@property(retain, nonatomic) NSDate* nearbyQueryLastCheckDate;	// @synthesize=_nearbyQueryLastCheckDate
+(id)sharedMatchmaker;
-(id)init;
-(void)acceptNearbyInvite:(id)invite connectionData:(id)data;
-(void)addPlayersForHostedMatchRequest:(id)hostedMatchRequest existingPlayerIDs:(id)ids completionHandler:(id)handler;
-(void)addPlayersToMatch:(id)match matchRequest:(id)request completionHandler:(id)handler;
-(void)applicationDidEnterBackgroundNotification:(id)application;
-(void)applicationWillTerminateNotification:(id)application;
-(void)cancel;
-(void)cancelInviteToPlayer:(id)player;
-(void)cancelNearbyInvitesToPlayers:(id)players;
-(void)cancelPendingInvitesAndMarkInviteComplete:(BOOL)complete;
-(BOOL)compatibilityMatrix:(id)matrix includesAppWithBundleID:(id)bundleID version:(id)version;
-(int)currentEnvironment;
-(void)dealloc;
-(void)declineNearbyInviteFromPlayer:(id)player deviceID:(id)anId reason:(int)reason;
-(void)determineIfShouldRespondToNearbyPlayer:(id)determineIf handler:(id)handler;
-(void)doneMatchmaking;
-(void)findMatchForRequest:(id)request withCompletionHandler:(id)completionHandler;
-(void)findPlayersForHostedMatchRequest:(id)hostedMatchRequest withCompletionHandler:(id)completionHandler;
-(void)findRematchForMatch:(id)match completionHandler:(id)handler;
-(void)finishMatchmakingForMatch:(id)match;
-(void)finishedAuthenticating;
-(void)forgetAllFoundNearbyPlayers;
-(void)foundNearbyPlayer:(id)player deviceID:(id)anId discoveryInfo:(id)info;
-(void)handleNearbyInvite:(id)invite fromPlayer:(id)player deviceID:(id)anId;
-(void)handleNearbyInviteResponse:(id)response fromPlayer:(id)player deviceID:(id)anId;
-(void)handleNearbyProfileQuery:(id)query fromPlayer:(id)player deviceID:(id)anId;
-(void)handleNearbyProfileResponse:(id)response fromPlayer:(id)player deviceID:(id)anId;
-(void)inviteAnyNearbyPlayersWithRequest:(id)request;
// declared property getter: -(id)inviteHandler;
-(void)invitePlayersWithRequest:(id)request serverHosted:(BOOL)hosted completionHandler:(id)handler;
-(void)invitePlayersWithRequest:(id)request serverHosted:(BOOL)hosted onlineConnectionData:(id)data completionHandler:(id)handler;
-(void)inviteeAcceptedNotification:(id)notification;
-(void)inviteeDeclinedNotification:(id)notification;
// declared property getter: -(id)inviteeResponseHandler;
// declared property getter: -(id)invitees;
-(void)loadCompatabilityMatrixAsDictionaryWithHandler:(id)handler;
-(void)loadConnectivitySettingsWithCompletionHandler:(id)completionHandler;
-(void)loadPhotoDataDictionaryWithHandler:(id)handler;
-(void)localPlayerAcceptedGameInvite:(id)invite;
-(void)localPlayerAcceptedNearbyInvite:(id)invite;
-(void)localPlayerRespondedToNearbyInvite:(id)nearbyInvite;
-(void)lookForInvite;
-(void)lostNearbyPlayer:(id)player deviceID:(id)anId;
// declared property getter: -(id)match;
-(void)matchForInvite:(id)invite completionHandler:(id)handler;
-(void)matchForNearbyInvite:(id)nearbyInvite handler:(id)handler;
-(void)matchWithRequest:(id)request currentMatch:(id)match currentPlayerIDs:(id)ids serverHosted:(BOOL)hosted rematchID:(id)anId completionHandler:(id)handler;
// declared property getter: -(BOOL)nearbyAdvertising;
// declared property getter: -(BOOL)nearbyBrowsing;
-(id)nearbyDeviceWithDeviceID:(id)deviceID;
-(id)nearbyDevicesForPlayer:(id)player withState:(int)state;
// declared property getter: -(id)nearbyDiscovery;
-(void)nearbyInviteWasCancelled:(id)cancelled fromPlayer:(id)player deviceID:(id)anId;
// declared property getter: -(id)nearbyPlayerHandler;
// declared property getter: -(id)nearbyPlayers;
// declared property getter: -(double)nearbyQueryAllowance;
// declared property getter: -(id)nearbyQueryLastCheckDate;
-(int)numberOfNearbyDevicesForPlayer:(id)player withState:(int)state;
-(void)presentNearbyInvite:(id)invite fromPlayer:(id)player deviceID:(id)anId;
-(id)profileDictionaryForLocalPlayer;
-(void)queryActivityWithCompletionHandler:(id)completionHandler;
-(void)queryPlayerGroupActivity:(unsigned)activity withCompletionHandler:(id)completionHandler;
-(void)receivedData:(id)data fromNearbyPlayer:(id)nearbyPlayer deviceID:(id)anId;
-(BOOL)removeInvitee:(id)invitee;
-(void)reportResponse:(int)response forInvitees:(id)invitees;
-(void)respondToHostedInvite:(id)hostedInvite completionHandler:(id)handler;
-(int)responseForDeclineReason:(int)declineReason;
-(void)sendDictionary:(id)dictionary toNearbyPlayer:(id)nearbyPlayer deviceID:(id)anId;
-(void)setConnectivitySettings:(id)settings;
// declared property setter: -(void)setInviteHandler:(id)handler;
// declared property setter: -(void)setInviteeResponseHandler:(id)handler;
// declared property setter: -(void)setInvitees:(id)invitees;
// declared property setter: -(void)setMatch:(id)match;
// declared property setter: -(void)setNearbyAdvertising:(BOOL)advertising;
// declared property setter: -(void)setNearbyBrowsing:(BOOL)browsing;
// declared property setter: -(void)setNearbyDiscovery:(id)discovery;
-(void)setNearbyPlayer:(id)player deviceID:(id)anId reachable:(BOOL)reachable;
-(void)setNearbyPlayerAccepted:(id)accepted connectionData:(id)data;
-(void)setNearbyPlayerAccepted:(id)accepted deviceID:(id)anId connectionData:(id)data;
-(void)setNearbyPlayerDeclined:(id)declined deviceID:(id)anId reason:(int)reason;
-(void)setNearbyPlayerDeclined:(id)declined reason:(int)reason;
// declared property setter: -(void)setNearbyPlayerHandler:(id)handler;
// declared property setter: -(void)setNearbyPlayers:(id)players;
// declared property setter: -(void)setNearbyQueryAllowance:(double)allowance;
// declared property setter: -(void)setNearbyQueryLastCheckDate:(id)date;
-(void)setupNearbyDiscovery;
-(BOOL)shouldRespondToNearbyQuery;
-(void)startBrowsingForNearbyPlayersWithReachableHandler:(id)reachableHandler;
-(void)startNearbyAdvertising;
-(void)startNearbyBrowsing;
-(void)stopBrowsingForNearbyPlayers;
-(void)stopNearbyAdvertising;
-(void)stopNearbyBrowsing;
-(void)updateNearbyAdvertising;
@end

