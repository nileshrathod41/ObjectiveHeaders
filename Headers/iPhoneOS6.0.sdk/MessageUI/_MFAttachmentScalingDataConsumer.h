/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MFGenericAttachmentStore, MFConditionLock;

@interface _MFAttachmentScalingDataConsumer : XXUnknownSuperclass {
	MFGenericAttachmentStore* _store;
	MFConditionLock* _lock;
}
@property(assign, nonatomic) MFConditionLock* lock;	// @synthesize=_lock
@property(assign, nonatomic) MFGenericAttachmentStore* store;	// @synthesize=_store
-(int)appendData:(id)data;
// declared property getter: -(id)lock;
// declared property setter: -(void)setLock:(id)lock;
// declared property setter: -(void)setStore:(id)store;
// declared property getter: -(id)store;
@end

