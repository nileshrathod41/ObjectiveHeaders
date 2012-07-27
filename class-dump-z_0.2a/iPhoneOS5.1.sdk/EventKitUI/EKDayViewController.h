/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKDayViewDataSource.h"
#import "EKEventGestureControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "EKDayViewDelegate.h"

@class EKEventGestureController, CalendarOccurrencesCollection, EKDayView, UIView, NSDateComponents, NSCalendar, UIScrollView, EKDayBannerView;
@protocol EKDayViewControllerDelegate, EKDayViewControllerDataSource;

@interface EKDayViewController : XXUnknownSuperclass <EKDayViewDelegate, EKDayViewDataSource, UIScrollViewDelegate, EKEventGestureControllerDelegate> {
@private
	EKDayBannerView* _banner;
	UIView* _clipView;
	UIScrollView* _horizontalScrollingView;
	EKDayView* _previousDay;
	EKDayView* _currentDay;
	EKDayView* _nextDay;
	UIView* _previousDayWithGutter;
	UIView* _currentDayWithGutter;
	UIView* _nextDayWithGutter;
	unsigned _scrollViewAnimating : 1;
	unsigned _hasPendingNextDate : 1;
	NSDateComponents* _pendingNextDate;
	unsigned _hasPendingPreviousDate : 1;
	NSDateComponents* _pendingPreviousDate;
	unsigned _decelerating : 1;
	unsigned _settingDateFromScrolling : 1;
	CalendarOccurrencesCollection* _occurrences;
	CalendarOccurrencesCollection* _previousDayOccurrences;
	CalendarOccurrencesCollection* _nextDayOccurrences;
	EKEventGestureController* _eventGestureController;
	NSCalendar* _calendar;
	NSDateComponents* _displayDate;
	NSDateComponents* _originalDisplayDate;
	double _dayStart;
	double _dayEnd;
	BOOL _showsBanner;
	BOOL _allowsDaySwitching;
	BOOL _allowsSelection;
	BOOL _initialLoad;
	BOOL _instigatedDateChange;
	id<EKDayViewControllerDelegate> _delegate;
	id<EKDayViewControllerDataSource> _dataSource;
}
@property(assign, nonatomic) BOOL allowsDaySwitching;
@property(assign, nonatomic) BOOL allowsSelection;
@property(copy, nonatomic) NSCalendar* calendar;	// @synthesize=_calendar
@property(assign, nonatomic) id<EKDayViewControllerDataSource> dataSource;	// @synthesize=_dataSource
@property(assign, nonatomic) id<EKDayViewControllerDelegate> delegate;	// @synthesize=_delegate
@property(copy, nonatomic) NSDateComponents* displayDate;
@property(copy, nonatomic) NSDateComponents* pendingNextDate;	// @synthesize=_pendingNextDate
@property(copy, nonatomic) NSDateComponents* pendingPreviousDate;	// @synthesize=_pendingPreviousDate
@property(assign, nonatomic) BOOL showsBanner;
+(id)_createGutterDayViewWithDayView:(id)dayView;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)_createBannerView;
-(void)_delayedScrollDayViewAfterAppearence;
-(void)_disposeBannerView;
-(id)_eventsForDay:(id)day;
-(void)_highlightDayViewDate:(double)date isAllDay:(BOOL)day;
-(void)_localeChanged;
-(void)_notifyDelegateOfSelectedDateChange;
-(id)_occurrencesForDayView:(id)dayView;
-(void)_relayoutDays;
-(void)_relayoutDaysDuringScrolling;
-(void)_releaseViews;
-(void)_scrollDayViewAfterAppearence:(BOOL)appearence;
-(void)_setDayView:(id)view toDate:(id)date;
-(void)_setDisplayDate:(id)date forRepeat:(BOOL)repeat;
-(void)_setDisplayDateInternal:(id)internal;
-(void)_setNextAndPreviousFirstVisibleSecondToCurrent;
// declared property getter: -(BOOL)allowsDaySwitching;
// declared property getter: -(BOOL)allowsSelection;
-(void)applicationDidBecomeActive;
-(void)bringEventToFront:(id)front;
// declared property getter: -(id)calendar;
-(void)calendarDayBanner:(id)banner arrowClicked:(int)clicked forRepeat:(BOOL)repeat;
-(id)createEventForEventGestureController:(id)eventGestureController;
-(id)createOccurrenceViewForEventGestureController:(id)eventGestureController;
// declared property getter: -(id)dataSource;
-(void)dayView:(id)view didCreateOccurrenceViews:(id)views;
-(void)dayView:(id)view didSelectEvent:(id)event;
-(id)dayView:(id)view eventsForStartDate:(id)startDate endDate:(id)date;
-(void)dayView:(id)view firstVisibleSecondChanged:(unsigned)changed;
-(void)dayViewDidTapEmptySpace:(id)dayView;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(BOOL)didScrollWhenEventGestureController:(id)controller scrollTimerFiredToMoveLeft:(BOOL)moveLeft right:(BOOL)right vertically:(BOOL)vertically towardPoint:(CGPoint)point;
// declared property getter: -(id)displayDate;
-(void)editorDidCancelEditingEvent:(id)editor;
-(void)editorDidDeleteEvent:(id)editor;
-(void)editorDidSaveEvent:(id)editor;
-(void)eventGestureController:(id)controller addViewToScroller:(id)scroller isAllDay:(BOOL)day;
-(void)eventGestureController:(id)controller adjustDraggingViewForAllDay:(BOOL)allDay;
-(double)eventGestureController:(id)controller dateAtPoint:(CGPoint)point;
-(void)eventGestureController:(id)controller didCancelEditingOccurrence:(id)occurrence fadedOut:(BOOL)anOut;
-(BOOL)eventGestureController:(id)controller didCommitOccurrence:(id)occurrence toDate:(double)date isAllDay:(BOOL)day span:(int)span;
-(void)eventGestureController:(id)controller didMoveToDate:(double)date isAllDay:(BOOL)day;
-(void)eventGestureController:(id)controller didSetUpAtDate:(double)date isAllDay:(BOOL)day;
-(void)eventGestureController:(id)controller didSingleTapOccurrence:(id)occurrence;
-(float)eventGestureController:(id)controller heightForOccurrenceViewOfDuration:(double)duration allDay:(BOOL)day;
-(BOOL)eventGestureController:(id)controller isAllDayAtPoint:(CGPoint)point requireInsistence:(BOOL)insistence;
-(id)eventGestureController:(id)controller occurrenceViewAtPoint:(CGPoint)point;
-(CGPoint)eventGestureController:(id)controller pointAtDate:(double)date isAllDay:(BOOL)day;
-(float)eventGestureController:(id)controller widthForOccurrenceViewOfDays:(unsigned)days;
-(float)eventGestureController:(id)controller yPositionPerhapsMatchingAllDayOccurrence:(id)occurrence atPoint:(CGPoint)point;
-(BOOL)eventGestureControllerShouldAllowLongPress:(id)eventGestureController;
-(id)eventsForStartDate:(id)startDate endDate:(id)date;
-(unsigned)firstVisibleSecond;
-(float)horizontalOffsetForPagingForEventGestureController:(id)eventGestureController;
-(void)layoutContainerView:(id)view;
-(void)loadView;
-(id)occurrenceViewSuperviewForEventGestureController:(id)eventGestureController;
// declared property getter: -(id)pendingNextDate;
// declared property getter: -(id)pendingPreviousDate;
-(void)reloadData;
-(void)reloadDataBetweenStart:(id)start end:(id)end;
-(void)scrollEventIntoView:(id)view animated:(BOOL)animated;
-(void)scrollEventsIntoViewAnimated:(BOOL)animated;
-(void)scrollToNow:(BOOL)now;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewWillBeginDecelerating:(id)scrollView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
// declared property setter: -(void)setAllowsDaySwitching:(BOOL)switching;
// declared property setter: -(void)setAllowsSelection:(BOOL)selection;
// declared property setter: -(void)setCalendar:(id)calendar;
// declared property setter: -(void)setDataSource:(id)source;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDisplayDate:(id)date;
// declared property setter: -(void)setPendingNextDate:(id)date;
// declared property setter: -(void)setPendingPreviousDate:(id)date;
// declared property setter: -(void)setShowsBanner:(BOOL)banner;
-(void)setTimeZone:(id)zone;
// declared property getter: -(BOOL)showsBanner;
-(float)timedRegionOriginForEventGestureController:(id)eventGestureController;
-(id)touchTrackingViewForEventGestureController:(id)eventGestureController;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

