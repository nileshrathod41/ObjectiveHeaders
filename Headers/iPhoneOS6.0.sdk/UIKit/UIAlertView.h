/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, UIWindow, UILabel, NSString, UIToolbar;
@protocol UIAlertViewDelegate;

@interface UIAlertView : UIView {
@private
	id<UIAlertViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _bodyTextLabel;
	UILabel* _taglineTextLabel;
	float _startY;
	CGPoint _center;
	id _context;
	int _cancelButton;
	int _defaultButton;
	int _firstOtherButton;
	UIToolbar* _toolbar;
	UIWindow* _originalWindow;
	UIWindow* _dimWindow;
	int _suspendTag;
	int _dismissButtonIndex;
	float _bodyTextHeight;
	NSMutableArray* _buttons;
	NSMutableArray* _textFields;
	UIView* _keyboard;
	UIView* _table;
	UIView* _dimView;
	UIView* _backgroundImageView;
	struct {
		unsigned numberOfRows : 7;
		unsigned delegateAlertSheetButtonClicked : 1;
		unsigned delegateDidPresentAlertSheet : 1;
		unsigned delegateDidDismissAlertSheet : 1;
		unsigned hideButtonBar : 1;
		unsigned alertStyle : 3;
		unsigned dontDimBackground : 1;
		unsigned dismissSuspended : 1;
		unsigned dontBlockInteraction : 1;
		unsigned sheetWasPoppedUp : 1;
		unsigned animating : 1;
		unsigned hideWhenDoneAnimating : 1;
		unsigned layoutWhenDoneAnimating : 1;
		unsigned titleMaxLineCount : 2;
		unsigned bodyTextMaxLineCount : 3;
		unsigned runsModal : 1;
		unsigned runningModal : 1;
		unsigned addedTextView : 1;
		unsigned addedTableShadows : 1;
		unsigned showOverSBAlerts : 1;
		unsigned showMinTableContent : 1;
		unsigned bodyTextTruncated : 1;
		unsigned orientation : 3;
		unsigned groupsTextFields : 1;
		unsigned includesCancel : 1;
		unsigned useUndoStyle : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateClickedButtonAtIndex2 : 1;
		unsigned delegateCancel : 1;
		unsigned delegateCancel2 : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateWillPresent2 : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateDidPresent2 : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateWillDismiss2 : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidDismiss2 : 1;
		unsigned delegateShouldEnableFirstOtherButton : 1;
		unsigned forceHorizontalButtonsLayout : 1;
		unsigned suppressKeyboardOnPopup : 1;
		unsigned keyboardShowing : 1;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned manualKeyboardVisible : 1;
		unsigned rotatingManualKeybaord : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned forceKeyboardUse : 1;
		unsigned cancelWhenDoneAnimating : 1;
		unsigned alertViewStyle : 3;
		unsigned isSBAlert : 1;
		unsigned isBeingDismissed : 1;
	} _modalViewFlags;
}
@property(assign, nonatomic) int alertViewStyle;
@property(assign, nonatomic) int cancelButtonIndex;
@property(assign, nonatomic) id delegate;
@property(readonly, assign, nonatomic) int firstOtherButtonIndex;
@property(copy, nonatomic) NSString* message;
@property(readonly, assign, nonatomic) int numberOfButtons;
@property(copy, nonatomic) NSString* title;
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;
+(id)_alertViewForSessionWithRemoteViewController:(id)remoteViewController;
+(id)_alertWindow;
+(id)_popupAlertBackground:(BOOL)background;
+(void)_setSpringBoardAlertDisplayingOverApplicationAlert:(BOOL)alert;
+(BOOL)_springBoardAlertDisplayingOverApplicationAlert;
+(void)applyTransformToAllAlerts:(CGAffineTransform)allAlerts;
+(CGSize)minimumSize;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;
-(id)initWithTitle:(id)title message:(id)message delegate:(id)delegate cancelButtonTitle:(id)title4 otherButtonTitles:(id)titles;
-(id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;
-(id)_addButtonWithTitle:(id)title;
-(id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;
-(id)_addButtonWithTitleText:(id)titleText;
-(void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;
-(void)_addTextEntryFieldsWithStyle:(int)style;
-(id)_addTextFieldWithValue:(id)value label:(id)label;
-(void)_adjustLabelFontSizes;
-(int)_alertOrientation;
-(void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;
-(void)_alertSheetTextFieldDidChange:(id)_alertSheetTextField;
-(void)_alertSheetTextFieldDidEndEditing:(id)_alertSheetTextField;
-(void)_alertSheetTextFieldDidStartEditing:(id)_alertSheetTextField;
-(void)_alertSheetTextFieldReturn:(id)aReturn;
-(void)_appSuspended:(id)suspended;
-(float)_bottomVerticalInset;
-(void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;
-(void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;
-(id)_buttonAtIndex:(int)index;
-(void)_buttonClicked:(id)clicked;
-(float)_buttonHeight;
-(BOOL)_canShowAlerts;
-(void)_cancelAnimated:(BOOL)animated;
-(void)_cleanupAfterPopupAnimation;
-(void)_cleanupKBWatcher;
-(void)_createBodyTextLabelIfNeeded;
-(void)_createSubtitleLabelIfNeeded;
-(void)_createTaglineTextLabelIfNeeded;
-(void)_createTitleLabelIfNeeded;
-(int)_currentOrientation;
-(id)_defaultButton;
-(id)_destructiveButton;
-(id)_dimView;
-(BOOL)_dimsBackground;
-(id)_firstOtherButton;
-(void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;
-(void)_handleKeyEvent:(GSEventRef)event;
-(BOOL)_isAnimating;
-(BOOL)_isSBAlert;
-(void)_jiggleStage1AnimationDidStop:(id)_jiggleStage1Animation finished:(id)finished;
-(void)_jiggleStage2AnimationDidStop:(id)_jiggleStage2Animation finished:(id)finished;
-(void)_jiggleStage3AnimationDidStop:(id)_jiggleStage3Animation finished:(id)finished;
-(void)_jiggleStage4AnimationDidStop:(id)_jiggleStage4Animation finished:(id)finished;
-(void)_jiggleStage5AnimationDidStop:(id)_jiggleStage5Animation finished:(id)finished;
-(void)_jiggleStage6AnimationDidStop:(id)_jiggleStage6Animation finished:(id)finished;
-(void)_keyboardDidHide:(id)_keyboard;
-(void)_keyboardHiddingAnimationDidStop:(id)_keyboardHiddingAnimation finished:(id)finished;
-(void)_keyboardWillHide:(id)_keyboard;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)_layoutIfNeeded;
-(void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;
-(BOOL)_manualKeyboardIsVisible;
-(float)_maxHeight;
-(BOOL)_needsKeyboard;
-(void)_nukeOldTextFields;
-(void)_performPopoutAnimationAnimated:(BOOL)animated coveredBySpringBoardAlert:(BOOL)alert;
-(void)_performPopup:(BOOL)popup;
-(void)_performPopup:(BOOL)popup animationType:(int)type;
-(void)_performPopup:(BOOL)popup animationType:(int)type revealedBySpringBoardAlert:(BOOL)alert;
-(void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;
-(void)_prepareForDisplay;
-(void)_prepareToBeReplaced;
-(void)_presentSheetFromView:(id)view above:(BOOL)above;
-(void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;
-(void)_removeAlertWindowOrShowAnOldAlert;
-(void)_repopup;
-(void)_repopupNoAnimation;
-(void)_rotatingAnimationDidStop:(id)_rotatingAnimation;
-(void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;
-(void)_setDefaultButton:(id)button;
-(void)_setDestructiveButton:(id)button;
-(void)_setFirstOtherButtonIndex:(int)index;
-(void)_setTextFieldsHidden:(BOOL)hidden;
-(void)_setupKBWatcher;
-(void)_setupTitleStyle;
-(BOOL)_shouldOrderInAutomaticKeyboard;
-(void)_showKeyboard:(BOOL)keyboard animated:(BOOL)animated;
-(void)_showManualKBIfNecessary;
-(void)_slideSheetOut:(BOOL)anOut;
-(void)_temporarilyHideAnimated:(BOOL)animated;
-(id)_textFieldAtIndex:(int)index;
-(float)_titleHorizontalInset;
-(float)_titleVerticalBottomInset;
-(float)_titleVerticalTopInset;
-(void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;
-(void)_updateFrameForDisplay;
-(void)_updateKeyboardStateForPreviousResponder:(id)previousResponder;
-(void)_useUndoStyle:(BOOL)style;
-(void)_willRotateKeyboard;
-(int)addButtonWithTitle:(id)title;
-(id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;
-(id)addButtonWithTitle:(id)title label:(id)label;
-(id)addTextFieldWithValue:(id)value label:(id)label;
-(int)alertSheetStyle;
// declared property getter: -(int)alertViewStyle;
-(CGSize)backgroundSize;
-(BOOL)becomeFirstResponder;
-(BOOL)blocksInteraction;
-(int)bodyMaxLineCount;
-(id)bodyText;
-(id)bodyTextLabel;
-(id)buttonAtIndex:(int)index;
-(int)buttonCount;
-(id)buttonTitleAtIndex:(int)index;
-(id)buttons;
-(BOOL)canBecomeFirstResponder;
// declared property getter: -(int)cancelButtonIndex;
-(id)context;
-(void)dealloc;
-(id)defaultButton;
-(int)defaultButtonIndex;
// declared property getter: -(id)delegate;
-(id)destructiveButton;
-(BOOL)dimsBackground;
-(void)dismiss;
-(void)dismissAnimated:(BOOL)animated;
-(void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;
// declared property getter: -(int)firstOtherButtonIndex;
-(BOOL)forceHorizontalButtonsLayout;
-(BOOL)groupsTextFields;
-(BOOL)isBodyTextTruncated;
// declared property getter: -(BOOL)isVisible;
-(id)keyboard;
-(void)layout;
-(void)layoutAnimated:(BOOL)animated;
-(void)layoutAnimated:(BOOL)animated withDuration:(double)duration;
// declared property getter: -(id)message;
// declared property getter: -(int)numberOfButtons;
-(int)numberOfLinesInTitle;
-(int)numberOfRows;
-(void)popupAlertAnimated:(BOOL)animated;
-(void)popupAlertAnimated:(BOOL)animated animationType:(int)type;
-(void)popupAlertAnimated:(BOOL)animated animationType:(int)type atOffset:(float)offset;
-(void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;
-(void)presentSheetFromAboveView:(id)aboveView;
-(void)presentSheetFromBehindView:(id)behindView;
-(void)presentSheetFromButtonBar:(id)buttonBar;
-(void)presentSheetInView:(id)view;
-(void)presentSheetToAboveView:(id)aboveView;
-(void)removeFromSuperview;
-(void)replaceAlert:(id)alert;
-(BOOL)requiresPortraitOrientation;
-(BOOL)resignFirstResponder;
-(BOOL)runsModal;
-(void)setAlertSheetStyle:(int)style;
// declared property setter: -(void)setAlertViewStyle:(int)style;
-(void)setBlocksInteraction:(BOOL)interaction;
-(void)setBodyText:(id)text;
-(void)setBodyTextMaxLineCount:(int)count;
// declared property setter: -(void)setCancelButtonIndex:(int)index;
-(void)setContext:(id)context;
-(void)setDefaultButton:(id)button;
-(void)setDefaultButtonIndex:(int)index;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setDestructiveButton:(id)button;
-(void)setDimView:(id)view;
-(void)setDimsBackground:(BOOL)background;
-(void)setForceHorizontalButtonsLayout:(BOOL)layout;
-(void)setGroupsTextFields:(BOOL)fields;
-(void)setKeyboardShowsOnPopup:(BOOL)popup;
// declared property setter: -(void)setMessage:(id)message;
-(void)setNumberOfRows:(int)rows;
-(void)setRunsModal:(BOOL)modal;
-(void)setShowsOverSpringBoardAlerts:(BOOL)alerts;
-(void)setSubtitle:(id)subtitle;
-(void)setSuspendTag:(int)tag;
-(void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;
-(void)setTaglineText:(id)text;
// declared property setter: -(void)setTitle:(id)title;
-(void)setTitleMaxLineCount:(int)count;
-(void)show;
-(void)showWithAnimationType:(int)animationType;
-(BOOL)showsOverSpringBoardAlerts;
-(id)subtitle;
-(int)suspendTag;
-(BOOL)tableShouldShowMinimumContent;
-(id)tableView;
-(id)taglineTextLabel;
-(id)textField;
-(id)textFieldAtIndex:(int)index;
-(int)textFieldCount;
// declared property getter: -(id)title;
-(id)titleLabel;
-(int)titleMaxLineCount;
-(CGRect)titleRect;
@end

