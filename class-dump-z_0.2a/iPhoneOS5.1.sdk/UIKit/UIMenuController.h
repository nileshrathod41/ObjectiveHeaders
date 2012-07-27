/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIMenuController.h"
#import "UICalloutBarDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface UIMenuController : XXUnknownSuperclass {
@private
	CGRect _targetRect;
	int _arrowDirection;
}
@property(assign, nonatomic) int arrowDirection;	// @synthesize=_arrowDirection
@property(readonly, assign, nonatomic) CGRect menuFrame;
@property(copy, nonatomic) NSArray* menuItems;
@property(assign, nonatomic, getter=isMenuVisible) BOOL menuVisible;
+(id)sharedMenuController;
-(id)init;
-(BOOL)_menuHidden;
-(void)_setTargetRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;
-(void)_windowWillRotate:(id)_window;
// declared property getter: -(int)arrowDirection;
-(void)dealloc;
// declared property getter: -(BOOL)isMenuVisible;
// declared property getter: -(CGRect)menuFrame;
// declared property getter: -(id)menuItems;
// declared property setter: -(void)setArrowDirection:(int)direction;
// declared property setter: -(void)setMenuItems:(id)items;
// declared property setter: -(void)setMenuVisible:(BOOL)visible;
-(void)setMenuVisible:(BOOL)visible animated:(BOOL)animated;
-(void)setTargetRect:(CGRect)rect inView:(id)view;
-(void)update;
@end

@interface UIMenuController (UIMenuControllerStatic)
-(BOOL)_updateAnimated:(BOOL)animated checkVisible:(BOOL)visible;
@end

@interface UIMenuController (UICalloutBarDelegateConformance) <UICalloutBarDelegate>
-(void)calloutBar:(id)bar didFinishAnimation:(id)animation;
-(void)calloutBar:(id)bar willStartAnimation:(id)animation;
@end

