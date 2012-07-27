/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class NSData, NSString;

@interface GKTargetCancelInviteRequest : GKDataRequest {
@private
	NSData* _sessionToken;
	NSString* _playerID;
	NSData* _pushToken;
}
@property(retain, nonatomic) NSString* playerID;	// @synthesize=_playerID
@property(retain, nonatomic) NSData* pushToken;	// @synthesize=_pushToken
@property(retain, nonatomic) NSData* sessionToken;	// @synthesize=_sessionToken
-(void)dealloc;
-(id)key;
// declared property getter: -(id)playerID;
// declared property getter: -(id)pushToken;
-(id)request;
// declared property getter: -(id)sessionToken;
// declared property setter: -(void)setPlayerID:(id)anId;
// declared property setter: -(void)setPushToken:(id)token;
// declared property setter: -(void)setSessionToken:(id)token;
@end

