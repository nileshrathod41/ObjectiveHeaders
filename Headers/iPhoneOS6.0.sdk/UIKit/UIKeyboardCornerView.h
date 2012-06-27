/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardCornerView : UIView {
@private
	BOOL _leftSide;
	float _radius;
}
-(id)initWithFrame:(CGRect)frame left:(BOOL)left;
-(void)drawRect:(CGRect)rect;
-(int)textEffectsVisibilityLevel;
@end
