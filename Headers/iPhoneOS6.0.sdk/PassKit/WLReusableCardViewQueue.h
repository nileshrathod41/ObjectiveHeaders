/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet;

@interface WLReusableCardViewQueue : XXUnknownSuperclass {
	NSMutableSet* _cardViews;
}
-(id)initWithCount:(unsigned)count;
-(void)dealloc;
-(id)dequeueReusableCardView;
-(void)enqueueReusableCardView:(id)view;
@end

