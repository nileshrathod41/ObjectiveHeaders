/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface AVRunLoopCondition : XXUnknownSuperclass {
	NSMutableArray* _runLoopStateList;
}
-(id)init;
-(void)_signalRunLoopWithState:(id)state;
-(BOOL)_waitInMode:(id)mode untilDate:(id)date;
-(void)broadcast;
-(void)dealloc;
-(void)signal;
-(void)wait;
-(void)waitInMode:(id)mode;
-(BOOL)waitUntilDate:(id)date;
-(BOOL)waitUntilDate:(id)date inMode:(id)mode;
@end

