/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABUILabelWithPlaceholder.h"

@class UIDatePicker, NSDate, UIButton;
@protocol ABDateFieldDelegate, ABDatePickerPresentationDelegate;

@interface ABDateField : ABUILabelWithPlaceholder {
@private
	UIButton* _clearButton;
	BOOL _isClearButtonEnabled;
	NSDate* _date;
	UIDatePicker* _datePicker;
	CGSize _datePickerSize;
	BOOL _usesDatePickerAsInputView;
	BOOL _isFirstResponder;
	BOOL _inBecomeFirstResponder;
	BOOL _editable;
	id<ABDateFieldDelegate> _delegate;
	id<ABDatePickerPresentationDelegate> _presentationDelegate;
}
@property(retain, nonatomic) NSDate* date;	// @synthesize=_date
@property(assign, nonatomic) CGSize datePickerSize;	// @synthesize=_datePickerSize
@property(assign, nonatomic) id<ABDateFieldDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// @synthesize=_editable
@property(assign, nonatomic) id<ABDatePickerPresentationDelegate> presentationDelegate;	// @synthesize=_presentationDelegate
-(id)initWithFrame:(CGRect)frame;
-(void)_attachToDatePicker:(id)datePicker;
-(id)_clearButton;
-(void)_clearButtonPressed:(id)pressed;
-(CGRect)_clearButtonRectForBounds:(CGRect)bounds;
-(CGSize)_clearButtonSize;
-(CGRect)_contentRectForBounds:(CGRect)bounds;
-(CGRect)_contentRectForBounds:(CGRect)bounds isClearButtonPresent:(BOOL)present;
-(void)_dettachFromDatePicker:(id)datePicker;
-(float)_extraWidthForClearButton;
-(void)_setClearButtonEnabled:(BOOL)enabled;
-(void)_setDate:(id)date andInformDelegate:(BOOL)delegate;
-(BOOL)_shouldEnableClearButton;
-(void)_updateClearButton;
-(void)_updateLabelText;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
// declared property getter: -(id)date;
-(void)datePickerDateDidChange:(id)datePickerDate;
// declared property getter: -(CGSize)datePickerSize;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)endEditing;
-(id)inputView;
// declared property getter: -(BOOL)isEditable;
-(void)layoutSubviews;
// declared property getter: -(id)presentationDelegate;
-(BOOL)resignFirstResponder;
// declared property setter: -(void)setDate:(id)date;
// declared property setter: -(void)setDatePickerSize:(CGSize)size;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setEditable:(BOOL)editable;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setPresentationDelegate:(id)delegate;
-(void)setUserInteractionEnabled:(BOOL)enabled;
-(CGSize)sizeThatFits:(CGSize)fits;
@end

