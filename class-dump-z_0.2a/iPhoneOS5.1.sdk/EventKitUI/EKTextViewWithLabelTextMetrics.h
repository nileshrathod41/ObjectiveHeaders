/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "CalendarLabelTextMetrics.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIFont, NSString;

@interface EKTextViewWithLabelTextMetrics : XXUnknownSuperclass <CalendarLabelTextMetrics> {
@private
	int lineBreakMode;
}
@property(retain, nonatomic) UIFont* font;	// @dynamic
@property(assign, nonatomic) int lineBreakMode;	// @synthesize
@property(assign, nonatomic) int numberOfLines;
@property(copy, nonatomic) NSString* text;	// @dynamic
-(id)initWithFrame:(CGRect)frame;
// declared property getter: -(int)lineBreakMode;
// declared property getter: -(int)numberOfLines;
// declared property setter: -(void)setLineBreakMode:(int)mode;
// declared property setter: -(void)setNumberOfLines:(int)lines;
-(void)setURL:(id)url;
-(CGSize)sizeThatFits:(CGSize)fits;
-(CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(int)lines;
@end

