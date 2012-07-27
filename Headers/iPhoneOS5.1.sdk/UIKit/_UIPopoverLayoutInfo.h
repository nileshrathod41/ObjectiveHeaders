/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _UIPopoverLayoutInfo : XXUnknownSuperclass <NSCopying> {
@private
	UIEdgeInsets _contentInset;
	float _arrowHeight;
	CGSize _preferredContentSize;
	unsigned _preferredArrowDirections;
	CGRect _containingFrame;
	UIEdgeInsets _containingFrameInsets;
	CGRect _targetRect;
	BOOL _constrainToTargetRect;
	CGRect _frame;
	float _offset;
	unsigned _arrowDirection;
	BOOL _updatesEnabled;
}
@property(readonly, assign, nonatomic) unsigned arrowDirection;	// @synthesize=_arrowDirection
@property(assign, nonatomic) float arrowHeight;	// @synthesize=_arrowHeight
@property(assign, nonatomic) BOOL constrainToTargetRect;	// @synthesize=_constrainToTargetRect
@property(assign, nonatomic) CGRect containingFrame;	// @synthesize=_containingFrame
@property(assign, nonatomic) UIEdgeInsets containingFrameInsets;	// @synthesize=_containingFrameInsets
@property(assign, nonatomic) UIEdgeInsets contentInset;	// @synthesize=_contentInset
@property(readonly, assign, nonatomic) CGRect frame;	// @synthesize=_frame
@property(readonly, assign, nonatomic) float offset;	// @synthesize=_offset
@property(assign, nonatomic) unsigned preferredArrowDirections;	// @synthesize=_preferredArrowDirections
@property(assign, nonatomic) CGSize preferredContentSize;	// @synthesize=_preferredContentSize
@property(assign, nonatomic) CGRect targetRect;	// @synthesize=_targetRect
@property(assign, nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled;	// @synthesize=_updatesEnabled
+(id)_observationKeys;
-(id)init;
-(CGSize)_popoverViewSizeForContentSize:(CGSize)contentSize arrowDirection:(unsigned)direction;
// declared property setter: -(void)_setUpdatesEnabled:(BOOL)enabled;
-(void)_updateOutputs;
// declared property getter: -(BOOL)_updatesEnabled;
// declared property getter: -(unsigned)arrowDirection;
// declared property getter: -(float)arrowHeight;
// declared property getter: -(BOOL)constrainToTargetRect;
// declared property getter: -(CGRect)containingFrame;
// declared property getter: -(UIEdgeInsets)containingFrameInsets;
// declared property getter: -(UIEdgeInsets)contentInset;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
// declared property getter: -(CGRect)frame;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
// declared property getter: -(float)offset;
// declared property getter: -(unsigned)preferredArrowDirections;
// declared property getter: -(CGSize)preferredContentSize;
// declared property setter: -(void)setArrowHeight:(float)height;
// declared property setter: -(void)setConstrainToTargetRect:(BOOL)targetRect;
// declared property setter: -(void)setContainingFrame:(CGRect)frame;
// declared property setter: -(void)setContainingFrameInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setContentInset:(UIEdgeInsets)inset;
// declared property setter: -(void)setPreferredArrowDirections:(unsigned)directions;
// declared property setter: -(void)setPreferredContentSize:(CGSize)size;
// declared property setter: -(void)setTargetRect:(CGRect)rect;
// declared property getter: -(CGRect)targetRect;
@end
