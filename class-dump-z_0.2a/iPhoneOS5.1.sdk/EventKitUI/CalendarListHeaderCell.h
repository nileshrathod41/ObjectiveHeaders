/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface CalendarListHeaderCell : XXUnknownSuperclass {
	double _date;
	unsigned _indentsForDots : 1;
}
@property(assign, nonatomic) double date;	// @synthesize=_date
@property(assign, nonatomic) BOOL indentsForDots;
@property(readonly, assign, nonatomic) BOOL reusable;
-(id)initWithFrame:(CGRect)frame date:(double)date;
-(id)_backgroundImage;
// declared property getter: -(double)date;
-(void)drawBackground:(CGRect)background;
-(void)drawRect:(CGRect)rect;
-(void)drawTitle:(id)title inRect:(CGRect)rect;
-(void)drawTitle:(id)title withColor:(id)color withShadowColor:(id)shadowColor inRect:(CGRect)rect;
// declared property getter: -(BOOL)indentsForDots;
// declared property getter: -(BOOL)reusable;
// declared property setter: -(void)setDate:(double)date;
// declared property setter: -(void)setIndentsForDots:(BOOL)dots;
-(void)setOpaque:(BOOL)opaque;
-(CGSize)sizeThatFits:(CGSize)fits;
@end

