/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class NSDictionary;

@interface GKSetupAccountRequest : GKDataRequest {
@private
	NSDictionary* _parameters;
}
@property(retain, nonatomic) NSDictionary* parameters;	// @synthesize=_parameters
-(BOOL)authenticationRequired;
-(void)dealloc;
-(id)key;
// declared property getter: -(id)parameters;
-(id)request;
// declared property setter: -(void)setParameters:(id)parameters;
-(BOOL)shouldProcessInBackground;
@end

