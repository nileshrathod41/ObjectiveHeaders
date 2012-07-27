/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSNotification : XXUnknownSuperclass <NSCopying, NSCoding> {
}
+(id)allocWithZone:(NSZone*)zone;
+(id)notificationWithName:(id)name object:(id)object;
+(id)notificationWithName:(id)name object:(id)object userInfo:(id)info;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithName:(id)name object:(id)object userInfo:(id)info;
-(Class)classForCoder;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)name;
-(id)object;
-(id)userInfo;
@end

