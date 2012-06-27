/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import "WLXPCProxyTarget.h"
#import "PKRemoteAddPassesViewControllerProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface PKRemoteAddPassesViewController : XXUnknownSuperclass <WLXPCProxyTarget, PKRemoteAddPassesViewControllerProtocol> {
}
+(id)requiredWhitelistClassNames;
-(void)dealloc;
-(void)ingestionDidFinishWithResult:(int)ingestion;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewServiceDidTerminateWithError:(id)viewService;
-(void)viewWillAppear:(BOOL)view;
@end

