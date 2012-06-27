/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UISpringBoardHostedView;

__attribute__((visibility("hidden")))
@interface UIRemoteSheetInfo : XXUnknownSuperclass {
@private
	UIView* _sheetView;
	UISpringBoardHostedView* _remoteView;
	id _delegate;
	SEL _selector;
	void* _context;
	int _returnCode;
}
@property(assign, nonatomic) void* context;	// @synthesize=_context
@property(assign, nonatomic) id delegate;	// @synthesize=_delegate
@property(retain, nonatomic) UISpringBoardHostedView* remoteView;	// @synthesize=_remoteView
@property(assign, nonatomic) int returnCode;	// @synthesize=_returnCode
@property(assign, nonatomic) SEL selector;	// @synthesize=_selector
@property(retain, nonatomic) UIView* sheetView;	// @synthesize=_sheetView
// declared property getter: -(void*)context;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(id)remoteView;
// declared property getter: -(int)returnCode;
// declared property getter: -(SEL)selector;
// declared property setter: -(void)setContext:(void*)context;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setRemoteView:(id)view;
// declared property setter: -(void)setReturnCode:(int)code;
// declared property setter: -(void)setSelector:(SEL)selector;
// declared property setter: -(void)setSheetView:(id)view;
// declared property getter: -(id)sheetView;
@end
