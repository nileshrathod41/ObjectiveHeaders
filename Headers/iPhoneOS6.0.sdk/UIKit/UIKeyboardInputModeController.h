/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UIKeyboardInputMode, NSString, NSMutableArray;
@protocol UIKeyboardInputModeControllerDelegate;

@interface UIKeyboardInputModeController : XXUnknownSuperclass {
@private
	UIKeyboardInputMode* _currentInputMode;
	NSMutableArray* _supportedInputModeIdentifiers;
	NSArray* _inputModesWithoutHardwareSupport;
	NSString* currentLocale;
	NSString* currentLanguage;
	NSArray* keyboardInputModes;
	NSArray* enabledInputModes;
	NSArray* normalizedInputModes;
	NSArray* defaultKeyboardInputModes;
	NSArray* defaultInputModes;
	NSArray* defaultNormalizedInputModes;
	id<UIKeyboardInputModeControllerDelegate> _delegate;
}
@property(readonly, assign, nonatomic) BOOL containsDictationSupportedInputMode;
@property(retain) UIKeyboardInputMode* currentInputMode;
@property(retain) NSString* currentLanguage;	// @synthesize
@property(retain) NSString* currentLocale;	// @synthesize
@property(retain) NSArray* defaultInputModes;	// @synthesize
@property(retain) NSArray* defaultKeyboardInputModes;	// @synthesize
@property(retain) NSArray* defaultNormalizedInputModes;	// @synthesize
@property(assign, nonatomic) id<UIKeyboardInputModeControllerDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign) NSArray* enabledInputModeIdentifiers;
@property(readonly, assign) NSArray* enabledInputModeLanguages;
@property(retain) NSArray* enabledInputModes;	// @synthesize
@property(readonly, assign) NSArray* inputModesWithoutHardwareSupport;
@property(retain) NSArray* keyboardInputModes;	// @synthesize
@property(readonly, assign) NSArray* normalizedEnabledInputModeIdentifiers;
@property(retain) NSArray* normalizedInputModes;	// @synthesize
@property(readonly, assign) NSArray* supportedInputModeIdentifiers;
+(id)sharedInputModeController;
-(id)activeInputModes;
-(void)clearCachedValues;
// declared property getter: -(BOOL)containsDictationSupportedInputMode;
// declared property getter: -(id)currentInputMode;
// declared property getter: -(id)currentLanguage;
// declared property getter: -(id)currentLocale;
-(void)dealloc;
-(id)defaultEnabledInputModesForCurrentLocale:(BOOL)currentLocale;
// declared property getter: -(id)defaultInputModes;
// declared property getter: -(id)defaultKeyboardInputModes;
// declared property getter: -(id)defaultNormalizedInputModes;
// declared property getter: -(id)delegate;
// declared property getter: -(id)enabledInputModeIdentifiers;
-(id)enabledInputModeIdentifiers:(BOOL)identifiers;
// declared property getter: -(id)enabledInputModeLanguages;
// declared property getter: -(id)enabledInputModes;
-(id)inputModeWithIdentifier:(id)identifier;
// declared property getter: -(id)inputModesWithoutHardwareSupport;
// declared property getter: -(id)keyboardInputModes;
// declared property getter: -(id)normalizedEnabledInputModeIdentifiers;
// declared property getter: -(id)normalizedInputModes;
// declared property setter: -(void)setCurrentInputMode:(id)mode;
// declared property setter: -(void)setCurrentLanguage:(id)language;
// declared property setter: -(void)setCurrentLocale:(id)locale;
// declared property setter: -(void)setDefaultInputModes:(id)modes;
// declared property setter: -(void)setDefaultKeyboardInputModes:(id)modes;
// declared property setter: -(void)setDefaultNormalizedInputModes:(id)modes;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setEnabledInputModes:(id)modes;
// declared property setter: -(void)setKeyboardInputModes:(id)modes;
// declared property setter: -(void)setNormalizedInputModes:(id)modes;
-(void)startConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;
-(void)startDictationConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;
// declared property getter: -(id)supportedInputModeIdentifiers;
-(void)updateCurrentInputMode:(id)mode;
@end

