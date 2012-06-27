/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABMultiCellContentView_Simple.h"

@class UIButton;

@interface ABMultiCellContentView_RelatedName : ABMultiCellContentView_Simple {
	UIButton* _accessoryButton;
}
@property(readonly, assign, nonatomic) UIButton* accessoryButton;	// @synthesize=_accessoryButton
+(void)setupRelatedNamesView:(id)view withStyleProvider:(id)styleProvider;
// declared property getter: -(id)accessoryButton;
-(void)dealloc;
-(void)setName:(id)name;
@end

