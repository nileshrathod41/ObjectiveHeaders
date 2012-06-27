/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MPTimeMarker, MPAVItem;

@interface MPAVItemTimeMarkerEvent : XXUnknownSuperclass {
@private
	MPAVItem* _AVItem;
	MPTimeMarker* _chapterMarker;
	MPTimeMarker* _artworkMarker;
	MPTimeMarker* _URLMarker;
	MPTimeMarker* _closedCaptionMarker;
}
@property(retain, nonatomic) MPAVItem* AVItem;	// @synthesize=_AVItem
@property(retain, nonatomic) MPTimeMarker* URLMarker;	// @synthesize=_URLMarker
@property(retain, nonatomic) MPTimeMarker* artworkMarker;	// @synthesize=_artworkMarker
@property(retain, nonatomic) MPTimeMarker* chapterMarker;	// @synthesize=_chapterMarker
@property(retain, nonatomic) MPTimeMarker* closedCaptionMarker;	// @synthesize=_closedCaptionMarker
-(id)initWithTimeMarkerNotificationUserInfo:(id)timeMarkerNotificationUserInfo;
// declared property getter: -(id)AVItem;
// declared property getter: -(id)URLMarker;
// declared property getter: -(id)artworkMarker;
// declared property getter: -(id)chapterMarker;
// declared property getter: -(id)closedCaptionMarker;
-(id)crossedMarkerOfType:(int)type;
-(void)dealloc;
// declared property setter: -(void)setAVItem:(id)item;
// declared property setter: -(void)setArtworkMarker:(id)marker;
// declared property setter: -(void)setChapterMarker:(id)marker;
// declared property setter: -(void)setClosedCaptionMarker:(id)marker;
// declared property setter: -(void)setURLMarker:(id)marker;
@end

