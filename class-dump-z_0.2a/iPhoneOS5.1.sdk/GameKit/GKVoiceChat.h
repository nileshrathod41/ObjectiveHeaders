/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GKVoiceChatSessionDelegate.h"

@class NSArray, NSString, GKVoiceChatSession, GKSession;

@interface GKVoiceChat : XXUnknownSuperclass <GKVoiceChatSessionDelegate> {
@private
	id _playerStateUpdateHandler;
	GKSession* _gkSession;
	GKVoiceChatSession* _gkVoiceChatSession;
}
@property(assign, nonatomic, getter=isActive) BOOL active;
@property(retain, nonatomic) GKSession* gkSession;	// @synthesize=_gkSession
@property(retain, nonatomic) GKVoiceChatSession* gkVoiceChatSession;	// @synthesize=_gkVoiceChatSession
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSArray* playerIDs;
@property(copy, nonatomic) id playerStateUpdateHandler;	// @synthesize=_playerStateUpdateHandler
@property(assign, nonatomic) float volume;
+(BOOL)isVoIPAllowed;
-(id)initChat:(id)chat withSession:(id)session;
-(void)dealloc;
// declared property getter: -(id)gkSession;
// declared property getter: -(id)gkVoiceChatSession;
-(void)gkVoiceChatSession:(id)session stateUpdate:(unsigned)update forPeer:(id)peer;
// declared property getter: -(BOOL)isActive;
// declared property getter: -(id)name;
// declared property getter: -(id)playerIDs;
// declared property getter: -(id)playerStateUpdateHandler;
// declared property setter: -(void)setActive:(BOOL)active;
// declared property setter: -(void)setGkSession:(id)session;
// declared property setter: -(void)setGkVoiceChatSession:(id)session;
-(void)setMute:(BOOL)mute forPlayer:(id)player;
// declared property setter: -(void)setPlayerStateUpdateHandler:(id)handler;
// declared property setter: -(void)setVolume:(float)volume;
-(void)start;
-(void)stop;
// declared property getter: -(float)volume;
@end

