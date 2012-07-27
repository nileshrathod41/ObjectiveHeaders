/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NSOperationQueue : XXUnknownSuperclass {
@private
	id _private;
	void* _reserved;
}
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
+(id)currentQueue;
+(id)mainQueue;
-(id)init;
-(id)__;
-(void)__:(id)_;
-(void)addOperation:(id)operation;
-(void)addOperationWithBlock:(id)block;
-(void)addOperations:(id)operations waitUntilFinished:(BOOL)finished;
-(void)cancelAllOperations;
-(void)dealloc;
-(id)description;
-(BOOL)isSuspended;
-(int)maxConcurrentOperationCount;
-(id)name;
-(unsigned)operationCount;
-(id)operations;
-(BOOL)overcommitsOperations;
-(void)setMaxConcurrentOperationCount:(int)count;
-(void)setName:(id)name;
-(void)setOvercommitsOperations:(BOOL)operations;
-(void)setSuspended:(BOOL)suspended;
-(void)waitUntilAllOperationsAreFinished;
@end

