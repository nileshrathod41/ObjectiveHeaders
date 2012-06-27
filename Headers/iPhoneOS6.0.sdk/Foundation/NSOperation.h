/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>


@interface NSOperation : NSObject {
@private
	id _private;
	int _private1;
}
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
+(void)initialize;
-(id)init;
-(id)__;
-(id)_implicitObservationInfo;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)addDependency:(id)dependency;
-(void)cancel;
-(id)completionBlock;
-(void)dealloc;
-(id)dependencies;
-(void)finalize;
-(BOOL)isAsynchronous;
-(BOOL)isCancelled;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isReady;
-(void)main;
-(void*)observationInfo;
-(int)queuePriority;
-(oneway void)release;
-(void)removeDependency:(id)dependency;
-(id)retain;
-(unsigned)retainCount;
-(void)setCompletionBlock:(id)block;
-(void)setObservationInfo:(void*)info;
-(void)setQueuePriority:(int)priority;
-(void)setThreadPriority:(double)priority;
-(void)start;
-(double)threadPriority;
-(void)waitUntilFinished;
-(void)waitUntilFinishedOrTimeout:(double)timeout;
@end

