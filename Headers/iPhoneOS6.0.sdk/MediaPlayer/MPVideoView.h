/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSString, MPMovieSnapshotController, MPAVController;

@interface MPVideoView : XXUnknownSuperclass {
	MPAVController* _player;
	MPMovieSnapshotController* _snapshotController;
	NSString* _moviePath;
	NSString* _movieSubtitle;
	NSString* _movieTitle;
	NSString* _videoID;
	double _startTime;
	double _stopTime;
@private
	unsigned _scaleMode;
}
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;
@property(readonly, assign, nonatomic) unsigned effectiveScaleMode;
@property(readonly, assign, nonatomic) CGRect movieContentFrame;
@property(readonly, assign, nonatomic) CGRect movieFrame;
@property(retain, nonatomic) NSString* movieSubtitle;	// @synthesize=_movieSubtitle
@property(retain, nonatomic) NSString* movieTitle;	// @synthesize=_movieTitle
@property(assign, nonatomic) MPAVController* player;	// @synthesize=_player
@property(assign, nonatomic) unsigned scaleMode;	// @synthesize=_scaleMode
@property(assign, nonatomic) double startTime;	// @synthesize=_startTime
@property(assign, nonatomic) double stopTime;	// @synthesize=_stopTime
@property(copy, nonatomic) NSString* videoID;	// @synthesize=_videoID
+(Class)layerClass;
-(id)initWithFrame:(CGRect)frame;
-(void)_bufferingStateChangedNotification:(id)notification;
-(void)_playbackStateChangedNotification:(id)notification;
// declared property getter: -(BOOL)canChangeScaleMode;
-(void)cancelSnapshots;
-(void)dealloc;
// declared property getter: -(unsigned)effectiveScaleMode;
// declared property getter: -(CGRect)movieContentFrame;
// declared property getter: -(CGRect)movieFrame;
-(id)moviePath;
// declared property getter: -(id)movieSubtitle;
// declared property getter: -(id)movieTitle;
-(void)play;
-(void)playFromBeginning;
-(void)playWhenLikelyToKeepUp;
// declared property getter: -(id)player;
-(void)prepareAVControllerQueue;
// declared property getter: -(unsigned)scaleMode;
-(void)scheduleThumbnailWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;
// declared property setter: -(void)setMovieSubtitle:(id)subtitle;
// declared property setter: -(void)setMovieTitle:(id)title;
-(void)setMovieWithPath:(id)path;
// declared property setter: -(void)setPlayer:(id)player;
// declared property setter: -(void)setScaleMode:(unsigned)mode;
-(void)setScaleMode:(unsigned)mode animated:(BOOL)animated;
-(void)setScaleMode:(unsigned)mode duration:(float)duration;
// declared property setter: -(void)setStartTime:(double)time;
// declared property setter: -(void)setStopTime:(double)time;
// declared property setter: -(void)setVideoID:(id)anId;
// declared property getter: -(double)startTime;
// declared property getter: -(double)stopTime;
-(void)toggleScaleMode:(BOOL)mode;
// declared property getter: -(id)videoID;
@end

