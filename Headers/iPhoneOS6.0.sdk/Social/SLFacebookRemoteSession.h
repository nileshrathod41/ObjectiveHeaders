/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import "SLRemoteSession.h"


@protocol SLFacebookRemoteSession <SLRemoteSession>
-(void)accountForEntitledClientWithHandler:(id)handler;
-(void)accountsAvailabilityWithHandler:(id)handler;
-(void)doTestCallWithDict:(id)dict withHandler:(id)handler;
-(void)fetchLikeStatusForURL:(id)url flags:(id)flags completion:(id)completion;
-(void)likeURL:(id)url completion:(id)completion;
-(void)revokeAccessTokenForAppWithID:(id)anId;
-(void)revokeAllAccessTokensForDeviceWithCompletion:(id)completion;
-(void)setActiveAccountIdentifier:(id)identifier;
-(void)tokenSecretForEntitledClientWithHandler:(id)handler;
-(void)unlikeURL:(id)url completion:(id)completion;
-(void)uploadPost:(id)post withXPCTransferCompletion:(id)xpctransferCompletion;
@end

