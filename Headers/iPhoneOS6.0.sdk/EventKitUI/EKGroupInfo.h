/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, EKSource, NSMutableArray, NSString, NSSet;

@interface EKGroupInfo : XXUnknownSuperclass {
	EKSource* _source;
	NSMutableArray* _calendars;
	BOOL _selected;
	BOOL _showSelectAllButton;
	int _customGroupType;
	NSString* _customTitle;
	NSString* _customTitleAtBeginningOfSentence;
}
@property(readonly, assign, nonatomic) NSArray* calendarInfos;
@property(readonly, assign, nonatomic) NSSet* calendarSet;
@property(readonly, assign, nonatomic) BOOL isSubscribed;
@property(readonly, assign, nonatomic) int numCalendars;
@property(readonly, assign, nonatomic) int numSelectedCalendars;
@property(assign, nonatomic) BOOL selected;	// @synthesize=_selected
@property(readonly, assign, nonatomic) NSSet* selectedCalendarSet;
@property(readonly, assign, nonatomic) BOOL showAddCalendarButton;
@property(readonly, assign, nonatomic) BOOL showCalendarNameIfSolitary;
@property(assign, nonatomic) BOOL showSelectAllButton;	// @synthesize=_showSelectAllButton
@property(readonly, assign, nonatomic) int sortOrder;
@property(retain, nonatomic) EKSource* source;
@property(readonly, assign, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) NSString* typeTitle;
-(id)init;
-(id)initWithCustomGroupType:(int)customGroupType;
-(id)initWithSource:(id)source;
-(id)calendarAtIndex:(int)index;
// declared property getter: -(id)calendarInfos;
// declared property getter: -(id)calendarSet;
-(id)copyCalendars;
-(void)dealloc;
-(id)description;
-(void)insertCalendarInfo:(id)info;
// declared property getter: -(BOOL)isSubscribed;
// declared property getter: -(int)numCalendars;
// declared property getter: -(int)numSelectedCalendars;
-(void)removeCalendar:(id)calendar;
-(void)selectAll;
-(void)selectNone;
// declared property getter: -(BOOL)selected;
// declared property getter: -(id)selectedCalendarSet;
-(void)setCustomTitle:(id)title forBeginningOfSentence:(id)sentence;
// declared property setter: -(void)setSelected:(BOOL)selected;
// declared property setter: -(void)setShowSelectAllButton:(BOOL)button;
// declared property setter: -(void)setSource:(id)source;
// declared property getter: -(BOOL)showAddCalendarButton;
// declared property getter: -(BOOL)showCalendarNameIfSolitary;
// declared property getter: -(BOOL)showSelectAllButton;
// declared property getter: -(int)sortOrder;
// declared property getter: -(id)source;
// declared property getter: -(id)title;
-(id)titleForBeginningOfSentence:(BOOL)sentence;
// declared property getter: -(id)typeTitle;
@end

