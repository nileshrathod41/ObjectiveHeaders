/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface UISnapshotModalViewController : UIViewController {
@private
	int _interfaceOrientation;
	UIViewController* _disappearingViewController;
	UINavigationController* _parentController;
}
@property(retain, nonatomic) UIViewController* disappearingViewController;	// @synthesize=_disappearingViewController
-(id)initWithInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(void)dealloc;
// declared property getter: -(id)disappearingViewController;
// declared property setter: -(void)setDisappearingViewController:(id)controller;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end

