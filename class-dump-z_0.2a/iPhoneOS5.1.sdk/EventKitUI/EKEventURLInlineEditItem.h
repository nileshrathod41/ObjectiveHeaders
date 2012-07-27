/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "EKEventEditItem.h"
#import "UITextFieldDelegate.h"

@class CalendarURLCell, UIResponder;

__attribute__((visibility("hidden")))
@interface EKEventURLInlineEditItem : EKEventEditItem <UITextFieldDelegate> {
@private
	CalendarURLCell* _cell;
	UIResponder* _selectedTextField;
}
@property(retain, nonatomic) UIResponder* selectedResponder;	// @synthesize=_selectedTextField
-(BOOL)canBeConfiguredForCalendarConstraints:(id)calendarConstraints;
-(id)cellForSubitemAtIndex:(int)index;
-(void)dealloc;
-(float)defaultCellHeightForSubitemAtIndex:(int)index forWidth:(float)width;
-(BOOL)isInline;
-(void)reset;
-(BOOL)saveAndDismissWithForce:(BOOL)force;
// declared property getter: -(id)selectedResponder;
-(id)selectedTextField;
// declared property setter: -(void)setSelectedResponder:(id)responder;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
@end

