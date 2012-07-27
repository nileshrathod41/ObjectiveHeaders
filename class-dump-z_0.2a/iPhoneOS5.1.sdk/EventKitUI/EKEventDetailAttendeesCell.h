/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKEventDetailCell.h"

@class EKEventDetailAttendeesListView;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesCell : EKEventDetailCell {
@private
	EKEventDetailAttendeesListView* _attendeesListView;
}
-(id)initWithEvent:(id)event editable:(BOOL)editable;
-(id)_attendeesListView;
-(void)dealloc;
-(void)layoutForWidth:(float)width position:(int)position;
-(void)setAttendees:(id)attendees;
-(BOOL)update;
-(id)viewControllerForCell;
@end
