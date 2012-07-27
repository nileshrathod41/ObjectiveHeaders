/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKEventDetailCell.h"

@class UITextView, UILabel;

__attribute__((visibility("hidden")))
@interface EKEventDetailURLCell : EKEventDetailCell {
@private
	UILabel* _URLTitleView;
	UITextView* _URLView;
}
-(id)initWithEvent:(id)event editable:(BOOL)editable style:(int)style;
-(id)_URLTitleView;
-(id)_URLView;
-(void)layoutForWidth:(float)width position:(int)position;
-(void)setURL:(id)url;
-(BOOL)update;
@end

