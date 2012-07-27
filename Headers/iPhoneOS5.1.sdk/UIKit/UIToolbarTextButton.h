/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIToolbarButton.h"

@class NSString, NSSet;

__attribute__((visibility("hidden")))
@interface UIToolbarTextButton : UIToolbarButton {
@private
	NSString* _title;
	NSString* _pressedTitle;
	NSSet* _possibleTitles;
}
-(id)initWithTitle:(id)title pressedTitle:(id)title2 withFont:(id)font withBarStyle:(int)barStyle withStyle:(int)style withTitleWidth:(float)titleWidth possibleTitles:(id)titles withToolbarTintColor:(id)toolbarTintColor;
-(void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;
-(id)_scriptingInfo;
-(void)_setPressed:(BOOL)pressed;
-(void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;
-(void)dealloc;
@end
