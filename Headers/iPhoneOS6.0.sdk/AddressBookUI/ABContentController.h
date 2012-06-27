/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABContentControllerProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView;

@interface ABContentController : XXUnknownSuperclass <ABContentControllerProtocol> {
	void* _addressBook;
	id _contentControllerDelegate;
	UIView* _contentLayer;
}
@property(assign, nonatomic) void* addressBook;
-(id)init;
-(id)initWithContentControllerDelegate:(id)contentControllerDelegate addressBook:(void*)book;
// declared property getter: -(void*)addressBook;
-(void)back:(BOOL)back save:(BOOL)save;
-(void)cleanUpContentLayer;
-(id)contentControllerDelegate;
-(id)contentView;
-(BOOL)contentViewIsVisible;
-(void)dealloc;
-(void)displayScrollerIndicators;
-(void)preloadController;
-(void)reload;
// declared property setter: -(void)setAddressBook:(void*)book;
-(void)setContentControllerDelegate:(id)delegate;
@end

