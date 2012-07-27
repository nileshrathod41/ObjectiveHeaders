/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABPickerViewController.h"


@interface ABRingtonePickerViewController : ABPickerViewController {
	BOOL _isTextToneViewController;
}
@property(readonly, assign, nonatomic) id tonePicker;
-(id)init;
-(id)initAsRingtoneViewController:(BOOL)controller;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(float)ab_heightToFitForViewInPopoverView;
-(void)cancelButtonClicked:(id)clicked;
-(void)loadView;
-(void)ringtoneSaveButtonClicked:(id)clicked;
// declared property getter: -(id)tonePicker;
-(void)viewWillDisappear:(BOOL)view;
@end

