/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


@interface UIPopoverBackgroundView : UIView {
}
@property(assign, nonatomic) unsigned arrowDirection;
@property(assign, nonatomic) float arrowOffset;
+(UIEdgeInsets)_shadowInsets;
+(CGSize)_shadowOffset;
+(float)_shadowOpacity;
+(id)_shadowPathForRect:(CGRect)rect arrowDirection:(unsigned)direction;
+(float)_shadowRadius;
+(float)arrowBase;
+(float)arrowHeight;
+(UIEdgeInsets)contentViewInsets;
-(CGRect)_contentViewFrame;
-(id)_shadowPath;
-(BOOL)_shouldAnimatePropertyWithKey:(id)key;
-(void)_updateShadow;
-(id)actionForLayer:(id)layer forKey:(id)key;
// declared property getter: -(unsigned)arrowDirection;
// declared property getter: -(float)arrowOffset;
-(int)backgroundStyle;
// declared property setter: -(void)setArrowDirection:(unsigned)direction;
// declared property setter: -(void)setArrowOffset:(float)offset;
@end

