/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MFComposeTextContentView : XXUnknownSuperclass {
@private
	int _preventScrollSelectionToVisible;
	BOOL _keepScrollPosition;
	CGPoint _scrollPosition;
}
-(void)_insertPhotoOrVideo;
-(BOOL)becomeFirstResponder;
-(void)beginPreventingScrollSelectionToVisible;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)decreaseQuoteLevel;
-(id)enclosingScrollView;
-(void)endPreventingScrollSelectionToVisible;
-(void)ensureSelection;
-(void)increaseQuoteLevel;
-(void)quoteLevelMenu;
-(BOOL)resignFirstResponder;
-(void)scrollSelectionToVisible:(BOOL)visible;
-(id)supportedPasteboardTypesForCurrentSelection;
@end

