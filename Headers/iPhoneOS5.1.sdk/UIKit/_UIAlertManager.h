/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface _UIAlertManager : XXUnknownSuperclass {
}
+(CGAffineTransform)_alertTranslationForInterfaceOrientation:(int)interfaceOrientation andTranslation:(float)translation;
+(void)_applyAlertTransforms;
+(void)addToStack:(id)stack dontDimBackground:(BOOL)background;
+(void)alertWindowAnimationDidStop:(id)alertWindowAnimation finished:(id)finished context:(void*)context;
+(void)applyClientWindowTransform:(CGAffineTransform)transform;
+(void)applyInternalWindowTransform:(CGAffineTransform)transform;
+(CGAffineTransform)calculatedAlertTransform;
+(BOOL)cancelAlertsAnimated:(BOOL)animated;
+(BOOL)cancelTopMostAlertAnimated:(BOOL)animated;
+(void)createAlertWindowIfNeeded:(BOOL)needed;
+(void)createAlertWindowIfNeeded:(BOOL)needed deferDisplay:(BOOL)display;
+(void)hideAlertsForTermination;
+(BOOL)hideTopMostAlertAnimated:(BOOL)animated;
+(void)hideTopmostMiniAlert:(int)alert;
+(void)initialize;
+(void)noteOrientationChangingTo:(int)to;
+(void)noteOrientationChangingTo:(int)to animated:(BOOL)animated;
+(void)removeFromStack:(id)stack;
+(void)reorientAlertWindowTo:(int)to animated:(BOOL)animated keyboard:(id)keyboard;
+(void)showTopmostMiniAlert;
+(void)sizeAlertWindowForCurrentOrientation;
+(BOOL)stackContainsAlert:(id)alert;
+(void)tellSpringboardHidingAlert:(id)alert animated:(BOOL)animated;
+(void)tellSpringboardShowingAlert:(id)alert animated:(BOOL)animated;
+(id)topMostAlert;
+(id)visibleAlert;
@end
