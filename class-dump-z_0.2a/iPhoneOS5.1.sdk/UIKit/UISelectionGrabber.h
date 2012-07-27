/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UISelectionGrabber.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UISelectionGrabberDot, UITextRangeView;

__attribute__((visibility("hidden")))
@interface UISelectionGrabber : UIView {
@private
	UISelectionGrabberDot* m_dotView;
	BOOL m_isDotted;
	BOOL m_isStart;
	BOOL m_activeFlattened;
	BOOL m_alertFlattened;
	BOOL m_navigationTransitionFlattened;
	BOOL m_animating;
}
@property(assign, nonatomic) BOOL activeFlattened;	// @synthesize=m_activeFlattened
@property(assign, nonatomic) BOOL alertFlattened;	// @synthesize=m_alertFlattened
@property(assign, nonatomic) BOOL animating;	// @synthesize=m_animating
@property(readonly, assign, nonatomic) UITextRangeView* hostView;
@property(assign, nonatomic) BOOL isDotted;	// @synthesize=m_isDotted
@property(assign, nonatomic) BOOL isStart;	// @synthesize=m_isStart
@property(assign, nonatomic) BOOL navigationTransitionFlattened;	// @synthesize=m_navigationTransitionFlattened
-(id)initWithFrame:(CGRect)frame;
// declared property getter: -(BOOL)activeFlattened;
// declared property getter: -(BOOL)alertFlattened;
// declared property getter: -(BOOL)animating;
-(BOOL)autoscrolled;
-(void)canExpandAfterAlert:(id)alert;
-(void)canExpandAfterBecomeActive:(id)active;
-(void)canExpandAfterNavigationTransition:(id)transition;
-(BOOL)clipDot:(CGRect)dot;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(id)hostView;
-(BOOL)inputViewIsChanging;
// declared property getter: -(BOOL)isDotted;
-(BOOL)isRotating;
-(BOOL)isScaling;
-(BOOL)isScrolling;
// declared property getter: -(BOOL)isStart;
-(void)mustFlattenForAlert:(id)alert;
-(void)mustFlattenForNavigationTransition:(id)navigationTransition;
-(void)mustFlattenForResignActive:(id)resignActive;
// declared property getter: -(BOOL)navigationTransitionFlattened;
-(void)removeFromSuperview;
// declared property setter: -(void)setActiveFlattened:(BOOL)flattened;
// declared property setter: -(void)setAlertFlattened:(BOOL)flattened;
// declared property setter: -(void)setAnimating:(BOOL)animating;
-(void)setFrame:(CGRect)frame;
-(void)setHidden:(BOOL)hidden;
// declared property setter: -(void)setIsDotted:(BOOL)dotted;
// declared property setter: -(void)setIsStart:(BOOL)start;
// declared property setter: -(void)setNavigationTransitionFlattened:(BOOL)flattened;
-(void)updateDot;
@end

@interface UISelectionGrabber (UISelectionGrabberUnitTestAdditions)
+(id)_grabberDot;
@end

