/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "Foundation-Structs.h"

@class NSOperationQueue, NSOperation;

__attribute__((visibility("hidden")))
@interface __NSOperationInternal : NSObject {
@private
	unsigned char __pad1[16];
	NSOperation* __outerOp;
	NSOperation* __prevOp;
	NSOperation* __nextOp;
	NSOperation* __nextPriOp;
	NSOperationQueue* __queue;
	id __dependencies;
	id __down_dependencies;
	long long __unfinished_deps;
	id __completion;
	void* __obsInfo;
	void* __implicitObsInfo;
	long long __seqno;
	double __thread_prio;
	int __RC;
	int __state;
	BOOL __prio;
	unsigned char __cached_isReady;
	unsigned char __isCancelled;
	unsigned char __isBarrier;
	unsigned char __pad2[4];
	opaque_pthread_mutex_t __wait_mutex;
	opaque_pthread_cond_t __wait_cond;
	unsigned char __pad3[40];
}
+(void)_observeValueForKeyPath:(id)keyPath ofObject:(id)object changeKind:(unsigned)kind oldValue:(id)value newValue:(id)value5 indexes:(id)indexes context:(void*)context;
-(id)init;
-(id)__;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)addDependency:(id)dependency;
-(void)cancel;
-(id)completionBlock;
-(void)dealloc;
-(id)dependencies;
-(void)finalize;
-(void)invalidate;
-(BOOL)isCancelled;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isReady;
-(int)queuePriority;
-(oneway void)release;
-(void)removeDependency:(id)dependency;
-(id)retain;
-(unsigned)retainCount;
-(void)setCompletionBlock:(id)block;
-(void)setQueuePriority:(int)priority;
-(void)setThreadPriority:(double)priority;
-(void)start;
-(double)threadPriority;
-(void)waitUntilFinished;
-(void)waitUntilFinishedOrTimeout:(double)timeout;
@end

