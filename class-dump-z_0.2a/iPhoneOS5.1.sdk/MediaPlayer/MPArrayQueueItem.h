/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SSDownload, MPAVItem;

@interface MPArrayQueueItem : XXUnknownSuperclass {
	MPAVItem* _item;
	SSDownload* _download;
	NSString* _path;
	double _startTime;
	double _stopTime;
	NSString* _videoID;
}
@property(retain, nonatomic) SSDownload* download;	// @synthesize=_download
@property(readonly, assign, nonatomic) MPAVItem* item;	// @synthesize=_item
@property(copy, nonatomic) NSString* path;	// @synthesize=_path
@property(assign, nonatomic) double startTime;	// @synthesize=_startTime
@property(assign, nonatomic) double stopTime;	// @synthesize=_stopTime
@property(copy, nonatomic) NSString* videoID;	// @synthesize=_videoID
-(id)init;
-(id)initWithMPAVItem:(id)mpavitem;
-(void)dealloc;
// declared property getter: -(id)download;
// declared property getter: -(id)item;
// declared property getter: -(id)path;
// declared property setter: -(void)setDownload:(id)download;
// declared property setter: -(void)setPath:(id)path;
// declared property setter: -(void)setStartTime:(double)time;
// declared property setter: -(void)setStopTime:(double)time;
// declared property setter: -(void)setVideoID:(id)anId;
// declared property getter: -(double)startTime;
// declared property getter: -(double)stopTime;
// declared property getter: -(id)videoID;
@end

