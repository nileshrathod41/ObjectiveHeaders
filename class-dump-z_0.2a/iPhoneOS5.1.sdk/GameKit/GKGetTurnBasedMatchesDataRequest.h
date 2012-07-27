/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class NSArray;

@interface GKGetTurnBasedMatchesDataRequest : GKDataRequest {
@private
	NSArray* _matches;
}
@property(retain, nonatomic) NSArray* matches;	// @synthesize=_matches
-(void)dealloc;
-(void)handleResponseFromServer:(id)server;
-(id)key;
// declared property getter: -(id)matches;
// declared property setter: -(void)setMatches:(id)matches;
@end

