/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSObject.h"


@protocol SSDownloadHandlerDelegate <NSObject>
@optional
-(void)downloadHandler:(id)handler cancelSession:(id)session;
-(void)downloadHandler:(id)handler handleAuthenticationSession:(id)session;
-(void)downloadHandler:(id)handler handleSession:(id)session;
-(BOOL)downloadHandler:(id)handler pauseSession:(id)session;
-(void)downloadHandlerDidDisconnect:(id)downloadHandler;
@end

