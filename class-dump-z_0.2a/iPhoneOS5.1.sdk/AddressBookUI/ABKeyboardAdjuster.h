/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet;

@interface ABKeyboardAdjuster : XXUnknownSuperclass {
@private
	NSMutableSet* _adjustmentRecords;
	BOOL _active;
}
@property(assign, nonatomic) BOOL active;	// @synthesize=_active
+(id)sharedAdjuster;
-(id)init;
-(void)_adjustTableForKeyboardInfo:(id)keyboardInfo;
-(void)_keyboardWillHide:(id)_keyboard;
-(void)_keyboardWillShow:(id)_keyboard;
// declared property getter: -(BOOL)active;
-(void)addScrollView:(id)view;
-(void)cancelDelayedAdjustmentsForView:(id)view;
-(BOOL)containsScrollView:(id)view;
-(void)dateFieldDateDidBeginEditingNotification:(id)dateFieldDate;
-(void)dateFieldDateDidEndEditingNotification:(id)dateFieldDate;
-(void)dealloc;
-(void)manuallyAdjustEdgeInsets:(UIEdgeInsets)insets force:(BOOL)force;
-(id)recordForScrollView:(id)scrollView;
-(void)removeScrollView:(id)view;
-(void)resetAdjustment;
// declared property setter: -(void)setActive:(BOOL)active;
-(BOOL)shouldForceAutomaticKeyboardForView:(id)view;
-(void)textFieldTextDidBeginEditingNotification:(id)textFieldText;
-(void)textFieldTextDidEndEditingNotification:(id)textFieldText;
-(void)textViewTextDidBeginEditingNotification:(id)textViewText;
-(void)textViewTextDidEndEditingNotification:(id)textViewText;
@end

