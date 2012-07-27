/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UISelectionGrabber, UITextSelectionView, NSArray, NSMutableArray, UITouch;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView {
@private
	UITextSelectionView* m_selectionView;
	UIView<UITextSelectingContainer>* m_container;
	int m_mode;
	NSArray* m_rects;
	NSMutableArray* m_rectViews;
	UITouch* m_activeTouch;
	CGRect m_startEdge;
	CGRect m_endEdge;
	CGPoint m_basePoint;
	CGPoint m_extentPoint;
	CGPoint m_initialBasePoint;
	CGPoint m_initialExtentPoint;
	float m_initialDistance;
	CGPoint m_touchOffset;
	double m_firstMovedTime;
	UISelectionGrabber* m_startGrabber;
	UISelectionGrabber* m_endGrabber;
	BOOL m_animateUpdate;
	BOOL m_baseIsStart;
	BOOL m_commandsWereShowing;
	BOOL m_inGesture;
	BOOL m_magnifying;
	BOOL m_scrolling;
	BOOL m_scaling;
	BOOL m_rotating;
	BOOL m_inputViewIsChanging;
}
@property(retain, nonatomic) UITouch* activeTouch;	// @synthesize=m_activeTouch
@property(assign, nonatomic) BOOL animateUpdate;	// @synthesize=m_animateUpdate
@property(readonly, assign, nonatomic) BOOL autoscrolled;
@property(assign, nonatomic) BOOL baseIsStart;	// @synthesize=m_baseIsStart
@property(assign, nonatomic) CGPoint basePoint;	// @synthesize=m_basePoint
@property(assign, nonatomic) BOOL commandsWereShowing;	// @synthesize=m_commandsWereShowing
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer>* container;
@property(assign, nonatomic) CGRect endEdge;	// @synthesize=m_endEdge
@property(retain, nonatomic) UISelectionGrabber* endGrabber;	// @synthesize=m_endGrabber
@property(assign, nonatomic) CGPoint extentPoint;	// @synthesize=m_extentPoint
@property(assign, nonatomic) double firstMovedTime;	// @synthesize=m_firstMovedTime
@property(assign, nonatomic) BOOL inGesture;	// @synthesize=m_inGesture
@property(assign, nonatomic) CGPoint initialBasePoint;	// @synthesize=m_initialBasePoint
@property(assign, nonatomic) float initialDistance;	// @synthesize=m_initialDistance
@property(assign, nonatomic) CGPoint initialExtentPoint;	// @synthesize=m_initialExtentPoint
@property(assign, nonatomic) BOOL inputViewIsChanging;	// @synthesize=m_inputViewIsChanging
@property(assign, nonatomic) BOOL isScrolling;	// @synthesize=m_scrolling
@property(assign, nonatomic) BOOL magnifying;	// @synthesize=m_magnifying
@property(assign, nonatomic) int mode;	// @synthesize=m_mode
@property(retain, nonatomic) NSArray* rects;	// @synthesize=m_rects
@property(assign, nonatomic) BOOL rotating;	// @synthesize=m_rotating
@property(assign, nonatomic) BOOL scaling;	// @synthesize=m_scaling
@property(readonly, assign, nonatomic) UITextSelectionView* selectionView;
@property(assign, nonatomic) CGRect startEdge;	// @synthesize=m_startEdge
@property(retain, nonatomic) UISelectionGrabber* startGrabber;	// @synthesize=m_startGrabber
@property(assign, nonatomic) CGPoint touchOffset;	// @synthesize=m_touchOffset
-(id)initWithFrame:(CGRect)frame selectionView:(id)view;
-(id)initWithFrame:(CGRect)frame textContainer:(id)container;
// declared property getter: -(id)activeTouch;
// declared property getter: -(BOOL)animateUpdate;
-(CGPoint)applyTouchOffset:(CGPoint)offset;
// declared property getter: -(BOOL)autoscrolled;
// declared property getter: -(BOOL)baseIsStart;
// declared property getter: -(CGPoint)basePoint;
-(void)beginMagnifying;
-(void)cancelDelayedActions;
// declared property getter: -(BOOL)commandsWereShowing;
// declared property getter: -(id)container;
-(CGPoint)convertFromMagnifierPoint:(CGPoint)magnifierPoint;
-(void)dealloc;
-(void)didRotate;
-(void)didScroll;
-(void)doneMagnifying;
// declared property getter: -(CGRect)endEdge;
// declared property getter: -(id)endGrabber;
// declared property getter: -(CGPoint)extentPoint;
// declared property getter: -(double)firstMovedTime;
// declared property getter: -(BOOL)inGesture;
// declared property getter: -(CGPoint)initialBasePoint;
// declared property getter: -(float)initialDistance;
// declared property getter: -(CGPoint)initialExtentPoint;
-(void)inputViewDidChange;
// declared property getter: -(BOOL)inputViewIsChanging;
-(void)inputViewWillChange;
// declared property getter: -(BOOL)isScrolling;
-(CGPoint)magnifierPoint;
// declared property getter: -(BOOL)magnifying;
// declared property getter: -(int)mode;
-(BOOL)pointCloserToEnd:(CGPoint)end startEdge:(CGRect)edge endEdge:(CGRect)edge3;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)prepareForMagnification;
// declared property getter: -(id)rects;
-(void)removeFromSuperview;
// declared property getter: -(BOOL)rotating;
-(void)scaleDidChange;
-(void)scaleWillChange;
// declared property getter: -(BOOL)scaling;
-(void)selectionAnimationDidStop:(id)selectionAnimation finished:(id)finished;
// declared property getter: -(id)selectionView;
// declared property setter: -(void)setActiveTouch:(id)touch;
// declared property setter: -(void)setAnimateUpdate:(BOOL)update;
// declared property setter: -(void)setBaseIsStart:(BOOL)start;
// declared property setter: -(void)setBasePoint:(CGPoint)point;
// declared property setter: -(void)setCommandsWereShowing:(BOOL)showing;
-(void)setEnclosingScrollViewsEnabled:(BOOL)enabled;
// declared property setter: -(void)setEndEdge:(CGRect)edge;
// declared property setter: -(void)setEndGrabber:(id)grabber;
// declared property setter: -(void)setExtentPoint:(CGPoint)point;
// declared property setter: -(void)setFirstMovedTime:(double)time;
// declared property setter: -(void)setInGesture:(BOOL)gesture;
// declared property setter: -(void)setInitialBasePoint:(CGPoint)point;
// declared property setter: -(void)setInitialDistance:(float)distance;
// declared property setter: -(void)setInitialExtentPoint:(CGPoint)point;
// declared property setter: -(void)setInputViewIsChanging:(BOOL)changing;
// declared property setter: -(void)setIsScrolling:(BOOL)scrolling;
// declared property setter: -(void)setMagnifying:(BOOL)magnifying;
// declared property setter: -(void)setMode:(int)mode;
// declared property setter: -(void)setRects:(id)rects;
// declared property setter: -(void)setRotating:(BOOL)rotating;
// declared property setter: -(void)setScaling:(BOOL)scaling;
// declared property setter: -(void)setStartEdge:(CGRect)edge;
// declared property setter: -(void)setStartGrabber:(id)grabber;
// declared property setter: -(void)setTouchOffset:(CGPoint)offset;
-(void)setTouchOffset:(CGPoint)offset touchPoint:(CGPoint)point;
-(void)startAnimating;
// declared property getter: -(CGRect)startEdge;
// declared property getter: -(id)startGrabber;
-(void)stopAnimating;
// declared property getter: -(CGPoint)touchOffset;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)updateBaseAndExtentPointsFromEdges;
-(void)updateBaseIsStartWithDocumentPoint:(CGPoint)documentPoint;
-(void)updateDots;
-(void)updateGrabbers;
-(void)updateRectViews;
-(void)updateSelectionWithDocumentPoint:(CGPoint)documentPoint;
-(void)updateSelectionWithPoint:(CGPoint)point;
-(void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;
-(void)willRotate;
-(void)willScroll;
@end

