/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAnimation.h"


__attribute__((visibility("hidden")))
@interface UIScrollViewScrollAnimation : UIAnimation {
@private
	CGPoint _originalOffset;
	CGPoint _targetOffset;
	float _accuracy;
	BOOL _adjustsForContentOffsetDelta;
}
-(void)adjustForContentOffsetDelta:(CGPoint)contentOffsetDelta;
-(void)dealloc;
-(void)setProgress:(float)progress;
@end

