/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIButton.h"
#import "UIKit-Structs.h"

@class UIActivity;

__attribute__((visibility("hidden")))
@interface UIActivityButton : UIButton {
@private
	UIActivity* _activity;
}
@property(retain, nonatomic) UIActivity* activity;	// @synthesize=_activity
+(id)activityButtonForActivity:(id)activity activityTitle:(id)title;
// declared property getter: -(id)activity;
-(CGRect)contentRectForBounds:(CGRect)bounds;
-(void)dealloc;
-(CGRect)imageRectForContentRect:(CGRect)contentRect;
-(void)reloadActivityImage;
-(void)sendAction:(SEL)action to:(id)to forEvent:(id)event;
// declared property setter: -(void)setActivity:(id)activity;
-(CGRect)titleRectForContentRect:(CGRect)contentRect;
@end

