/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "NSObject.h"


@protocol MFContactsSearchConsumer <NSObject>
-(void)beganNetworkActivity;
-(void)consumeSearchResults:(id)results type:(int)type taskID:(id)anId;
-(void)endedNetworkActivity;
-(void)finishedSearchingForType:(int)type;
-(void)finishedTaskWithID:(id)anId;
@end

