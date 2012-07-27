/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABMultiCellContentView.h"
#import "UITextFieldDelegate.h"

@class NSString, ABHighlightingTextField;

@interface ABMultiCellContentView_Simple : ABMultiCellContentView <UITextFieldDelegate> {
	ABHighlightingTextField* _textField;
	NSString* _previousValue;
}
@property(readonly, assign, nonatomic) NSString* text;
+(CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;
-(BOOL)canHandleProperty:(int)property;
-(void)dealloc;
-(id)hitTestForTouches:(id)touches withEvent:(id)event;
-(BOOL)isValidValue:(id)value;
-(id)pickerView;
-(void)reload;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)style;
-(void)setPropertyGroup:(id)group andInfo:(id)info;
-(BOOL)shouldSendTouchesToSuperviewForHitView:(id)hitView;
-(XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;
-(BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;
// declared property getter: -(id)text;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldTextDidChange:(id)textFieldText;
-(void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;
-(id)viewForFirstResponder;
-(BOOL)wantsLabelDivider;
@end

