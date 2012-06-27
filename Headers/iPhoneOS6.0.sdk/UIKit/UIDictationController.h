/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AFDictationDelegate.h"

@class AFDictationOptions, UIAlertView, NSArray, NSTimer, AFDictationConnection;

__attribute__((visibility("hidden")))
@interface UIDictationController : XXUnknownSuperclass <AFDictationDelegate> {
@private
	AFDictationConnection* _connection;
	AFDictationOptions* _options;
	NSArray* _availableLanguages;
	NSTimer* _recordingLimitTimer;
	void* _callCenterFrameworkFileHandle;
	id _callCenter;
	void* _facetimeCallFrameworkFileHandle;
	id _facetimeCallManager;
	BOOL _wasDisabledDueToTelephonyActivity;
	UIAlertView* _dictationAvailableSoonAlert;
	BOOL _connectionWasAlreadyAliveForStatisticsLogging;
	BOOL dictationStartedFromGesture;
}
@property(assign, nonatomic) BOOL dictationStartedFromGesture;	// @synthesize
+(id)activeInstance;
+(void)applicationDidBecomeActive;
+(void)applicationDidChangeStatusBarFrame;
+(void)applicationWillResignActive;
+(id)bestInterpretationForDictationResult:(id)dictationResult;
+(BOOL)dictationIsFunctional;
+(void)disableGestureHandler;
+(void)enableGestureHandlerIfNecessary;
+(BOOL)fetchCurrentInputModeSupportsDictation;
+(id)inputModeNameForDictation;
+(BOOL)isRunning;
+(void)keyboardDidSetDelegate;
+(void)keyboardDidSetInputMode;
+(void)keyboardDidUpdateOnScreenStatus;
+(void)logCorrectionStatistics;
+(void)networkReachableCallback;
+(BOOL)openAssistantFrameworkIfNecessary;
+(id)prunedDictationResultForSingleLineEditor:(id)singleLineEditor;
+(id)serializedDictationPhrases:(id)phrases;
+(id)serializedDictationPhrases:(id)phrases fromKeyboard:(BOOL)keyboard;
+(id)serializedDictationPhrasesFromTokenMatrix:(id)tokenMatrix fromKeyboard:(BOOL)keyboard;
+(id)serializedInterpretationFromTokens:(id)tokens;
+(BOOL)setupForOpeningConnections;
+(BOOL)setupForPhraseSerialization;
+(id)sharedInstance;
+(BOOL)shouldEnableGestureHandler;
+(void)siriPreferencesChanged;
+(void)updateLandingView;
+(void)willEndEditingInTextView:(id)textView;
-(id)init;
-(id)assistantCompatibleLanguageCodeForLanguage:(id)language region:(id)region;
-(float)audioLevel;
-(void)cancelDictation;
-(void)cancelRecordingLimitTimer;
-(id)connection;
-(id)connectionForStatisticsLogging;
-(void)dealloc;
-(void)delayedTelephonyCheckingSetup;
-(void)dictationConnection:(id)connection didRecognizePhrases:(id)phrases correctionIdentifier:(id)identifier;
-(void)dictationConnection:(id)connection speechRecognitionDidFail:(id)speechRecognition;
-(void)dictationConnection:(id)connection speechRecordingDidFail:(id)speechRecording;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)dictationConnectionSpeechRecording;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)dictationConnectionSpeechRecording;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)dictationConnectionSpeechRecording;
-(void)dictationConnectionSpeechRecordingWillBegin:(id)dictationConnectionSpeechRecording;
-(BOOL)dictationEnabled;
-(id)dictationPhraseArrayFromDictationResult:(id)dictationResult;
// declared property getter: -(BOOL)dictationStartedFromGesture;
-(void)disableAutorotation;
-(BOOL)disabledDueToTelephonyActivity;
-(void)enableProximity;
-(void)errorAnimationDidFinish;
-(id)fieldIdentifierInputDelegate:(id)delegate;
-(id)inputModeThatInvokedDictation;
-(float)normalizedAudioLevel;
-(id)postfixTextForInputDelegate:(id)inputDelegate;
-(id)prefixTextForInputDelegate:(id)inputDelegate;
-(void)proximityStateChanged:(id)changed;
-(void)reenableAutorotation;
-(void)releaseConnection;
-(void)releaseConnectionAfterDictationRequest;
-(void)releaseConnectionAfterStatisticsLogging;
-(id)selectedTextForInputDelegate:(id)inputDelegate;
// declared property setter: -(void)setDictationStartedFromGesture:(BOOL)gesture;
-(void)setState:(int)state;
-(void)setupConnectionOptions;
-(void)setupForDictationStart;
-(void)startConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;
-(void)startConnectionForReason:(int)reason;
-(void)startDictation;
-(void)startDictationForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;
-(void)startDictationForReason:(int)reason;
-(void)startRecordingLimitTimer;
-(int)state;
-(void)stopDictation;
-(BOOL)supportsInputMode:(id)mode error:(id*)error;
-(BOOL)wasDisabledDueToTelephonyActivity;
@end

