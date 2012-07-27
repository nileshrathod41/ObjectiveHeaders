/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, SKPayment, NSDate, NSString, NSData;

@interface SKPaymentTransaction : XXUnknownSuperclass {
@private
	id _internal;
}
@property(readonly, assign, nonatomic) NSError* error;
@property(readonly, assign, nonatomic) SKPaymentTransaction* originalTransaction;
@property(readonly, assign, nonatomic) SKPayment* payment;
@property(readonly, assign, nonatomic) NSDate* transactionDate;
@property(readonly, assign, nonatomic) NSString* transactionIdentifier;
@property(readonly, assign, nonatomic) NSData* transactionReceipt;
@property(readonly, assign, nonatomic) int transactionState;
-(id)init;
-(id)initWithDictionary:(id)dictionary;
-(id)initWithPayment:(id)payment;
-(id)_transactionIdentifier;
-(BOOL)canMergeWithTransaction:(id)transaction;
-(void)dealloc;
// declared property getter: -(id)error;
-(id)matchingIdentifier;
-(BOOL)mergeWithTransaction:(id)transaction;
// declared property getter: -(id)originalTransaction;
// declared property getter: -(id)payment;
// declared property getter: -(id)transactionDate;
// declared property getter: -(id)transactionIdentifier;
// declared property getter: -(id)transactionReceipt;
// declared property getter: -(int)transactionState;
@end

