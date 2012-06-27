/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPickerView.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class UIDatePicker, NSDateComponents, UILabel, NSDate, NSLocale, NSCalendar, NSTimeZone, _UIDatePickerMode;

__attribute__((visibility("hidden")))
@interface _UIDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource> {
@private
	_UIDatePickerMode* _mode;
	NSTimeZone* _timeZone;
	double _countDownDuration;
	UILabel* _hourLabel;
	UILabel* _minuteLabel;
	UIDatePicker* _datePickerDelegate;
	id _delegateOfDatePicker;
	int _expectedAMPM;
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
	} _datePickerFlags;
	int _loadingDate;
	NSDate* _userSuppliedDate;
	NSDate* _userSuppliedMinimumDate;
	NSDate* _userSuppliedMaximumDate;
	NSLocale* _compositeLocale;
	NSLocale* _userProvidedLocale;
	NSCalendar* _userProvidedCalendar;
	NSDate* _minimumDate;
	NSDate* _maximumDate;
	NSDateComponents* _lastSelectedDateComponents;
}
@property(assign, nonatomic) double countDownDuration;
@property(copy, nonatomic) NSDate* date;
@property(copy, nonatomic) NSDateComponents* dateComponents;
@property(assign, nonatomic) int datePickerMode;
@property(assign, nonatomic) id delegateOfDatePicker;	// @synthesize=_delegateOfDatePicker
@property(readonly, assign, nonatomic, getter=_hasCustomCalendar) BOOL hasCustomCalendar;
@property(assign, nonatomic) BOOL highlightsToday;
@property(copy, nonatomic) NSDate* maximumDate;	// @synthesize=_userSuppliedMaximumDate
@property(copy, nonatomic) NSDate* minimumDate;	// @synthesize=_userSuppliedMinimumDate
@property(assign, nonatomic) int minuteInterval;
@property(assign, nonatomic) BOOL staggerTimeIntervals;
@property(retain, nonatomic) NSTimeZone* timeZone;	// @synthesize=_timeZone
@property(copy, nonatomic) NSCalendar* userProvidedCalendar;
@property(retain, nonatomic) NSLocale* userProvidedLocale;
@property(assign, nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome;
-(id)initWithFrame:(CGRect)frame;
-(int)_amPmValue;
-(id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)components withLastManipulatedComponent:(int)lastManipulatedComponent;
-(void)_datePickerReset:(id)reset;
-(void)_doneLoadingDateOrTime;
-(void)_fadeLabelForCalendarUnit:(unsigned)calendarUnit toText:(id)text animated:(BOOL)animated;
// declared property getter: -(BOOL)_hasCustomCalendar;
-(id)_hoursStringForHour:(int)hour;
-(id)_hrMinFont;
-(BOOL)_isCurrentCalendar:(id)calendar;
-(id)_labelForCalendarUnit:(unsigned)calendarUnit;
-(id)_lastSelectedDateComponents;
-(void)_loadDate:(id)date animated:(BOOL)animated;
-(id)_makeNewAccessoryLabel;
-(id)_minutesStringForHour:(int)hour minutes:(int)minutes;
-(void)_positionLabel:(id)label forCalendarUnit:(unsigned)calendarUnit relativeTo:(id)to order:(int)order;
-(void)_rebuildCompositeLocale;
-(void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;
-(int)_selectedHourForColumn:(int)column;
-(int)_selectedMinuteForColumn:(int)column;
-(id)_selectedTextForCalendarUnit:(unsigned)calendarUnit;
-(int)_selectionBarRowInComponent:(int)component;
-(void)_setDate:(id)date animated:(BOOL)animated forced:(BOOL)forced;
-(void)_setHidesLabels:(BOOL)labels;
-(void)_setLabel:(id)label forCalendarUnit:(unsigned)calendarUnit;
-(void)_setMode:(id)mode;
// declared property setter: -(void)_setUsesBlackChrome:(BOOL)chrome;
-(BOOL)_showingDate;
-(float)_tableRowHeight;
-(void)_todayChanged:(id)changed;
-(BOOL)_updateDateOrTime;
-(void)_updateEnabledCellsIncludingWMDCells:(BOOL)cells;
-(void)_updateLabels:(BOOL)labels;
-(BOOL)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(int)lastManipulatedComponent;
// declared property getter: -(BOOL)_usesBlackChrome;
-(id)_viewForSelectedRowInComponent:(int)component;
-(id)calendar;
-(float)contentWidth;
// declared property getter: -(double)countDownDuration;
// declared property getter: -(id)date;
// declared property getter: -(id)dateComponents;
// declared property getter: -(int)datePickerMode;
-(void)dealloc;
// declared property getter: -(id)delegateOfDatePicker;
// declared property getter: -(BOOL)highlightsToday;
-(int)hour;
-(void)layoutSubviews;
-(id)locale;
// declared property getter: -(id)maximumDate;
// declared property getter: -(id)minimumDate;
-(int)minute;
// declared property getter: -(int)minuteInterval;
-(int)numberOfComponentsInPickerView:(id)pickerView;
-(id)pickerImageNamePrefix;
-(void)pickerTableView:(id)view didChangeSelectionBarRowFrom:(int)from to:(int)to;
-(void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;
-(int)pickerView:(id)view numberOfRowsInComponent:(int)component;
-(float)pickerView:(id)view rowHeightForComponent:(int)component;
-(id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;
-(float)pickerView:(id)view widthForComponent:(int)component;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(int)second;
// declared property setter: -(void)setCountDownDuration:(double)duration;
// declared property setter: -(void)setDate:(id)date;
-(void)setDate:(id)date animated:(BOOL)animated;
// declared property setter: -(void)setDateComponents:(id)components;
// declared property setter: -(void)setDatePickerMode:(int)mode;
-(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDelegateOfDatePicker:(id)datePicker;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setHighlightsToday:(BOOL)today;
// declared property setter: -(void)setMaximumDate:(id)date;
// declared property setter: -(void)setMinimumDate:(id)date;
// declared property setter: -(void)setMinuteInterval:(int)interval;
// declared property setter: -(void)setStaggerTimeIntervals:(BOOL)intervals;
// declared property setter: -(void)setTimeZone:(id)zone;
// declared property setter: -(void)setUserProvidedCalendar:(id)calendar;
// declared property setter: -(void)setUserProvidedLocale:(id)locale;
-(id)shadowColor;
// declared property getter: -(BOOL)staggerTimeIntervals;
// declared property getter: -(id)timeZone;
// declared property getter: -(id)userProvidedCalendar;
// declared property getter: -(id)userProvidedLocale;
@end

