/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EKExpandingTextView, NSString;

@interface EKReminderInlineEditItemCell : XXUnknownSuperclass {
	float _lastSeenContentWidth;
@private
	EKExpandingTextView* _textView;
	float _verticalPadding;
}
@property(copy, nonatomic) NSString* placeholder;
@property(readonly, assign, nonatomic) EKExpandingTextView* textView;	// @synthesize=_textView
@property(assign, nonatomic) float verticalPadding;	// @synthesize=_verticalPadding
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(float)_textViewWidthForContentWidth:(float)contentWidth;
-(void)dealloc;
-(float)heightNeededForContentWidth:(float)contentWidth;
-(void)layoutSubviews;
// declared property getter: -(id)placeholder;
// declared property setter: -(void)setPlaceholder:(id)placeholder;
// declared property setter: -(void)setVerticalPadding:(float)padding;
// declared property getter: -(id)textView;
// declared property getter: -(float)verticalPadding;
@end

