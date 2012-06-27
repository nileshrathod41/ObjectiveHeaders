/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABGroupWrapperDelegate.h"
#import "ABChameleonCell.h"

@class ABGroupWrapper;

@interface ABGroupTableCell : ABChameleonCell <ABGroupWrapperDelegate> {
@private
	ABGroupWrapper* _groupWrapper;
}
@property(retain, nonatomic) ABGroupWrapper* groupWrapper;	// @synthesize=_groupWrapper
-(void)dealloc;
// declared property getter: -(id)groupWrapper;
-(void)groupWrapper:(id)wrapper didBecomeSelected:(BOOL)selected;
// declared property setter: -(void)setGroupWrapper:(id)wrapper;
-(void)updateFromGroupWrapper;
@end

