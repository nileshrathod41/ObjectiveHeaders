/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivity.h"

@class MFMessageComposeViewController;

@interface UIMessageActivity : UIActivity {
@private
	MFMessageComposeViewController* _messageComposeViewController;
}
@property(retain, nonatomic) MFMessageComposeViewController* messageComposeViewController;	// @synthesize=_messageComposeViewController
-(id)_activityImage;
-(void)_cleanup;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(BOOL)canPerformWithActivityItems:(id)activityItems;
-(void)dealloc;
// declared property getter: -(id)messageComposeViewController;
-(void)messageComposeViewController:(id)controller didFinishWithResult:(int)result;
-(void)prepareWithActivityItems:(id)activityItems;
// declared property setter: -(void)setMessageComposeViewController:(id)controller;
@end

