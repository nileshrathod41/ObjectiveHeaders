/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"
#import "UITableViewCellLayoutManager.h"


__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate> {
}
-(void)_textFieldEndEditing:(id)editing;
-(void)_textFieldEndEditingOnReturn:(id)aReturn;
-(void)_textFieldStartEditing:(id)editing;
-(void)_textValueChanged:(id)changed;
-(float)defaultTextFieldFontSizeForCell:(id)cell;
-(id)detailTextLabelForCell:(id)cell;
-(id)editableTextFieldForCell:(id)cell;
-(void)layoutSubviewsOfCell:(id)cell;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(id)textLabelForCell:(id)cell;
@end

