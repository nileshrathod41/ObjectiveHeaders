/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


@interface UIStatusBarCorners : UIView {
	int _cornerStyle;
	int _cornerAlignment;
	UIView* _leftCorner;
	UIView* _rightCorner;
}
+(float)cornerRadius;
-(id)initForAlignment:(int)alignment style:(int)style;
-(id)_imageForCornerWithStyle:(int)style;
-(int)cornerStyle;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)frame;
@end

