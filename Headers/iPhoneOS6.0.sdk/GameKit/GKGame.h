/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, GKGameInternal, GKStoreItemInternal, NSString, NSNumber;

@interface GKGame : XXUnknownSuperclass <NSCoding> {
@private
	GKGameInternal* _internal;
	GKStoreItemInternal* _storeItem;
	BOOL _sandboxed;
}
@property(readonly, assign, nonatomic) NSNumber* adamID;	// @dynamic
@property(readonly, assign, nonatomic) NSString* bundleIdentifier;	// @dynamic
@property(readonly, assign, nonatomic) NSString* bundleVersion;	// @dynamic
@property(readonly, assign, nonatomic) NSString* cacheKey;
@property(readonly, assign, nonatomic) NSString* defaultCategory;	// @dynamic
@property(readonly, assign, nonatomic, getter=isDownloading) BOOL downloading;
@property(readonly, assign, nonatomic) NSNumber* externalVersion;	// @dynamic
@property(readonly, assign, nonatomic) NSDictionary* gameDescriptor;
@property(readonly, assign, nonatomic) GKGameInfo gameInfo;
@property(readonly, assign, nonatomic, getter=isInstalled) BOOL installed;
@property(retain) GKGameInternal* internal;	// @synthesize=_internal
@property(readonly, assign, nonatomic, getter=isInternal) BOOL internal;
@property(readonly, assign, nonatomic) NSString* name;	// @dynamic
@property(assign, nonatomic) unsigned platform;	// @dynamic
@property(assign, nonatomic, getter=isPrerendered) BOOL prerendered;	// @dynamic
@property(assign, nonatomic, getter=isSandboxed) BOOL sandboxed;	// @synthesize=_sandboxed
@property(retain, nonatomic) GKStoreItemInternal* storeItem;	// @synthesize=_storeItem
+(id)currentGame;
+(id)defaultGameIconWithStyle:(int)style;
+(BOOL)isGameCenter;
+(void)loadStoreItemsForGames:(id)games withCompletionHandler:(id)completionHandler;
+(id)lookupMobileInstallation:(id)installation;
+(void)removeHistoryForGameWithBundleIdentifier:(id)bundleIdentifier completionHandler:(id)handler;
+(CGSize)serverImageSizeForIconStyle:(int)iconStyle;
+(void)updateGames:(id)games withCompletionHandler:(id)completionHandler;
-(id)init;
-(id)initWithBundleID:(id)bundleID;
-(id)initWithCoder:(id)coder;
-(id)initWithInternalRepresentation:(id)internalRepresentation;
-(id)URLStringForImageWithShineIfNeeded;
-(id)_imageURLForIconStyle:(int)iconStyle;
// declared property getter: -(id)cacheKey;
-(id)cachedIconForStyle:(int)style;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)forwardingTargetForSelector:(SEL)selector;
// declared property getter: -(id)gameDescriptor;
// declared property getter: -(GKGameInfo)gameInfo;
-(void)getFriendPlayersForAchievement:(id)achievement handler:(id)handler;
-(void)getFriendPlayersForLeaderboard:(id)leaderboard handler:(id)handler;
-(void)getFriendPlayersIncludingCompatibleGames:(BOOL)games handler:(id)handler;
-(unsigned)hash;
-(id)imageSourceForIconStyle:(int)iconStyle;
-(id)imageSourceForiOSIconStyle:(int)style;
// declared property getter: -(id)internal;
// declared property getter: -(BOOL)isDownloading;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(BOOL)isInstalled;
// declared property getter: -(BOOL)isInternal;
// declared property getter: -(BOOL)isSandboxed;
-(BOOL)isStoreItemUnexpired;
-(void)loadGameRatingWithCompletionHandler:(id)completionHandler;
-(id)loadIconForStyle:(int)style withCompletionHandler:(id)completionHandler;
-(void)loadStoreItemWithCompletionHandler:(id)completionHandler;
-(void)loadTellAFriendMessageWithCompletionHandler:(id)completionHandler;
-(id)macBrushForIconStyle:(int)iconStyle;
-(BOOL)respondsToSelector:(SEL)selector;
// declared property setter: -(void)setInternal:(id)internal;
// declared property setter: -(void)setSandboxed:(BOOL)sandboxed;
// declared property setter: -(void)setStoreItem:(id)item;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
// declared property getter: -(id)storeItem;
-(void)submitRating:(float)rating withCompletionHandler:(id)completionHandler;
-(void)updateWithInternal:(id)internal;
-(id)valueForUndefinedKey:(id)undefinedKey;
@end

