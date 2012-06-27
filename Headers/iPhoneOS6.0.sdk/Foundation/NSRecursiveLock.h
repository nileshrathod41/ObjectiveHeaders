/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "Foundation-Structs.h"
#import "NSLocking.h"


@interface NSRecursiveLock : NSObject <NSLocking> {
@private
	void* _priv;
}
+(id)allocWithZone:(NSZone*)zone;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)finalize;
-(BOOL)isLocking;
-(void)lock;
-(BOOL)lockBeforeDate:(id)date;
-(id)name;
-(void)setName:(id)name;
-(BOOL)tryLock;
-(void)unlock;
@end

