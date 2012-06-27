/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSDictionary, NSTimeZone, NSString, NSDate, NSCalendar;

@interface UILocalNotification : XXUnknownSuperclass <NSCopying, NSCoding> {
}
@property(copy, nonatomic) NSString* alertAction;	// @dynamic
@property(copy, nonatomic) NSString* alertBody;	// @dynamic
@property(copy, nonatomic) NSString* alertLaunchImage;	// @dynamic
@property(assign, nonatomic) BOOL allowSnooze;	// @dynamic
@property(assign, nonatomic) int applicationIconBadgeNumber;	// @dynamic
@property(copy, nonatomic) NSString* customLockSliderLabel;	// @dynamic
@property(copy, nonatomic) NSDate* fireDate;	// @dynamic
@property(assign, nonatomic) BOOL fireNotificationsWhenAppRunning;	// @dynamic
@property(copy, nonatomic) NSString* firedNotificationName;	// @dynamic
@property(assign, nonatomic) BOOL hasAction;	// @dynamic
@property(assign, nonatomic) BOOL hideAlertTitle;	// @dynamic
@property(assign, nonatomic) BOOL interruptAudioAndLockDevice;	// @dynamic
@property(assign, nonatomic) BOOL isSystemAlert;	// @dynamic
@property(assign, nonatomic) int remainingRepeatCount;	// @dynamic
@property(copy, nonatomic) NSCalendar* repeatCalendar;	// @dynamic
@property(assign, nonatomic) unsigned repeatInterval;	// @dynamic
@property(assign, nonatomic) BOOL resumeApplicationInBackground;	// @dynamic
@property(assign, nonatomic) BOOL showAlarmStatusBarItem;	// @dynamic
@property(copy, nonatomic) NSString* snoozedNotificationName;	// @dynamic
@property(copy, nonatomic) NSString* soundName;	// @dynamic
@property(assign, nonatomic) int soundType;	// @dynamic
@property(copy, nonatomic) NSTimeZone* timeZone;	// @dynamic
@property(assign, nonatomic) int totalRepeatCount;	// @dynamic
@property(copy, nonatomic) NSDictionary* userInfo;	// @dynamic
+(id)alloc;
+(id)allocWithZone:(NSZone*)zone;
-(id)init;
-(id)initWithCoder:(id)coder;
-(void)clearNonSystemProperties;
-(int)compareFireDates:(id)dates;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(BOOL)isValid;
-(id)nextFireDateAfterDate:(id)date localTimeZone:(id)zone;
-(id)nextFireDateForLastFireDate:(id)lastFireDate;
@end
