/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSMutableSet;

@interface MKCountdownTimer : XXUnknownSuperclass {
@private
	NSTimer* timer;
	NSMutableSet* observers;
}
+(id)sharedTimer;
-(id)init;
-(id)initOnce;
-(void)addObserver:(id)observer;
-(void)applicationResumed:(id)resumed;
-(void)dealloc;
-(void)removeObserver:(id)observer;
-(void)timerFired;
@end

