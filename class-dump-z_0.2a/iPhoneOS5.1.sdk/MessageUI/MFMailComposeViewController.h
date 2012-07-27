/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol MFMailComposeViewControllerDelegate;

@interface MFMailComposeViewController : XXUnknownSuperclass {
@private
	id _internal;
}
@property(assign, nonatomic) id<MFMailComposeViewControllerDelegate> mailComposeDelegate;
+(BOOL)canSendMail;
+(BOOL)hasAutosavedMessageWithIdentifier:(id)identifier;
+(void)removeAutosavedMessageWithIdentifier:(id)identifier;
-(id)initWithComposition:(id)composition;
-(id)initWithComposition:(id)composition contentSize:(CGSize)size mailComposeControllerOptions:(unsigned)options;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)initWithURL:(id)url;
-(id)_mailComposeController;
-(id)_mailComposeView;
-(id)_rootViewController;
-(void)_setCompositionContext:(id)context;
-(id)_validEmailAddressesFromArray:(id)array;
-(void)addAttachmentData:(id)data mimeType:(id)type fileName:(id)name;
-(void)autosaveWithHandler:(id)handler;
-(void)dealloc;
-(CGRect)frameForAttachmentWithIdentifier:(id)identifier;
-(BOOL)isDirty;
// declared property getter: -(id)mailComposeDelegate;
-(id)performAutosaveImmediately;
-(void)recoverAutosavedMessageWithIdentifier:(id)identifier;
-(int)resolution;
-(void)scrollToTopAnimated:(BOOL)topAnimated;
-(void)setAutorotationDelegate:(id)delegate;
-(void)setBccRecipients:(id)recipients;
-(void)setCcRecipients:(id)recipients;
-(void)setContentVisible:(BOOL)visible;
-(void)setInitialTitle:(id)title;
-(void)setKeyboardVisible:(BOOL)visible;
// declared property setter: -(void)setMailComposeDelegate:(id)delegate;
-(void)setMessageBody:(id)body isHTML:(BOOL)html;
-(void)setSubject:(id)subject;
-(void)setToRecipients:(id)recipients;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end

