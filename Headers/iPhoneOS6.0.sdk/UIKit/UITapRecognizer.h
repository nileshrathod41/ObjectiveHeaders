/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"
#import "NSCoding.h"

@class NSMutableSet, NSArray, NSMutableArray;
@protocol UITapRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UITapRecognizer : XXUnknownSuperclass <NSCoding> {
@private
	unsigned _numberOfTouchesRequired;
	unsigned _numberOfTapsRequired;
	NSMutableSet* _activeTouches;
	int _currentNumberOfTouches;
	int _currentNumberOfTaps;
	CGPoint _location;
	CGPoint _startPoint;
	float _allowableMovement;
	double _maximumSingleTapDuration;
	double _maximumIntervalBetweenSuccessiveTaps;
	NSMutableArray* _touches;
	id _delegate;
	unsigned _timerOn : 1;
	unsigned _noNewTouches : 1;
}
@property(assign, nonatomic) float allowableMovement;
@property(assign, nonatomic) id<UITapRecognizerDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) double maximumIntervalBetweenSuccessiveTaps;
@property(assign, nonatomic) double maximumSingleTapDuration;
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// @synthesize=_numberOfTapsRequired
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// @synthesize=_numberOfTouchesRequired
@property(readonly, assign, nonatomic) NSArray* touches;	// @synthesize=_touches
-(id)init;
-(id)initWithCoder:(id)coder;
-(CGPoint)_locationOnScreen;
-(void)_reset;
// declared property getter: -(float)allowableMovement;
-(void)clearTapTimer;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)encodeWithCoder:(id)coder;
-(CGPoint)locationInView:(id)view;
// declared property getter: -(double)maximumIntervalBetweenSuccessiveTaps;
// declared property getter: -(double)maximumSingleTapDuration;
// declared property getter: -(unsigned)numberOfTapsRequired;
// declared property getter: -(unsigned)numberOfTouchesRequired;
// declared property setter: -(void)setAllowableMovement:(float)movement;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setMaximumIntervalBetweenSuccessiveTaps:(double)taps;
// declared property setter: -(void)setMaximumSingleTapDuration:(double)duration;
// declared property setter: -(void)setNumberOfTapsRequired:(unsigned)tapsRequired;
// declared property setter: -(void)setNumberOfTouchesRequired:(unsigned)touchesRequired;
-(void)startTapTimer:(double)timer;
-(void)tooSlow:(id)slow;
// declared property getter: -(id)touches;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
@end

