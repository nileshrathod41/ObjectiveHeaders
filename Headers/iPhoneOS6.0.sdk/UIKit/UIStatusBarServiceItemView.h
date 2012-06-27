/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarServiceItemView : UIStatusBarItemView {
@private
	NSString* _pathToServiceImages[2];
	NSString* _serviceString;
	NSString* _crossfadeString;
	unsigned _crossfadeStep;
	float _serviceWidth;
	float _crossfadeWidth;
	int _contentType;
	BOOL _loopingNecessaryForString;
	BOOL _usingStringForStyle[2];
	BOOL _loopNowIfNecessary;
	float _letterSpacing;
}
-(id)_contentsImageFromString:(id)string withWidth:(float)width letterSpacing:(float)spacing forStyle:(int)style;
-(id)_crossfadeContentsImageForStyle:(int)style;
-(void)_crossfadeStepAnimation;
-(BOOL)_crossfaded;
-(void)_loopAnimationDidStop:(id)_loopAnimation finished:(id)finished context:(void*)context;
-(BOOL)_loopingNecessary;
-(id)_serviceContentsImageForStyle:(int)style;
-(void)_setUsingString:(BOOL)string forStyle:(int)style;
-(BOOL)animatesDataChange;
-(BOOL)animatesFrameChange;
-(id)contentsImageForStyle:(int)style;
-(void)dealloc;
-(float)extraRightPadding;
-(void)performPendedActions;
-(void)setVisible:(BOOL)visible frame:(CGRect)frame duration:(double)duration;
-(float)standardPadding;
-(id)textColorForStyle:(int)style;
-(float)updateContentsAndWidth;
-(BOOL)updateForNewData:(id)newData actions:(int)actions;
-(BOOL)usesSmallerTextFont;
@end

