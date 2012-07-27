/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface NSFilePresenterRelinquishment : XXUnknownSuperclass {
@private
	NSCountedSet* _blockingAccessClaimIDs;
	id _reacquirer;
}
-(BOOL)addBlockingAccessClaimID:(id)anId;
-(void)dealloc;
-(void)removeAllBlockingAccessClaimIDs;
-(void)removeBlockingAccessClaimID:(id)anId;
-(BOOL)setReacquirer:(id)reacquirer;
@end

