/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>

@class NSOperation;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSOperationQueueInternal : NSObject {
@private
	int __queueLock;
	NSOperation* __firstOperation;
	NSOperation* __lastOperation;
	NSOperation* __pendingFirstOperation;
	NSOperation* __pendingLastOperation;
	NSOperation* __firstPriOperation[5];
	NSOperation* __lastPriOperation[5];
	NSObject<OS_dispatch_queue>* __pending_barrier;
	int __maxNumOps;
	int __actualMaxNumOps;
	int __numExecOps;
	unsigned __poke;
	unsigned char __mainQ;
	unsigned char __suspended;
	unsigned char __overcommit;
	unsigned char __pad1[1];
	BOOL __nameBuffer[160];
}
-(id)init;
-(void)dealloc;
-(void)finalize;
@end

