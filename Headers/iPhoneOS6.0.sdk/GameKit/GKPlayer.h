/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKGame, NSDate, NSString, GKPlayerInternal, NSArray;

@interface GKPlayer : XXUnknownSuperclass {
@private
	GKPlayerInternal* _internal;
	NSArray* _friends;
	GKGame* _lastPlayedGame;
}
@property(copy, nonatomic) NSString* alias;	// @dynamic
@property(readonly, assign, nonatomic) NSString* cacheKey;
@property(readonly, assign, nonatomic) unsigned detailPieces;
@property(readonly, assign, nonatomic) NSString* displayName;
@property(readonly, assign, nonatomic) NSString* firstName;	// @dynamic
@property(retain, nonatomic) NSArray* friends;	// @synthesize=_friends
@property(readonly, assign, nonatomic) BOOL hasPhoto;
@property(retain) GKPlayerInternal* internal;	// @synthesize=_internal
@property(readonly, assign, nonatomic) BOOL isFriend;
@property(readonly, assign, nonatomic) NSString* lastName;	// @dynamic
@property(readonly, assign, nonatomic) NSDate* lastPlayedDate;	// @dynamic
@property(retain, nonatomic) GKGame* lastPlayedGame;	// @synthesize=_lastPlayedGame
@property(readonly, assign, nonatomic) NSDate* lastSeenDate;	// @dynamic
@property(assign, nonatomic) unsigned numberOfFriends;	// @dynamic
@property(retain, nonatomic) NSString* playerID;	// @dynamic
@property(readonly, assign, nonatomic) XXStruct_nh4N8A stats;
@property(copy, nonatomic) NSString* status;	// @dynamic
@property(readonly, assign, nonatomic) unsigned validPieces;	// @dynamic
+(void)acceptFriendRequestsFromPlayerIDs:(id)playerIDs handler:(id)handler;
+(id)anonymousPlayer;
+(id)cacheKeyForPlayerID:(id)playerID;
+(void)declineFriendRequestsFromPlayerIDs:(id)playerIDs handler:(id)handler;
+(BOOL)instancesRespondToSelector:(SEL)selector;
+(void)loadPlayersForIdentifiers:(id)identifiers withCompletionHandler:(id)completionHandler;
+(void)loadPlayersForIdentifiers:(id)identifiers withPieces:(unsigned)pieces withCompletionHandler:(id)completionHandler;
+(int)sizeForPhotoSize:(int)photoSize;
+(id)unknownPlayer;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithInternalRepresentation:(id)internalRepresentation;
-(void)_postChangeNotification;
-(void)acceptFriendRequestWithCompletionHandler:(id)completionHandler;
-(id)attributedDisplayName;
-(id)attributedDisplayNameWithIdentifiableName:(BOOL)identifiableName;
-(id)attributedDisplayNameWithIdentifiableName:(BOOL)identifiableName withFont:(id)font;
-(id)attributedIdentifiableName:(id)name withFont:(id)font foreColor:(id)color shadowColor:(id)color4;
// declared property getter: -(id)cacheKey;
-(void)dealloc;
-(void)declineFriendRequestWithCompletionHandler:(id)completionHandler;
-(id)description;
// declared property getter: -(unsigned)detailPieces;
// declared property getter: -(id)displayName;
-(id)displayNameWithIdentifiableName:(BOOL)identifiableName quoteAlias:(BOOL)alias;
-(id)email;
-(id)emails;
-(void)encodeWithCoder:(id)coder;
-(id)forwardingTargetForSelector:(SEL)selector;
// declared property getter: -(id)friends;
// declared property getter: -(BOOL)hasPhoto;
-(unsigned)hash;
-(id)identifiableNameIncludingSurname:(BOOL)surname;
// declared property getter: -(id)internal;
-(BOOL)isAnonymousPlayer;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(BOOL)isFriend;
-(BOOL)isLocalPlayer;
-(BOOL)isUnknownPlayer;
// declared property getter: -(id)lastPlayedGame;
-(void)loadCommonFriends:(BOOL)friends profilePieces:(unsigned)pieces asPlayersWithCompletionHandler:(id)completionHandler;
-(void)loadFriendIDsWithCompletionHandler:(id)completionHandler;
-(void)loadFriendsAsPlayersWithCompletionHandler:(id)completionHandler;
-(void)loadGamesPlayed:(id)played;
-(void)loadGamesPlayedDetailsWithCompletionHandler:(id)completionHandler;
-(void)loadGamesPlayedIncludingInstalledGames:(BOOL)games completionHandler:(id)handler;
-(void)loadPhotoForSize:(int)size withCompletionHandler:(id)completionHandler;
-(void)loadProfilePieces:(unsigned)pieces withCompletionHandler:(id)completionHandler;
-(void)loadRecentMatchesForGame:(id)game block:(id)block;
-(void)photoCountWithCompletionHandler:(id)completionHandler;
-(id)photoURLForSize:(int)size;
-(void)postChangeNotification;
-(id)quotedAlias:(id)alias withFont:(id)font foreColor:(id)color shadowColor:(id)color4;
-(BOOL)respondsToSelector:(SEL)selector;
// declared property setter: -(void)setFriends:(id)friends;
// declared property setter: -(void)setInternal:(id)internal;
// declared property setter: -(void)setLastPlayedGame:(id)game;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
-(id)sortName;
// declared property getter: -(XXStruct_nh4N8A)stats;
-(void)updateNamesFromAddressBook;
-(id)valueForUndefinedKey:(id)undefinedKey;
@end

