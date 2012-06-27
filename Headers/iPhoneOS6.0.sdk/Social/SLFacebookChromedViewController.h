/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import "Social-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController, UINavigationBar, UIView;

__attribute__((visibility("hidden")))
@interface SLFacebookChromedViewController : XXUnknownSuperclass {
@private
	UINavigationBar* _navigationBar;
	UIView* _contentView;
	UIView* _backgroundChromeView;
	UIView* _innerShadowView;
	UIViewController* _presentedViewController;
	BOOL _navigationBarHidden;
}
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void).cxx_destruct;
-(id)_backgroundImageForOrientation:(int)orientation;
-(CGRect)_contentFrame;
-(int)_currentOrientation;
-(void)_hideMenuBar;
-(CGRect)_innerShadowFrame;
-(void)_showMenuBar;
-(void)loadView;
-(void)popViewController:(id)controller animated:(BOOL)animated;
-(void)pushViewController:(id)controller animated:(BOOL)animated;
-(void)setNavigationBarHidden:(BOOL)hidden animated:(BOOL)animated;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillLayoutSubviews;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end
