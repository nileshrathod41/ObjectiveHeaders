/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITextRange, NSTimer;

__attribute__((visibility("hidden")))
@interface UIDictationLandingView : UIView {
@private
	int _highlighted;
	NSTimer* _timer;
	UITextRange* _range;
	id _placeholder;
	BOOL _willInsertResult;
	float _diameter;
	float _margin;
}
@property(assign, nonatomic) BOOL willInsertResult;	// @synthesize=_willInsertResult
+(id)activeInstance;
+(float)diameterForLineHeight:(float)lineHeight;
+(id)sharedInstance;
+(float)widthForLineHeight:(float)lineHeight;
-(id)initWithFrame:(CGRect)frame;
-(void)advanceLanding:(id)landing;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(void)errorAnimationDidFinish;
-(void)placeDots;
// declared property setter: -(void)setWillInsertResult:(BOOL)insertResult;
-(void)startLanding;
-(void)stopLanding;
-(void)stopLandingForError;
-(void)updatePosition;
// declared property getter: -(BOOL)willInsertResult;
@end

