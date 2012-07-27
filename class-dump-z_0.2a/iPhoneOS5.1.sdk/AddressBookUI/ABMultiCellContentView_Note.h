/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABSwellTextViewDelegate.h"
#import "AddressBookUI-Structs.h"
#import "ABMultiCellContentView.h"

@class ABSwellTextView;

@interface ABMultiCellContentView_Note : ABMultiCellContentView <ABSwellTextViewDelegate> {
@private
	ABSwellTextView* _textView;
}
+(id)labelTextForPropertyGroup:(id)propertyGroup info:(id)info styleProvider:(id)provider;
+(CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;
+(void)setupTextView:(id)view withStyleProvider:(id)styleProvider whenEditing:(BOOL)editing;
+(id)swellTextViewForReuse;
-(BOOL)canBeginEditingAnytime;
-(void)dealloc;
-(CGRect)focusRectForView:(id)view;
-(CGRect)frameForLabel;
-(void)reload;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)style;
-(void)setLabelText:(id)text;
-(BOOL)shouldUseTwoLineLabels;
-(void)swellTextView:(id)view didChangeSize:(CGSize)size;
-(void)swellTextViewDidBeginEditing:(id)swellTextView;
-(void)swellTextViewDidEndEditing:(id)swellTextView;
-(BOOL)swellTextViewShouldBeginEditing:(id)swellTextView;
-(BOOL)swellTextViewShouldEndEditing:(id)swellTextView;
-(void)swellTextViewTextDidChange:(id)swellTextViewText;
-(BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;
-(id)viewForFirstResponder;
@end

