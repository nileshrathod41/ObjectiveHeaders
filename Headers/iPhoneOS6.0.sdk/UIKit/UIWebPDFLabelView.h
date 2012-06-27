/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIHighlightView, UILabel, NSTimer;

__attribute__((visibility("hidden")))
@interface UIWebPDFLabelView : UIView {
@private
	UILabel* _label;
	UIHighlightView* _highlight;
	NSTimer* _timer;
	unsigned currentPageIndex;
}
@property(assign, nonatomic) unsigned currentPageIndex;	// @synthesize
@property(readonly, assign, nonatomic, getter=isTimerInstalled) BOOL timerInstalled;
-(id)initWithFrame:(CGRect)frame;
-(void)_fadeOutAnimationDidStop:(id)_fadeOutAnimation finished:(id)finished;
-(double)_fadeOutDelay;
-(double)_fadeOutDuration;
-(void)clearTimer;
// declared property getter: -(unsigned)currentPageIndex;
-(void)dealloc;
-(void)fadeOut;
// declared property getter: -(BOOL)isTimerInstalled;
// declared property setter: -(void)setCurrentPageIndex:(unsigned)index;
-(void)setText:(id)text;
-(void)showNowInSuperView:(id)superView atOrigin:(CGPoint)origin withText:(id)text animated:(BOOL)animated;
-(void)sizeToFit;
@end

