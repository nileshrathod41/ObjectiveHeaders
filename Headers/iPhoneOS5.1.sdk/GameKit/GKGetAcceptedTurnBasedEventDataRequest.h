/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class NSNumber, NSString;

@interface GKGetAcceptedTurnBasedEventDataRequest : GKDataRequest {
@private
	NSString* _matchID;
	NSNumber* _command;
}
@property(retain, nonatomic) NSNumber* command;	// @synthesize=_command
@property(retain, nonatomic) NSString* matchID;	// @synthesize=_matchID
// declared property getter: -(id)command;
-(void)dealloc;
-(void)handleResponseFromServer:(id)server;
-(id)key;
// declared property getter: -(id)matchID;
-(id)request;
// declared property setter: -(void)setCommand:(id)command;
// declared property setter: -(void)setMatchID:(id)anId;
@end
