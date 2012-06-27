/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>

@class NSString, NSOperationQueue, NSNotificationCenter;

__attribute__((visibility("hidden")))
@interface __NSObserver : NSObject {
@private
	NSNotificationCenter* nc;
	NSOperationQueue* queue;
	NSString* name;
	id object;
	id block;
}
+(void)forgetObserver:(id)observer;
+(BOOL)isAnObserver:(id)observer;
+(id)observerWithCenter:(id)center queue:(id)queue name:(id)name object:(id)object block:(id)block;
-(void)_doit:(id)doit;
-(void)dealloc;
-(id)name;
-(id)object;
@end

