/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ABPersonTableActionDelegate.h"

@class ABPersonTableAction, UIView, NSString, UIButton;
@protocol ABStyleProvider;

@interface ABPersonTableFooterView : XXUnknownSuperclass <ABPersonTableActionDelegate> {
@private
	BOOL _editing;
	ABPersonTableAction* _deleteAction;
	UIView* _deleteView;
	UIView* _accessoryView;
	UIButton* _attributionButton;
	id<ABStyleProvider> _styleProvider;
}
@property(retain, nonatomic) UIView* accessoryView;	// @synthesize=_accessoryView
@property(readonly, assign, nonatomic) NSString* attribution;
@property(readonly, assign, nonatomic, getter=isAttributionEnabled) BOOL attributionEnabled;
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// @synthesize=_styleProvider
@property(assign, nonatomic, getter=isEditing) BOOL tableEditing;	// @synthesize=_editing
-(id)initWithFrame:(CGRect)frame;
// declared property getter: -(id)accessoryView;
// declared property getter: -(id)attribution;
-(CGRect)attributionFrame;
-(void)dealloc;
-(CGRect)deleteViewFrame;
// declared property getter: -(BOOL)isAttributionEnabled;
// declared property getter: -(BOOL)isEditing;
-(void)layoutSubviews;
-(void)removeDeleteAction;
// declared property setter: -(void)setAccessoryView:(id)view;
-(void)setAttribution:(id)attribution enabled:(BOOL)enabled target:(id)target action:(SEL)action;
-(void)setDeleteActionWithTitle:(id)title target:(id)target selector:(SEL)selector animated:(BOOL)animated;
-(void)setEditing:(BOOL)editing;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
// declared property setter: -(void)setStyleProvider:(id)provider;
// declared property setter: -(void)setTableEditing:(BOOL)editing;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(id)styleProvider;
@end

