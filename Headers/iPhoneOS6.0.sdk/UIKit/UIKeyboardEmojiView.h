/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIKeyboardEmoji, UIKeyboardEmojiImageView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiView : UIControl {
@private
	UIKeyboardEmoji* _emoji;
	UIView* _popup;
	UIKeyboardEmojiImageView* _imageView;
}
@property(retain) UIKeyboardEmoji* emoji;	// @synthesize=_emoji
@property(retain) UIKeyboardEmojiImageView* imageView;	// @synthesize=_imageView
@property(retain) UIView* popup;	// @synthesize=_popup
+(id)emojiViewForEmoji:(id)emoji withFrame:(CGRect)frame;
+(void)recycleEmojiView:(id)view;
-(id)initWithFrame:(CGRect)frame emoji:(id)emoji;
-(id)createAndInstallKeyPopupView;
-(void)dealloc;
// declared property getter: -(id)emoji;
// declared property getter: -(id)imageView;
// declared property getter: -(id)popup;
// declared property setter: -(void)setEmoji:(id)emoji;
-(void)setEmoji:(id)emoji withFrame:(CGRect)frame;
// declared property setter: -(void)setImageView:(id)view;
// declared property setter: -(void)setPopup:(id)popup;
-(void)uninstallPopup;
@end

