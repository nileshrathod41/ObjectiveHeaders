/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, AVPlayerItem, NSMutableArray, AVQueuePlayer, AVAudioSessionMediaPlayerOnly, AVPlayer, NSError;

@interface MPQueuePlayer : XXUnknownSuperclass {
@private
	AVPlayerItem* _currentItem;
	XXStruct_pwHToB _currentTime;
	BOOL _isAirPlayVideoActive;
	BOOL _pausedForPlaybackTransaction;
	id _playbackQueueCommitHandler;
	int _playbackQueueTransactionCount;
	AVQueuePlayer* _player;
	NSMutableArray* _queuedOperations;
	float _rate;
	float _rateBeforePlaybackQueueTransaction;
	int _status;
}
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray* _displaysUsedForPlayback;
@property(readonly, assign, nonatomic) int _externalProtectionStatus;
@property(readonly, assign, nonatomic) AVPlayer* _player;
@property(assign, nonatomic) int actionAtItemEnd;
@property(readonly, assign, nonatomic, getter=isAirPlayVideoActive) BOOL airPlayVideoActive;
@property(assign, nonatomic) BOOL allowsAirPlayVideo;
@property(assign, nonatomic, getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;
@property(readonly, assign, nonatomic) AVPlayerItem* currentItem;
@property(readonly, assign, nonatomic) NSError* error;
@property(readonly, assign, nonatomic) BOOL isPlaybackQueueTransactionActive;
@property(readonly, assign, nonatomic) NSArray* items;
@property(copy, nonatomic) id playbackQueueCommitHandler;	// @synthesize=_playbackQueueCommitHandler
@property(readonly, assign, nonatomic) AVAudioSessionMediaPlayerOnly* playerAVAudioSession;
@property(assign, nonatomic) float rate;
@property(readonly, assign, nonatomic) int status;
@property(assign, nonatomic) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;
-(id)init;
-(BOOL)_CALayerDestinationIsTVOut;
// declared property getter: -(id)_displaysUsedForPlayback;
// declared property getter: -(int)_externalProtectionStatus;
// declared property getter: -(id)_player;
-(BOOL)_resumePlayback:(double)playback error:(id*)error;
-(void)_setCALayerDestinationIsTVOut:(BOOL)anOut;
-(void)_setClientName:(id)name;
// declared property setter: -(void)_setDisplaysUsedForPlayback:(id)playback;
-(void)_setEQPreset:(int)preset;
-(void)_setPreferredLanguageList:(id)list;
-(void)_setStoppingFadeOutDuration:(float)duration;
-(void)_setVolume:(float)volume;
-(void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)inactive;
-(float)_volume;
// declared property getter: -(int)actionAtItemEnd;
-(id)addBoundaryTimeObserverForTimes:(id)times queue:(dispatch_queue_s*)queue usingBlock:(id)block;
-(void)advanceToNextItem;
// declared property getter: -(BOOL)allowsAirPlayVideo;
-(void)beginPlaybackQueueTransactionAndPause:(BOOL)pause;
-(void)commitPlaybackQueueTransaction;
// declared property getter: -(id)currentItem;
-(XXStruct_pwHToB)currentTime;
-(void)dealloc;
// declared property getter: -(id)error;
-(void)insertItem:(id)item afterItem:(id)item2;
// declared property getter: -(BOOL)isAirPlayVideoActive;
// declared property getter: -(BOOL)isClosedCaptionDisplayEnabled;
// declared property getter: -(BOOL)isPlaybackQueueTransactionActive;
// declared property getter: -(id)items;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)pause;
-(void)play;
// declared property getter: -(id)playbackQueueCommitHandler;
// declared property getter: -(id)playerAVAudioSession;
-(void)prepareItem:(id)item withCompletionHandler:(id)completionHandler;
// declared property getter: -(float)rate;
-(void)removeItem:(id)item;
-(void)removeTimeObserver:(id)observer;
-(void)seekToTime:(XXStruct_pwHToB)time;
-(void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;
// declared property setter: -(void)setActionAtItemEnd:(int)itemEnd;
// declared property setter: -(void)setAllowsAirPlayVideo:(BOOL)video;
// declared property setter: -(void)setClosedCaptionDisplayEnabled:(BOOL)enabled;
-(void)setCurrentPlaybackQueueTransactionDisplayTime:(XXStruct_pwHToB)time;
// declared property setter: -(void)setPlaybackQueueCommitHandler:(id)handler;
// declared property setter: -(void)setRate:(float)rate;
// declared property setter: -(void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)active;
// declared property getter: -(int)status;
// declared property getter: -(BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;
@end

