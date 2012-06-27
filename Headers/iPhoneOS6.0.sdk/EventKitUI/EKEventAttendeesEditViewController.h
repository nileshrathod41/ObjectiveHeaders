/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "EKEditItemViewController.h"

@class NSArray, EKEventAttendeePicker;

__attribute__((visibility("hidden")))
@interface EKEventAttendeesEditViewController : EKEditItemViewController {
@private
	EKEventAttendeePicker* _picker;
}
@property(copy, nonatomic) NSArray* attendees;
-(id)initWithFrame:(CGRect)frame;
-(id)_attendeeFromRecipient:(id)recipient;
-(id)_firstInvalidRecipientAddress;
-(id)_recipientFromAttendee:(id)attendee;
// declared property getter: -(id)attendees;
-(void)dealloc;
// declared property setter: -(void)setAttendees:(id)attendees;
-(void)setSearchAccountID:(id)anId;
-(BOOL)validateAllowingAlert:(BOOL)alert;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

