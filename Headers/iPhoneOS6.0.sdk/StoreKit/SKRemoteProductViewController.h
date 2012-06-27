/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "SKUIClientProductPageViewController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SKStoreProductViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteProductViewController : XXUnknownSuperclass <SKUIClientProductPageViewController> {
@private
	SKStoreProductViewController* _productViewController;
}
@property(assign, nonatomic) __weak SKStoreProductViewController* productViewController;	// @synthesize=_productViewController
-(void)didFinish;
-(void)didFinishWithResult:(id)result;
-(void)didReceiveTitle:(id)title;
-(void)loadDidFinishWithResult:(id)load error:(id)error;
-(void)presentPageWithRequest:(id)request animated:(id)animated;
// declared property getter: -(id)productViewController;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
// declared property setter: -(void)setProductViewController:(id)controller;
-(void)setStatusBarHidden:(id)hidden withAnimation:(id)animation;
-(void)setStatusBarStyle:(id)style animated:(id)animated;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewServiceDidTerminateWithError:(id)viewService;
@end

