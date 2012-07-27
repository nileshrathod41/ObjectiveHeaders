/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ABSearchOperationDelegate.h"


@interface GKABSearchDelegate : XXUnknownSuperclass <ABSearchOperationDelegate> {
@private
	id _completionHandler;
	BOOL _gotOne;
}
@property(copy, nonatomic) id completionHandler;	// @synthesize=_completionHandler
@property(assign, nonatomic) BOOL gotOne;	// @synthesize=_gotOne
-(void)completedSearchWithFirstName:(id)firstName lastName:(id)name;
// declared property getter: -(id)completionHandler;
-(void)dealloc;
// declared property getter: -(BOOL)gotOne;
-(void)searchOperation:(id)operation didFindMatches:(id)matches moreComing:(BOOL)coming;
// declared property setter: -(void)setCompletionHandler:(id)handler;
// declared property setter: -(void)setGotOne:(BOOL)one;
@end

