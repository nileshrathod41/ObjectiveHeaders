/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSObject, MFLock, MailMessage, NSArray, MessageBody, ActivityMonitor, MimePart, MFError;
@protocol MFMessageViewingContextDelegate;

@interface MFMessageViewingContext : XXUnknownSuperclass {
	NSObject<MFMessageViewingContextDelegate>* _delegate;
	MailMessage* _message;
	MessageBody* _body;
	id _content;
	MFLock* _contentLock;
	ActivityMonitor* _loadTask;
	MimePart* _loadedPart;
	NSArray* _signers;
	MFError* _secureMIMEError;
	CFDictionaryRef _progresses;
	NSTimer* _updater;
	unsigned _contentOffset;
	unsigned _loadIncrement;
	unsigned _loadedFullData : 1;
	unsigned _loadBestAlternative : 1;
	unsigned _hasNoContent : 1;
	unsigned _failedToLoad : 1;
	unsigned _isOutgoingMessage : 1;
	unsigned _isDraftMessage : 1;
	unsigned _isEditableMessage : 1;
}
@property(readonly, assign, nonatomic) id content;
@property(readonly, assign, nonatomic) unsigned contentOffset;	// @synthesize=_contentOffset
@property(assign, nonatomic) NSObject<MFMessageViewingContextDelegate>* delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL failedToLoad;
@property(readonly, assign, nonatomic) BOOL hasLoaded;
@property(readonly, assign, nonatomic) BOOL hasNoContent;
@property(assign, nonatomic) BOOL isDraftMessage;
@property(assign, nonatomic) BOOL isEditableMessage;
@property(readonly, assign, nonatomic) BOOL isMessageEncrypted;
@property(readonly, assign, nonatomic) BOOL isMessageSigned;
@property(assign, nonatomic) BOOL isOutgoingMessage;
@property(readonly, assign, nonatomic) BOOL isPartial;
@property(readonly, assign, nonatomic) ActivityMonitor* loadTask;	// @synthesize=_loadTask
@property(readonly, assign, nonatomic) MimePart* loadedPart;	// @synthesize=_loadedPart
@property(readonly, assign, nonatomic) MailMessage* message;	// @synthesize=_message
@property(readonly, assign, nonatomic) MessageBody* messageBody;	// @synthesize=_body
@property(readonly, assign, nonatomic) MFError* secureMimeError;	// @synthesize=_secureMIMEError
@property(readonly, assign, nonatomic) NSArray* signers;	// @synthesize=_signers
+(unsigned)nextOffsetForOffset:(unsigned)offset totalLength:(unsigned)length requestedAmount:(unsigned)amount;
-(id)initWithMessage:(id)message;
-(void)_loadAttachments:(id)attachments;
-(void)_notifyAttachmentComplete:(id)complete monitor:(id)monitor;
-(void)_notifyCompletelyComplete;
-(void)_notifyFullMessageLoadFailed;
-(void)_notifyInitialLoadComplete;
-(void)_setContent:(id)content;
-(void)_setContentOffset:(unsigned)offset;
-(void)_setLoadedPart:(id)part;
-(void)_setMessageBody:(id)body;
-(void)_setSecureMIMEError:(id)error;
-(void)_setSigners:(id)signers;
-(void)_updateProgress:(id)progress;
-(id)attachments;
-(void)cancelLoad;
// declared property getter: -(id)content;
// declared property getter: -(unsigned)contentOffset;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(BOOL)failedToLoad;
-(id)fileWrappersForImageAttachments;
// declared property getter: -(BOOL)hasLoaded;
// declared property getter: -(BOOL)hasNoContent;
// declared property getter: -(BOOL)isDraftMessage;
// declared property getter: -(BOOL)isEditableMessage;
// declared property getter: -(BOOL)isMessageEncrypted;
// declared property getter: -(BOOL)isMessageSigned;
// declared property getter: -(BOOL)isOutgoingMessage;
// declared property getter: -(BOOL)isPartial;
-(void)load;
-(void)loadAsPlainText:(BOOL)text asHTML:(BOOL)html downloadIfNecessary:(BOOL)necessary;
-(void)loadAttachment:(id)attachment progress:(id)progress;
-(void)loadBestAlternative;
-(void)loadFull;
-(void)loadMore;
// declared property getter: -(id)loadTask;
-(void)loadWithPriority:(int)priority;
// declared property getter: -(id)loadedPart;
// declared property getter: -(id)message;
// declared property getter: -(id)messageBody;
-(unsigned)numberOfImageAttachments;
// declared property getter: -(id)secureMimeError;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setIsDraftMessage:(BOOL)message;
// declared property setter: -(void)setIsEditableMessage:(BOOL)message;
// declared property setter: -(void)setIsOutgoingMessage:(BOOL)message;
-(void)setLoadTask:(id)task;
// declared property getter: -(id)signers;
-(id)uniqueID;
-(void)unload;
@end

