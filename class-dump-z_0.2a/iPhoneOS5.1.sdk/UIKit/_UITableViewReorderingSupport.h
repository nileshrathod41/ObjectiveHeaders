/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSIndexPath, NSTimer, UIShadowView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewReorderingSupport : XXUnknownSuperclass {
@private
	UITableViewCell* _reorderedCell;
	NSIndexPath* _initialIndexPath;
	NSIndexPath* _targetIndexPath;
	unsigned _oldShowHorizontalScrollIndicator : 1;
	unsigned _oldShowVerticalScrollIndicator : 1;
	unsigned _reloadDataCalled : 1;
	unsigned _reorderingCancelled : 1;
	unsigned _reserved : 28;
	NSTimer* _autoscrollTimer;
	UIShadowView* _topShadowView;
	UIShadowView* _bottomShadowView;
	BOOL _wasScrollingEnabled;
}
@end
