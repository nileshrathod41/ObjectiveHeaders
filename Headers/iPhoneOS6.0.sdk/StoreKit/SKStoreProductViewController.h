/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SKRemoteProductViewController, _UIAsyncInvocation, SKInvocationQueueProxy, NSDictionary, NSString;
@protocol SKStoreProductViewControllerDelegatePrivate, SKStoreProductViewControllerDelegate, SKUIServiceProductPageViewController;

@interface SKStoreProductViewController : XXUnknownSuperclass {
@private
	NSString* _affiliateIdentifier;
	_UIAsyncInvocation* _cancelRequest;
	NSString* _clientIdentifier;
	id<SKStoreProductViewControllerDelegatePrivate> _delegate;
	id _loadBlock;
	int _productPageStyle;
	SKRemoteProductViewController* _remoteViewController;
	SKInvocationQueueProxy<SKUIServiceProductPageViewController>* _serviceProxy;
	NSDictionary* _scriptContextDictionary;
}
@property(copy, nonatomic) NSString* affiliateIdentifier;	// @synthesize=_affiliateIdentifier
@property(copy, nonatomic) NSString* clientIdentifier;	// @synthesize=_clientIdentifier
@property(assign, nonatomic) id<SKStoreProductViewControllerDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) int productPageStyle;	// @synthesize=_productPageStyle
@property(copy, nonatomic) NSDictionary* scriptContextDictionary;	// @synthesize=_scriptContextDictionary
+(void)_validateURL:(id)url withSheetInfo:(id)sheetInfo completionBlock:(id)block;
+(void)getCanLoadURL:(id)url completionBlock:(id)block;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)_addRemoteView;
-(void)_didFinish;
-(void)_didFinishWithResult:(int)result;
-(void)_loadDidFinishWithResult:(BOOL)_load error:(id)error;
-(void)_presentPageWithRequest:(id)request animated:(BOOL)animated;
-(void)_requestRemoteViewController;
-(void)_resetRemoteViewController;
-(void)_statusBarFrameWillChangeNotification:(id)_statusBarFrame;
-(void)_throwUnsupportedPresentationException;
-(void)_willBecomeContentViewControllerOfPopover:(id)popover;
// declared property getter: -(id)affiliateIdentifier;
// declared property getter: -(id)clientIdentifier;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)loadProductWithParameters:(id)parameters completionBlock:(id)block;
-(void)loadProductWithRequest:(id)request completionBlock:(id)block;
-(void)loadProductWithURL:(id)url completionBlock:(id)block;
-(void)loadView;
// declared property getter: -(int)productPageStyle;
// declared property getter: -(id)scriptContextDictionary;
// declared property setter: -(void)setAffiliateIdentifier:(id)identifier;
// declared property setter: -(void)setClientIdentifier:(id)identifier;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setProductPageStyle:(int)style;
// declared property setter: -(void)setScriptContextDictionary:(id)dictionary;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewWillAppear:(BOOL)view;
@end

