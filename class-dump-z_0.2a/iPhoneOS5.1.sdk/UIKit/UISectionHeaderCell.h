/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString;

@interface UISectionHeaderCell : UIView {
	NSString* _title;
	mdocFlags _sectionHeaderCellFlags;
}
+(id)defaultTitleFont;
-(id)initWithFrame:(CGRect)frame;
-(CGRect)_rectForTitle:(id)title;
-(BOOL)_shouldTryPromoteDescendantToFirstResponder;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(void)drawTitle:(id)title inRect:(CGRect)rect;
-(void)drawTitle:(id)title withColor:(id)color withShadowColor:(id)shadowColor inRect:(CGRect)rect;
-(BOOL)isEqualToView:(id)view;
-(void)mouseUp:(GSEventRef)up;
-(void)setStyle:(int)style;
-(void)setTitle:(id)title;
-(id)title;
@end

