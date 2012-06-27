/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKCellShortener.h"
#import "EKTimeZoneViewControllerDelegate.h"
#import "UITableViewDelegate.h"
#import "EventKitUI-Structs.h"
#import "UITableViewDataSource.h"
#import "EKEditItemViewController.h"

@class NSTimeZone, EKPickerTableView;

__attribute__((visibility("hidden")))
@interface EKEventDateEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKCellShortener, EKTimeZoneViewControllerDelegate> {
@private
	EKPickerTableView* _contentView;
	XXStruct_lQVxyC _startGr;
	XXStruct_lQVxyC _endGr;
	int _lastSelectedRow;
	BOOL _allDay;
	unsigned _showsAllDaySwitch : 1;
	unsigned _changingDate : 1;
	unsigned _switchChanging : 1;
	unsigned _endTimeWasMessedUp : 1;
	unsigned _dontAnimateDateChange : 1;
	int _shorteningStatus;
	NSTimeZone* _timeZone;
	BOOL _showsTimeZone;
}
@property(assign, nonatomic) BOOL showsAllDaySwitch;	// @synthesize=_showsAllDaySwitch
@property(assign, nonatomic) BOOL showsTimeZone;	// @synthesize=_showsTimeZone
@property(copy, nonatomic) NSTimeZone* timeZone;	// @synthesize=_timeZone
-(id)initWithFrame:(CGRect)frame;
-(void)_allDayChanged:(id)changed;
-(int)_allDayRow;
-(BOOL)_cellShouldUseShortDate:(id)_cell;
-(id)_dateColor;
-(BOOL)_endDateIsBeforeStartDate;
-(int)_endDateRow;
-(void)_localeChanged;
-(void)_pickNextReasonableTime;
-(void)_resetStartString:(BOOL)string endString:(BOOL)string2;
-(int)_rowForSubitem:(int)subitem;
-(int)_startDateRow;
-(int)_subitemAtRow:(int)row;
-(id)_timeZoneDescription;
-(int)_timeZoneRow;
-(void)_updateDateColors;
-(void)_updateDatePicker;
-(void)_updateTimeWidths;
-(BOOL)calendarPreferencesTable:(id)table canSelectRow:(int)row inGroup:(int)group;
-(void)datePickerChanged:(id)changed;
-(void)dealloc;
-(XXStruct_lQVxyC)endDate;
-(BOOL)fitsPopoverWhenKeyboardActive;
-(BOOL)isAllDay;
-(void)loadView;
-(id)navigationTitle;
-(void)setAllDay:(BOOL)day;
-(void)setEndDate:(XXStruct_lQVxyC)date;
// declared property setter: -(void)setShowsAllDaySwitch:(BOOL)aSwitch;
// declared property setter: -(void)setShowsTimeZone:(BOOL)zone;
-(void)setStartDate:(XXStruct_lQVxyC)date;
// declared property setter: -(void)setTimeZone:(id)zone;
-(void)shortenCell:(id)cell;
// declared property getter: -(BOOL)showsAllDaySwitch;
// declared property getter: -(BOOL)showsTimeZone;
-(XXStruct_lQVxyC)startDate;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(BOOL)tableView:(id)view wantsHeaderForSection:(int)section;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
// declared property getter: -(id)timeZone;
-(void)timeZoneViewController:(id)controller didSelectTimeZone:(id)zone;
-(void)timeZoneViewControllerDidCancel:(id)timeZoneViewController;
-(BOOL)validateAllowingAlert:(BOOL)alert;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

