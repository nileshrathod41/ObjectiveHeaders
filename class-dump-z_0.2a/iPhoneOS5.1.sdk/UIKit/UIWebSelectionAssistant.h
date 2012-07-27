/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"

@class UIWebSelectionView, UILongPressGestureRecognizer, UIWebSelection, UIWebDocumentView, UITapAndAHalfRecognizer;

__attribute__((visibility("hidden")))
@interface UIWebSelectionAssistant : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
@private
	UIWebDocumentView* _webView;
	UIWebSelectionView* _selectionView;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapAndAHalfRecognizer* _tapAndAHalfGestureRecognizer;
	BOOL _enabled;
}
@property(assign, nonatomic) BOOL enabled;
@property(readonly, assign, nonatomic) UIWebSelection* selection;
@property(readonly, assign, nonatomic) CGRect selectionFrame;
-(id)initWithWebView:(id)webView;
-(void)clearSelection;
-(void)dealloc;
-(void)didEndScrollingOverflow;
-(void)didEndScrollingPage;
-(void)didRotate:(id)rotate;
// declared property getter: -(BOOL)enabled;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)hideCallout;
-(id)hitTest:(CGPoint)test withEvent:(id)event fromView:(id)view;
-(BOOL)isSelectionGestureRecognizer:(id)recognizer;
-(void)layoutChangedByScrolling:(BOOL)scrolling;
-(void)makeWebSelection:(id)selection;
-(void)resignedFirstResponder;
-(void)scaleChanged;
// declared property getter: -(id)selection;
-(void)selectionChanged;
// declared property getter: -(CGRect)selectionFrame;
// declared property setter: -(void)setEnabled:(BOOL)enabled;
-(void)setGestureRecognizers;
-(void)tap:(id)tap;
-(void)willRotate:(id)rotate;
-(void)willStartScrollingOverflow;
-(void)willStartScrollingPage;
@end

