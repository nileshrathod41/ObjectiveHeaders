/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class GKPlayer;

@interface GKRemoveFriendsDataRequest : GKDataRequest {
@private
	GKPlayer* _player;
}
@property(retain, nonatomic) GKPlayer* player;	// @synthesize=_player
-(void)dealloc;
-(id)key;
// declared property getter: -(id)player;
-(id)request;
// declared property setter: -(void)setPlayer:(id)player;
@end

