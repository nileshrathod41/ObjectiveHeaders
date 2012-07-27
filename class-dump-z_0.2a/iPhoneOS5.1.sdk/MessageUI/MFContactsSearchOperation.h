/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, MFContactsSearchManager, NSString, NSSet;

@interface MFContactsSearchOperation : XXUnknownSuperclass {
@private
	void* _addressBook;
	MFContactsSearchManager* _owner;
	NSNumber* _taskID;
	NSString* _text;
	NSSet* _properties;
}
@property(readonly, assign, nonatomic) void* addressBook;	// @synthesize=_addressBook
@property(readonly, assign, nonatomic) MFContactsSearchManager* owner;	// @synthesize=_owner
@property(readonly, assign, nonatomic) NSSet* properties;	// @synthesize=_properties
@property(readonly, assign, nonatomic) NSNumber* taskID;	// @synthesize=_taskID
@property(readonly, assign, nonatomic) NSString* text;	// @synthesize=_text
+(id)operationWithAddressBook:(void*)addressBook owner:(id)owner text:(id)text taskID:(id)anId properties:(id)properties;
// declared property getter: -(void*)addressBook;
-(void)dealloc;
// declared property getter: -(id)owner;
// declared property getter: -(id)properties;
// declared property getter: -(id)taskID;
// declared property getter: -(id)text;
-(int)type;
@end

