/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class NSString, UIWindow, UIWebView, UIView;

@interface UIReferenceLibraryViewController : UIViewController {
@private
	int _oldPopoverStyle;
	unsigned _definitionLanguageDirection;
	NSString* _stringToDefine;
	UIWebView* _definitionView;
	UIView* _definitionContainerView;
	UIView* _modalHeaderView;
	NSString* _stylesheet;
	NSString* _definitionHTML;
	id _dismissCompletionHandler;
	UIWindow* _rotationDecider;
}
@property(retain, nonatomic, setter=_setRotationDecider:) UIWindow* _rotationDecider;	// @synthesize
@property(readonly, assign, nonatomic) UIView* definitionContainerView;	// @synthesize=_definitionContainerView
@property(retain, nonatomic) NSString* definitionHTML;	// @synthesize=_definitionHTML
@property(readonly, assign, nonatomic) UIWebView* definitionView;	// @synthesize=_definitionView
@property(copy, nonatomic) id dismissCompletionHandler;	// @synthesize=_dismissCompletionHandler
@property(readonly, assign, nonatomic) UIView* modalHeaderView;	// @synthesize=_modalHeaderView
@property(readonly, assign, nonatomic) NSString* stringToDefine;	// @synthesize=_stringToDefine
@property(readonly, assign, nonatomic) NSString* stylesheet;	// @synthesize=_stylesheet
+(id)_backgroundColor;
+(id)_diddlydoLineColor;
+(id)_foregroundColor;
+(id)_noDefinitionLabel;
+(id)_popoverControllerForReferenceLibraryWithString:(id)string;
+(id)_viewControllerForReferenceWithString:(id)string options:(unsigned)options;
+(BOOL)dictionaryHasDefinitionForTerm:(id)term;
+(void)initialize;
-(id)initWithTerm:(id)term;
-(void)_didResignContentViewControllerOfPopover:(id)popover;
-(void)_dismissModalReferenceView:(id)view;
-(void)_repositionSubviews;
// declared property getter: -(id)_rotationDecider;
-(void)_setPopoverController:(id)controller;
// declared property setter: -(void)_setRotationDecider:(id)decider;
-(void)_willBecomeContentViewControllerOfPopover:(id)popover;
-(void)dealloc;
// declared property getter: -(id)definitionContainerView;
// declared property getter: -(id)definitionHTML;
-(void)definitionService:(id)service hasNewHTML:(id)html;
// declared property getter: -(id)definitionView;
// declared property getter: -(id)dismissCompletionHandler;
// declared property getter: -(id)modalHeaderView;
// declared property setter: -(void)setDefinitionHTML:(id)html;
// declared property setter: -(void)setDismissCompletionHandler:(id)handler;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
// declared property getter: -(id)stringToDefine;
// declared property getter: -(id)stylesheet;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
@end

