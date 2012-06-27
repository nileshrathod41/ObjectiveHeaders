/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SKPaymentTransaction, NSError, NSString, NSURL, NSNumber;

@interface SKDownload : XXUnknownSuperclass {
@private
	NSString* _contentIdentifier;
	long long _contentLength;
	NSURL* _contentURL;
	NSNumber* _downloadID;
	int _downloadState;
	NSError* _error;
	float _progress;
	double _timeRemaining;
	SKPaymentTransaction* _transaction;
	NSString* _version;
}
@property(copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber* _downloadID;	// @synthesize
@property(readonly, assign, nonatomic) NSString* contentIdentifier;	// @synthesize=_contentIdentifier
@property(readonly, assign, nonatomic) long long contentLength;	// @synthesize=_contentLength
@property(readonly, assign, nonatomic) NSURL* contentURL;	// @synthesize=_contentURL
@property(readonly, assign, nonatomic) NSString* contentVersion;	// @synthesize=_version
@property(readonly, assign, nonatomic) int downloadState;	// @synthesize=_downloadState
@property(readonly, assign, nonatomic) NSError* error;	// @synthesize=_error
@property(readonly, assign, nonatomic) float progress;	// @synthesize=_progress
@property(readonly, assign, nonatomic) double timeRemaining;	// @synthesize=_timeRemaining
@property(readonly, assign, nonatomic) SKPaymentTransaction* transaction;	// @synthesize=_transaction
-(id)init;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(void)_applyChangeset:(id)changeset;
// declared property getter: -(id)_downloadID;
-(void)_setContentIdentifier:(id)identifier;
-(void)_setContentLength:(long long)length;
-(void)_setContentURL:(id)url;
// declared property setter: -(void)_setDownloadID:(id)anId;
-(void)_setDownloadState:(int)state;
-(void)_setError:(id)error;
-(void)_setProgress:(float)progress;
-(void)_setTimeRemaining:(double)remaining;
-(void)_setTransaction:(id)transaction;
-(void)_setVersion:(id)version;
// declared property getter: -(id)contentIdentifier;
// declared property getter: -(long long)contentLength;
// declared property getter: -(id)contentURL;
// declared property getter: -(id)contentVersion;
-(id)copyXPCEncoding;
-(void)dealloc;
// declared property getter: -(int)downloadState;
// declared property getter: -(id)error;
// declared property getter: -(float)progress;
// declared property getter: -(double)timeRemaining;
// declared property getter: -(id)transaction;
@end
