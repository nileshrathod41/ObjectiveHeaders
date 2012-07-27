/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKPadAllDayView.h"
#import "EventKitUI-Structs.h"


@interface EKPadDayAllDayView : EKPadAllDayView {
}
-(id)initWithFrame:(CGRect)frame orientation:(int)orientation numberOfDaysToDisplay:(unsigned)display opaque:(BOOL)opaque backgroundColor:(id)color scrollbarShowsInside:(BOOL)inside;
-(id)_calendarOrderSortDescriptor;
-(void)buildDayLabel;
-(float)faderInset;
-(id)getSortedBlocksFromOccurrenceBlocks:(id)occurrenceBlocks;
-(id)makeAllDayLabel:(BOOL)label;
-(void)updateDayLabels;
@end

