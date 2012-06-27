/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIViewControllerAction : XXUnknownSuperclass {
@private
	UIViewController* _viewController;
	NSString* _name;
	int _transition;
	id _completion;
	float _curlUpRevealedHeight;
	float __curlUpRevealedHeight;
}
@property(assign, nonatomic, setter=_setCurlUpRevealedHeight:) float _curlUpRevealedHeight;	// @synthesize=__curlUpRevealedHeight
@property(readonly, assign, nonatomic) BOOL animated;
@property(copy, nonatomic) id completion;	// @synthesize=_completion
@property(retain, nonatomic) NSString* name;	// @synthesize=_name
@property(assign, nonatomic) int transition;	// @synthesize=_transition
@property(assign, nonatomic) UIViewController* viewController;	// @synthesize=_viewController
-(id)initWithViewController:(id)viewController name:(id)name transition:(int)transition;
// declared property getter: -(float)_curlUpRevealedHeight;
// declared property setter: -(void)_setCurlUpRevealedHeight:(float)height;
// declared property getter: -(BOOL)animated;
// declared property getter: -(id)completion;
-(void)dealloc;
// declared property getter: -(id)name;
// declared property setter: -(void)setCompletion:(id)completion;
// declared property setter: -(void)setName:(id)name;
// declared property setter: -(void)setTransition:(int)transition;
// declared property setter: -(void)setViewController:(id)controller;
// declared property getter: -(int)transition;
// declared property getter: -(id)viewController;
@end

