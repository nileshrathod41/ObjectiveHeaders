/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@protocol UIKeyboardImplGeometryDelegate
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;
-(BOOL)canDismiss;
-(void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;
-(BOOL)isActive;
// declared property getter: -(BOOL)isMinimized;
-(void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;
// declared property setter: -(void)setMinimized:(BOOL)minimized;
@end

