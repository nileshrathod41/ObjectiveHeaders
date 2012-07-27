/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import "NSObject.h"


@protocol ADInterstitialViewDelegate <NSObject>
-(void)interstitialView:(id)view didFailToReceiveAdWithError:(id)error;
-(void)interstitialViewActionDidFinish:(id)interstitialViewAction;
-(BOOL)interstitialViewActionShouldBegin:(id)interstitialViewAction willLeaveApplication:(BOOL)application;
-(void)interstitialViewDidLoadAd:(id)interstitialView;
-(void)interstitialViewDidUnloadAd:(id)interstitialView;
-(void)interstitialViewWillLoadAd:(id)interstitialView;
@end

