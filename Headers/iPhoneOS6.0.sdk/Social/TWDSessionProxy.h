/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import "XPCProxyTarget.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface TWDSessionProxy : XXUnknownSuperclass <XPCProxyTarget> {
}
-(void)checkIn:(id)anIn;
-(void)fetchCurrentImageLimits:(id)limits;
-(void)fetchCurrentTCoLength:(id)length;
-(void)fetchGeotagStatus:(id)status;
-(void)fetchProfileImageDataForScreenName:(id)screenName completion:(id)completion;
-(void)fetchRecordForScreenName:(id)screenName completion:(id)completion;
-(void)fetchRelationshipWithScreenName:(id)screenName completion:(id)completion;
-(void)fetchSessionInfo:(id)info;
-(void)getPermaLinkFromLastStatusUpdate:(id)lastStatusUpdate;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)recordsMatchingPrefixString:(id)string completion:(id)completion;
-(void)sendStatus:(id)status completion:(id)completion;
-(void)setActiveAccountIdentifier:(id)identifier;
-(void)setGeotagStatus:(id)status;
-(void)setOverrideGeotagInfo:(id)info;
-(void)showTwitterSettingsIfNeeded:(id)needed;
@end

