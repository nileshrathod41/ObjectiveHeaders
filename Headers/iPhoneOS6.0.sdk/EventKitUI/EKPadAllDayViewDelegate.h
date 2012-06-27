/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "NSObject.h"


@protocol EKPadAllDayViewDelegate <NSObject>
@optional
-(void)padAllDayView:(id)view didCreateOccurrenceViews:(id)views;
-(void)padAllDayView:(id)view didFinishScrollingToOccurrence:(id)occurrence;
-(void)padAllDayView:(id)view didSelectEvent:(id)event;
-(void)padAllDayView:(id)view occurrenceClicked:(id)clicked onDay:(double)day;
-(void)padAllDayView:(id)view occurrenceDragExited:(id)exited;
-(void)padAllDayView:(id)view occurrencePressed:(id)pressed onDay:(double)day;
-(void)padAllDayViewEmptySpaceClick:(id)click onDay:(double)day;
-(void)padAllDayViewStartDrag:(id)drag;
@end

