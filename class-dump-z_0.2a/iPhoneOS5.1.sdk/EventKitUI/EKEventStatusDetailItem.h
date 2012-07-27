/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "EKEventDetailItem.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventStatusDetailItem : EKEventDetailItem {
@private
	UITableViewCell* _cell;
	BOOL _indent;
}
-(id)cellForSubitemAtIndex:(int)index;
-(BOOL)configureWithCalendar:(id)calendar preview:(BOOL)preview;
-(void)reset;
@end

