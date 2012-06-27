/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIKeyboardDicationBackground, UIButton, UIDictationMeterView;

__attribute__((visibility("hidden")))
@interface UIDictationView : UIView {
@private
	UIKeyboardDicationBackground* _background;
	UIDictationMeterView* _meterView;
	UIButton* _endpointButton;
	UIButton* _endpointButtonLandscape;
	int _state;
	BOOL _keyboardInTransition;
	BOOL _automaticAppearanceWasEnabled;
}
+(id)activeInstance;
+(Class)dictationViewClass;
+(CGSize)layoutSize;
+(id)sharedInstance;
-(id)initWithFrame:(CGRect)frame;
-(void)applicationEnteredBackground;
-(CGPoint)backgroundOffset;
-(CGPoint)contentOffset;
-(id)createEndpointButtonWithRect:(CGRect)rect action:(SEL)action;
-(CGSize)currentScreenSize;
-(void)dealloc;
-(BOOL)drawsOwnBackground;
-(id)endpointButton;
-(id)endpointButtonImageWithRect:(CGRect)rect pressed:(BOOL)pressed;
-(void)endpointButtonPressed;
-(void)finishReturnToKeyboard;
-(void)keyboardDidShow:(id)keyboard;
-(void)layoutSubviews;
-(CGPoint)positionForShow;
-(void)prepareForReturnToKeyboard;
-(void)returnToKeyboard;
-(void)setState:(int)state;
-(void)show;
-(BOOL)visible;
@end
