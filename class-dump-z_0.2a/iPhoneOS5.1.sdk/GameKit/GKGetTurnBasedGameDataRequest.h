/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKGetTurnBasedMatchesDataRequest.h"

@class GKTurnBasedMatch;

@interface GKGetTurnBasedGameDataRequest : GKGetTurnBasedMatchesDataRequest {
@private
	GKTurnBasedMatch* match;
}
@property(retain, nonatomic) GKTurnBasedMatch* match;	// @synthesize
-(void)handleResponseFromServer:(id)server;
-(id)key;
// declared property getter: -(id)match;
-(id)request;
// declared property setter: -(void)setMatch:(id)match;
@end

