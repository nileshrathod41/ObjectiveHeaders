/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"
#import "SSRequestDelegate.h"

@class SSRentalCheckoutRequest, MPHomeSharingML3DataProvider, NSError;

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
@private
	unsigned long long _accountID;
	MPHomeSharingML3DataProvider* _dataProvider;
	NSError* _error;
	unsigned long long _itemID;
	unsigned long long _rentalID;
	SSRentalCheckoutRequest* _request;
}
@property(retain, nonatomic) MPHomeSharingML3DataProvider* dataProvider;	// @synthesize=_dataProvider
@property(readonly, assign, nonatomic) unsigned long long itemID;	// @synthesize=_itemID
-(id)initWithItemID:(unsigned long long)itemID rentalID:(unsigned long long)anId accountID:(unsigned long long)anId3;
-(BOOL)_errorIsFairPlayError:(id)error;
// declared property getter: -(id)dataProvider;
-(void)dealloc;
// declared property getter: -(unsigned long long)itemID;
-(void)request:(id)request didFailWithError:(id)error;
-(void)requestDidFinish:(id)request;
-(void)resolveError:(id)error;
// declared property setter: -(void)setDataProvider:(id)provider;
@end

