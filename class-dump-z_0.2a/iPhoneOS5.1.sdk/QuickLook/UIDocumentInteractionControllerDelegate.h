/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "NSObject.h"


@protocol UIDocumentInteractionControllerDelegate <NSObject>
@optional
-(BOOL)documentInteractionController:(id)controller canPerformAction:(SEL)action;
-(void)documentInteractionController:(id)controller didEndSendingToApplication:(id)application;
-(BOOL)documentInteractionController:(id)controller performAction:(SEL)action;
-(void)documentInteractionController:(id)controller willBeginSendingToApplication:(id)application;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)documentInteractionController;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)documentInteractionController;
-(void)documentInteractionControllerDidEndPreview:(id)documentInteractionController;
-(CGRect)documentInteractionControllerRectForPreview:(id)preview;
-(id)documentInteractionControllerViewControllerForPreview:(id)preview;
-(id)documentInteractionControllerViewForPreview:(id)preview;
-(void)documentInteractionControllerWillBeginPreview:(id)documentInteractionController;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)documentInteractionController;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)documentInteractionController;
@end

