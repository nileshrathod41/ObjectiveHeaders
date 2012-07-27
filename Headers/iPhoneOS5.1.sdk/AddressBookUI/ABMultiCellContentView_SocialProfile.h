/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABMultiCellContentView_DisplayAlternate.h"
#import "AddressBookUI-Structs.h"

@class NSString;

@interface ABMultiCellContentView_SocialProfile : ABMultiCellContentView_DisplayAlternate {
}
@property(readonly, assign) NSString* placeholder;
@property(readonly, assign) NSString* service;
@property(readonly, assign) NSString* username;
-(id)displayUsername:(id)username;
-(id)editingUsername:(id)username;
// declared property getter: -(id)placeholder;
-(void)reloadDisplayText;
-(void)reloadFromModelIncludingRows:(BOOL)modelIncludingRows;
// declared property getter: -(id)service;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)textFieldTextDidChange:(id)textFieldText;
// declared property getter: -(id)username;
@end
