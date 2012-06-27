/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIGridLayoutInfo : XXUnknownSuperclass {
@private
	NSMutableArray* _sections;
	BOOL _useFloatingHeaderFooter;
	BOOL _horizontal;
	BOOL _leftToRight;
	CGRect _visibleBounds;
	CGSize _layoutSize;
	float _dimension;
	BOOL _isValid;
	NSDictionary* _rowAlignmentOptions;
	BOOL _usesFloatingHeaderFooter;
	CGSize _contentSize;
}
@property(assign, nonatomic) CGSize contentSize;	// @synthesize=_contentSize
@property(assign, nonatomic) float dimension;	// @synthesize=_dimension
@property(assign, nonatomic) BOOL horizontal;	// @synthesize=_horizontal
@property(assign, nonatomic) BOOL leftToRight;	// @synthesize=_leftToRight
@property(retain, nonatomic) NSDictionary* rowAlignmentOptions;	// @synthesize=_rowAlignmentOptions
@property(readonly, assign, nonatomic) NSMutableArray* sections;	// @synthesize=_sections
@property(assign, nonatomic) BOOL usesFloatingHeaderFooter;	// @synthesize=_usesFloatingHeaderFooter
-(id)init;
-(id)addSection;
// declared property getter: -(CGSize)contentSize;
-(id)copy;
-(void)dealloc;
// declared property getter: -(float)dimension;
-(CGRect)frameForItemAtIndexPath:(id)indexPath;
// declared property getter: -(BOOL)horizontal;
-(void)invalidate:(BOOL)invalidate;
// declared property getter: -(BOOL)leftToRight;
// declared property getter: -(id)rowAlignmentOptions;
// declared property getter: -(id)sections;
// declared property setter: -(void)setContentSize:(CGSize)size;
// declared property setter: -(void)setDimension:(float)dimension;
// declared property setter: -(void)setHorizontal:(BOOL)horizontal;
// declared property setter: -(void)setLeftToRight:(BOOL)right;
// declared property setter: -(void)setRowAlignmentOptions:(id)options;
// declared property setter: -(void)setUsesFloatingHeaderFooter:(BOOL)footer;
-(id)snapshot;
// declared property getter: -(BOOL)usesFloatingHeaderFooter;
@end

