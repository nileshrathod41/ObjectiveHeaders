/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDecimalNumber, NSLocale, NSArray, NSString;

@interface SKProduct : XXUnknownSuperclass {
@private
	id _internal;
}
@property(copy, nonatomic, getter=_localeIdentifier, setter=_setLocaleIdentifier:) NSString* _localeIdentifier;
@property(readonly, assign, nonatomic) NSArray* downloadContentLengths;
@property(readonly, assign, nonatomic) NSString* downloadContentVersion;
@property(readonly, assign, nonatomic, getter=isDownloadable) BOOL downloadable;
@property(readonly, assign, nonatomic) NSString* localizedDescription;
@property(readonly, assign, nonatomic) NSString* localizedTitle;
@property(readonly, assign, nonatomic) NSDecimalNumber* price;
@property(readonly, assign, nonatomic) NSLocale* priceLocale;
@property(readonly, assign, nonatomic) NSString* productIdentifier;
-(id)init;
-(id)initWithXPCEncoding:(id)xpcencoding;
// declared property getter: -(id)_localeIdentifier;
-(void)_setContentVersion:(id)version;
-(void)_setDownloadContentLengths:(id)lengths;
-(void)_setDownloadable:(BOOL)downloadable;
// declared property setter: -(void)_setLocaleIdentifier:(id)identifier;
-(void)_setLocalizedDescription:(id)description;
-(void)_setLocalizedTitle:(id)title;
-(void)_setPrice:(id)price;
-(void)_setPriceLocale:(id)locale;
-(void)_setProductIdentifier:(id)identifier;
-(id)copyXPCEncoding;
-(void)dealloc;
// declared property getter: -(id)downloadContentLengths;
// declared property getter: -(id)downloadContentVersion;
// declared property getter: -(BOOL)isDownloadable;
// declared property getter: -(id)localizedDescription;
// declared property getter: -(id)localizedTitle;
// declared property getter: -(id)price;
// declared property getter: -(id)priceLocale;
// declared property getter: -(id)productIdentifier;
@end

