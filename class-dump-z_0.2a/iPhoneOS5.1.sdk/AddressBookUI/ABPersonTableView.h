/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ABPersonViewControllerHelper;

@interface ABPersonTableView : XXUnknownSuperclass {
	ABPersonViewControllerHelper* _helper;
}
@property(assign, nonatomic) ABPersonViewControllerHelper* helper;	// @synthesize=_helper
// declared property getter: -(id)helper;
-(void)setContentOffset:(CGPoint)offset;
// declared property setter: -(void)setHelper:(id)helper;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(BOOL)touchesShouldCancelInContentView:(id)touches;
@end

