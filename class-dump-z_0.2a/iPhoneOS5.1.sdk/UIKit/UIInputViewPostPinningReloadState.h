/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIResponder;

__attribute__((visibility("hidden")))
@interface UIInputViewPostPinningReloadState : XXUnknownSuperclass {
@private
	UIResponder* _responderPreventedFromSettingInputViews;
}
@property(retain, nonatomic) UIResponder* responderToReload;	// @synthesize=_responderPreventedFromSettingInputViews
+(id)stateWithResponder:(id)responder;
-(void)dealloc;
// declared property getter: -(id)responderToReload;
// declared property setter: -(void)setResponderToReload:(id)reload;
@end

