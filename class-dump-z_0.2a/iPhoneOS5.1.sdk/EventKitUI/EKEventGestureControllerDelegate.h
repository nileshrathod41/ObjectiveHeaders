/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "NSObject.h"


@protocol EKEventGestureControllerDelegate <NSObject>
@optional
-(float)computeXDragOffsetForEventGestureController:(id)eventGestureController currentX:(float)x startX:(float)x3;
@required
-(id)createEventForEventGestureController:(id)eventGestureController;
-(id)createOccurrenceViewForEventGestureController:(id)eventGestureController;
-(BOOL)didScrollWhenEventGestureController:(id)controller scrollTimerFiredToMoveLeft:(BOOL)moveLeft right:(BOOL)right vertically:(BOOL)vertically towardPoint:(CGPoint)point;
@optional
-(BOOL)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)eventGestureController;
@required
-(void)eventGestureController:(id)controller addViewToScroller:(id)scroller isAllDay:(BOOL)day;
-(void)eventGestureController:(id)controller adjustDraggingViewForAllDay:(BOOL)allDay;
@optional
-(float)eventGestureController:(id)controller convertXForMargin:(float)margin;
@required
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
@optional
-(BOOL)eventGestureControllerShouldAllowLongPress:(id)eventGestureController;
-(float)horizontalOffsetForPagingForEventGestureController:(id)eventGestureController;
-(CGRect)marginFrameForEventGestureController:(id)eventGestureController;
-(BOOL)moreThanOneDayVisibleForEventGestureController:(id)eventGestureController;
@required
-(id)occurrenceViewSuperviewForEventGestureController:(id)eventGestureController;
@optional
-(float)pageChangeMarginForEventGestureController:(id)eventGestureController;
@required
-(float)timedRegionOriginForEventGestureController:(id)eventGestureController;
-(id)touchTrackingViewForEventGestureController:(id)eventGestureController;
@end

