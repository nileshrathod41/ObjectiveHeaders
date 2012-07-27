/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABMultiCellContentView_Rows.h"


@interface ABMultiCellContentView_Name : ABMultiCellContentView_Rows {
}
+(unsigned)rowsForPropertyGroup:(id)propertyGroup info:(id)info;
-(id)displayTextColor;
-(void)entryField:(id)field valueDidChange:(id)value forKey:(id)key;
-(id)keyboardSettingsForKey:(id)key;
-(id)labelTextColorWhenEditing:(BOOL)editing;
-(void)reload;
-(void)reloadFromModel;
-(void)reloadFromModelIncludingRows:(BOOL)modelIncludingRows;
-(void)reloadLabelFromModel;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
@end

