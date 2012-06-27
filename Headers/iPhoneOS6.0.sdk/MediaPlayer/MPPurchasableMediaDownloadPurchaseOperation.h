/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SSDownloadManagerObserver.h"

@class SSPurchase, SSPurchaseRequest, NSObject, MPPurchasableMediaDownload;
@protocol MPPurchasableMediaDownloadPurchaseOperationDelegate, OS_dispatch_queue;

@interface MPPurchasableMediaDownloadPurchaseOperation : XXUnknownSuperclass <SSDownloadManagerObserver> {
@private
	NSObject<OS_dispatch_queue>* _accessQueue;
	SSPurchase* _purchase;
	SSPurchaseRequest* _purchaseRequest;
	MPPurchasableMediaDownload* _download;
	BOOL _shouldSuppressErrorDialogs;
	id<MPPurchasableMediaDownloadPurchaseOperationDelegate> _delegate;
}
@property(readonly, assign, nonatomic) id<MPPurchasableMediaDownloadPurchaseOperationDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) MPPurchasableMediaDownload* download;	// @synthesize=_download
@property(readonly, assign, nonatomic) SSPurchase* purchase;
@property(readonly, assign, nonatomic) BOOL shouldSuppressErrorDialogs;	// @synthesize=_shouldSuppressErrorDialogs
-(id)initWithDownload:(id)download delegate:(id)delegate shouldSuppressErrorDialogs:(BOOL)dialogs;
-(void)cancel;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(id)download;
-(void)main;
// declared property getter: -(id)purchase;
// declared property getter: -(BOOL)shouldSuppressErrorDialogs;
@end

