/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>


@interface NSNotificationQueue : NSObject {
@private
	id _notificationCenter;
	id _asapQueue;
	id _asapObs;
	id _idleQueue;
	id _idleObs;
}
+(id)defaultQueue;
-(id)init;
-(id)initWithNotificationCenter:(id)notificationCenter;
-(void)_flushNotificationQueue;
-(void)dealloc;
-(void)dequeueNotificationsMatching:(id)matching coalesceMask:(unsigned)mask;
-(void)enqueueNotification:(id)notification postingStyle:(unsigned)style;
-(void)enqueueNotification:(id)notification postingStyle:(unsigned)style coalesceMask:(unsigned)mask forModes:(id)modes;
@end

