/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GKGame, NSString, GKRecentMatchInternal, NSDate;

@interface GKGameMatch : XXUnknownSuperclass {
@private
	GKRecentMatchInternal* _internal;
	GKGame* _game;
}
@property(retain, nonatomic) NSDate* date;	// @dynamic
@property(retain, nonatomic) GKGame* game;	// @synthesize=_game
@property(retain, nonatomic) GKRecentMatchInternal* internal;	// @synthesize=_internal
@property(retain, nonatomic) NSString* playerID;	// @dynamic
-(id)init;
-(id)initWithInternalRepresentation:(id)internalRepresentation game:(id)game;
-(void)dealloc;
-(id)forwardingTargetForSelector:(SEL)selector;
// declared property getter: -(id)game;
// declared property getter: -(id)internal;
-(BOOL)respondsToSelector:(SEL)selector;
// declared property setter: -(void)setGame:(id)game;
// declared property setter: -(void)setInternal:(id)internal;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
-(id)valueForUndefinedKey:(id)undefinedKey;
@end

