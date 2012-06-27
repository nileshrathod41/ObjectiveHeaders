/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "UITextFieldDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "GameKit-Structs.h"

@class NSString;

@interface GKLoginAlertView : XXUnknownSuperclass <UITextFieldDelegate> {
	NSString* _username;
	unsigned _passwordFieldIndex;
}
@property(copy, nonatomic) NSString* password;	// @dynamic
@property(copy, nonatomic) NSString* username;	// @synthesize=_username
-(id)initWithDelegate:(id)delegate uneditableUsername:(id)username;
-(void)_updateFrameForDisplay;
-(void)dealloc;
// declared property getter: -(id)password;
// declared property setter: -(void)setPassword:(id)password;
// declared property setter: -(void)setUsername:(id)username;
-(BOOL)textFieldShouldReturn:(id)textField;
// declared property getter: -(id)username;
@end

