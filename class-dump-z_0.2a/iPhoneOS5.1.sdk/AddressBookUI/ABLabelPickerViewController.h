/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABPickerViewController.h"

@class ABPropertyGroup, ABItemLabelPicker, NSString, NSArray;

@interface ABLabelPickerViewController : ABPickerViewController {
@private
	NSArray* _additionalLabels;
	NSString* _selectedLabel;
	void* _addressBook;
	ABPropertyGroup* _propertyGroup;
	int _itemIndex;
	ABItemLabelPicker* _labelPicker;
	BOOL _didCreateNewLabel;
}
@property(assign, nonatomic) BOOL didCreateNewLabel;	// @synthesize=_didCreateNewLabel
@property(retain, nonatomic) NSString* selectedLabel;	// @synthesize=_selectedLabel
-(id)initWithAddressBook:(void*)addressBook propertyGroup:(id)group itemIndex:(int)index additionalLabels:(id)labels;
-(BOOL)_allowsAutorotation;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(float)ab_heightToFitForViewInPopoverView;
-(void)dealloc;
// declared property getter: -(BOOL)didCreateNewLabel;
-(CGSize)fullScreenContentSize;
-(void)itemLabelPicker:(id)picker deletedCustomLabel:(id)label;
-(void)itemLabelPicker:(id)picker endedWithSelectionConfirmed:(BOOL)selectionConfirmed animate:(BOOL)animate;
-(void)itemLabelPickerDeletedLastCustomLabel:(id)label;
-(void)itemLabelPickerDidChangeSelection:(id)itemLabelPicker;
-(BOOL)itemLabelPickerShouldDismissKeyboard:(id)itemLabelPicker;
-(id)labelPicker;
-(void)loadView;
// declared property getter: -(id)selectedLabel;
-(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDidCreateNewLabel:(BOOL)createNewLabel;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
// declared property setter: -(void)setSelectedLabel:(id)label;
-(void)setStyleProvider:(id)provider;
-(void)viewWillAppear:(BOOL)view;
@end

