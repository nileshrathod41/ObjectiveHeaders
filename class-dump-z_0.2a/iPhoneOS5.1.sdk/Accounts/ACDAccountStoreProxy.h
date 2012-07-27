/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import "XPCProxyTarget.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface ACDAccountStoreProxy : XXUnknownSuperclass <XPCProxyTarget> {
}
-(void)accountTypeForAccountWithIdentifier:(id)identifier handler:(id)handler;
-(void)accountTypeWithIdentifier:(id)identifier handler:(id)handler;
-(void)accountTypesWithHandler:(id)handler;
-(void)accountWithIdentifier:(id)identifier handler:(id)handler;
-(void)accountsWithAccountType:(id)accountType handler:(id)handler;
-(void)accountsWithHandler:(id)handler;
-(void)appPermissionsForAccountType:(id)accountType withHandler:(id)handler;
-(void)childAccountsForAccountWithIdentifier:(id)identifier handler:(id)handler;
-(void)clearPermissionGrantedForBundleID:(id)bundleID onAccountType:(id)type withHandler:(id)handler;
-(void)credentialForAccountWithIdentifier:(id)identifier handler:(id)handler;
-(void)dataclassesWithHandler:(id)handler;
-(void)enabledDataclassesForAccountWithIdentifier:(id)identifier handler:(id)handler;
-(void)insertAccountType:(id)type withHandler:(id)handler;
-(void)parentAccountForAccountWithIdentifier:(id)identifier handler:(id)handler;
-(void)permissionForAccountType:(id)accountType withHandler:(id)handler;
-(void)provisionedDataclassesForAccountWithIdentifier:(id)identifier handler:(id)handler;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)removeAccount:(id)account withHandler:(id)handler;
-(void)removeAccountType:(id)type withHandler:(id)handler;
-(void)requestAccessForAccountTypeWithIdentifier:(id)identifier withHandler:(id)handler;
-(void)saveAccount:(id)account forPID:(id)pid withHandler:(id)handler;
-(void)saveAccount:(id)account withHandler:(id)handler;
-(void)setPermissionGranted:(id)granted forBundleID:(id)bundleID onAccountType:(id)type withHandler:(id)handler;
-(void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)typeIdentifier withHandler:(id)handler;
@end

