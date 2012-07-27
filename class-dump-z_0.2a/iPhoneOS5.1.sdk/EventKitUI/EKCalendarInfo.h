/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EKGroupInfo, EKCalendar, NSString, UIColor;

@interface EKCalendarInfo : XXUnknownSuperclass {
	EKCalendar* _calendar;
	UIColor* _color;
	BOOL _selected;
	EKGroupInfo* _group;
}
@property(retain, nonatomic) EKCalendar* calendar;
@property(retain, nonatomic) UIColor* color;	// @synthesize=_color
@property(readonly, assign, nonatomic) int displayOrder;
@property(assign, nonatomic) EKGroupInfo* group;	// @synthesize=_group
@property(readonly, assign, nonatomic) BOOL isEditable;
@property(readonly, assign, nonatomic) BOOL isShared;
@property(readonly, assign, nonatomic) BOOL isSubscribed;
@property(assign, nonatomic) BOOL selected;	// @synthesize=_selected
@property(readonly, assign, nonatomic) NSString* title;
-(id)initWithCalendar:(id)calendar;
// declared property getter: -(id)calendar;
// declared property getter: -(id)color;
-(void)dealloc;
-(id)description;
// declared property getter: -(int)displayOrder;
// declared property getter: -(id)group;
// declared property getter: -(BOOL)isEditable;
// declared property getter: -(BOOL)isShared;
// declared property getter: -(BOOL)isSubscribed;
// declared property getter: -(BOOL)selected;
// declared property setter: -(void)setCalendar:(id)calendar;
// declared property setter: -(void)setColor:(id)color;
// declared property setter: -(void)setGroup:(id)group;
// declared property setter: -(void)setSelected:(BOOL)selected;
// declared property getter: -(id)title;
@end

