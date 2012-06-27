/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GKComposeHostedViewController, NSNumber, NSString;
@protocol GKFriendRequestComposeViewControllerDelegate;

@interface GKFriendRequestComposeViewController : XXUnknownSuperclass {
@private
	id<GKFriendRequestComposeViewControllerDelegate> _composeViewDelegateWeak;
	GKComposeHostedViewController* _composeController;
	NSString* _message;
	unsigned _recipientCount;
}
@property(retain, nonatomic) GKComposeHostedViewController* composeController;	// @synthesize=_composeController
@property(assign, nonatomic) id<GKFriendRequestComposeViewControllerDelegate> composeViewDelegate;	// @synthesize=_composeViewDelegateWeak
@property(retain, nonatomic) NSString* message;	// @synthesize=_message
@property(assign, nonatomic) unsigned recipientCount;	// @synthesize=_recipientCount
@property(retain, nonatomic) NSNumber* rid;
+(unsigned)maxNumberOfRecipients;
-(id)init;
-(void)addRecipientsWithEmailAddresses:(id)emailAddresses;
-(void)addRecipientsWithPlayerIDs:(id)playerIDs;
-(void)alertView:(id)view willDismissWithButtonIndex:(int)buttonIndex;
// declared property getter: -(id)composeController;
// declared property getter: -(id)composeViewDelegate;
-(void)dealloc;
// declared property getter: -(id)message;
-(BOOL)navigationBarHidden;
-(void)prepareForNewRecipients:(id)newRecipients;
// declared property getter: -(unsigned)recipientCount;
// declared property getter: -(id)rid;
-(void)sendFinishedMessageToDelegateCancelled:(BOOL)delegateCancelled;
// declared property setter: -(void)setComposeController:(id)controller;
// declared property setter: -(void)setComposeViewDelegate:(id)delegate;
// declared property setter: -(void)setMessage:(id)message;
// declared property setter: -(void)setRecipientCount:(unsigned)count;
// declared property setter: -(void)setRid:(id)rid;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end

