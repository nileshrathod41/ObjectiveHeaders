/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "EKEventDetailItem.h"
#import "EKCellShortener.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventEditedByDetailItem : EKEventDetailItem <EKCellShortener> {
@private
	UITableViewCell* _cell;
}
-(id)cellForSubitemAtIndex:(int)index;
-(BOOL)configureWithCalendar:(id)calendar preview:(BOOL)preview;
-(float)defaultCellHeightForSubitemAtIndex:(int)index forWidth:(float)width;
-(id)detailViewControllerWithFrame:(CGRect)frame forSubitemAtIndex:(int)index;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned)index;
-(void)reset;
-(void)shortenCell:(id)cell;
@end

