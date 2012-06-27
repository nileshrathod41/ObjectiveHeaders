/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MFAtomBackgroundView : XXUnknownSuperclass {
	int _style;
	BOOL _selected;
	float _scalingFactor;
}
@property(assign, nonatomic) float scalingFactor;	// @synthesize=_scalingFactor
@property(assign, nonatomic) BOOL selected;	// @synthesize=_selected
@property(assign, nonatomic) int style;	// @synthesize=_style
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(float)scalingFactor;
// declared property getter: -(BOOL)selected;
// declared property setter: -(void)setScalingFactor:(float)factor;
// declared property setter: -(void)setSelected:(BOOL)selected;
// declared property setter: -(void)setStyle:(int)style;
// declared property getter: -(int)style;
@end

