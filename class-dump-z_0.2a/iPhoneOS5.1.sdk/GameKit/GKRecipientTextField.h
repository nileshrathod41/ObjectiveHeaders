/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKUITheme;

@interface GKRecipientTextField : XXUnknownSuperclass {
@private
	GKUITheme* _theme;
}
@property(retain, nonatomic) GKUITheme* theme;	// @synthesize=_theme
-(id)_placeholderColor;
-(BOOL)becomeFirstResponder;
-(void)dealloc;
-(void)drawPlaceholderInRect:(CGRect)rect;
// declared property setter: -(void)setTheme:(id)theme;
// declared property getter: -(id)theme;
@end

