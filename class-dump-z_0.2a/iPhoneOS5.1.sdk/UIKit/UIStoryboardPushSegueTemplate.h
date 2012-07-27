/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"


__attribute__((visibility("hidden")))
@interface UIStoryboardPushSegueTemplate : UIStoryboardSegueTemplate {
@private
	int _destinationContainmentContext;
	int _splitViewControllerIndex;
}
@property(assign, nonatomic) int destinationContainmentContext;	// @synthesize=_destinationContainmentContext
@property(assign, nonatomic) int splitViewControllerIndex;	// @synthesize=_splitViewControllerIndex
-(id)initWithCoder:(id)coder;
-(id)defaultSegueClassName;
// declared property getter: -(int)destinationContainmentContext;
-(void)encodeWithCoder:(id)coder;
-(id)segueWithDestinationViewController:(id)destinationViewController;
// declared property setter: -(void)setDestinationContainmentContext:(int)context;
// declared property setter: -(void)setSplitViewControllerIndex:(int)index;
// declared property getter: -(int)splitViewControllerIndex;
@end

