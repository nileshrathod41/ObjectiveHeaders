/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITabBarButtonBadge : UIView {
@private
	UIView* _value;
	UIView* _background;
	UIView* _alternate;
}
-(id)initWithValue:(id)value blinks:(BOOL)blinks;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBlinks:(BOOL)blinks;
-(void)setValue:(id)value;
-(CGSize)sizeThatFits:(CGSize)fits;
@end

