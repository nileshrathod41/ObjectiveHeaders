/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UIActionSheetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController, MPAudioDeviceController, UIWindow;

@interface MPAudioVideoRoutingActionSheet : XXUnknownSuperclass <UIActionSheetDelegate> {
@private
	int _airPlayPasswordAlertDidAppearToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
	MPAudioDeviceController* _audioDeviceController;
	unsigned _avItemType;
	id _completionHandler;
	UIViewController* _viewControllerForActionSheet;
	UIWindow* _windowForActionSheet;
}
-(id)initWithType:(unsigned)type;
-(BOOL)_isDeviceVideoRoute:(id)route;
-(id)_routes;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)dealloc;
-(void)layoutSubviews;
-(void)showInPopoverFromRect:(CGRect)rect inView:(id)view backgroundStyle:(int)style animated:(BOOL)animated completionHandler:(id)handler;
-(void)showWithValidInterfaceOrientationsBlock:(id)validInterfaceOrientationsBlock completionHandler:(id)handler;
@end
