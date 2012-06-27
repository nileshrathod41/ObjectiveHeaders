/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherShadowView : UIView {
@private
	int m_mode;
	float m_pointerOffset;
	NSArray* m_gradientColors;
}
@property(retain, nonatomic) NSArray* gradientColors;	// @synthesize=m_gradientColors
@property(assign, nonatomic) int mode;	// @synthesize=m_mode
@property(assign, nonatomic) float pointerOffset;	// @synthesize=m_pointerOffset
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(id)gradientColors;
// declared property getter: -(int)mode;
// declared property getter: -(float)pointerOffset;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setGradientColors:(id)colors;
// declared property setter: -(void)setMode:(int)mode;
// declared property setter: -(void)setPointerOffset:(float)offset;
@end

