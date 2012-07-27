/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, MPMoviePlayerVideoViewController, NSURL, UIWindow, NSError, MPAVController;

@interface MPMoviePlayerControllerInternalOld : XXUnknownSuperclass {
@private
	MPAVController* _player;
	NSURL* _contentURL;
	int _scalingMode;
	int _movieControlMode;
	UIWindow* _window;
	UIWindow* _previousKeyWindow;
	MPMoviePlayerVideoViewController* _videoViewController;
	UIColor* _backgroundColor;
	unsigned _previousStatusBarOrientation;
	int _previousStatusBarStyle;
	NSError* _playbackError;
	double _initialPlaybackTime;
	struct {
		unsigned active : 1;
		unsigned visible : 1;
		unsigned mediaType : 1;
		unsigned isStreaming : 1;
		unsigned statusBarWasHidden : 1;
		unsigned shouldRestartPlaybackAfterAudioRouteChange : 1;
		unsigned playbackFailed : 1;
		unsigned isFinishing : 1;
		unsigned hideLoadingIndicatorForLocalFiles : 1;
		unsigned fullscreen : 1;
		unsigned playAfterCreatingPlayer : 1;
		unsigned canShowControlsOverlay : 1;
		unsigned tearDownPlayerOnEnd : 1;
		unsigned didSendPreloadNotification : 1;
		unsigned isValidating : 1;
		unsigned unused : 17;
	} _playerBitfield;
}
@end

