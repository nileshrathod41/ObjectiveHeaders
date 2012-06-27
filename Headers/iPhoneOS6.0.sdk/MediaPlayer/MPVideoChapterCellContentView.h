/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class MPTimeMarker, MPImageCache, UIImage, MPImageCacheRequest;

@interface MPVideoChapterCellContentView : XXUnknownSuperclass {
	unsigned _current : 1;
	unsigned _index;
	unsigned _selected : 1;
	unsigned _showThumbnailColumn : 1;
	float _timeColumnWidth;
	MPTimeMarker* _timeMarker;
	UIImage* _artwork;
	MPImageCache* _artworkImageCache;
	MPImageCacheRequest* _artworkImageRequest;
}
@property(retain, nonatomic) UIImage* artwork;	// @synthesize=_artwork
@property(retain, nonatomic) MPImageCache* artworkImageCache;	// @synthesize=_artworkImageCache
@property(assign, nonatomic, getter=isCurrent) BOOL current;
@property(assign, nonatomic) unsigned index;	// @synthesize=_index
@property(assign, nonatomic, getter=isSelected) BOOL selected;
@property(assign, nonatomic) BOOL showThumbnailColumn;
@property(assign, nonatomic) float timeColumnWidth;	// @synthesize=_timeColumnWidth
@property(retain, nonatomic) MPTimeMarker* timeMarker;	// @synthesize=_timeMarker
// declared property getter: -(id)artwork;
// declared property getter: -(id)artworkImageCache;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(unsigned)index;
// declared property getter: -(BOOL)isCurrent;
// declared property getter: -(BOOL)isSelected;
// declared property setter: -(void)setArtwork:(id)artwork;
// declared property setter: -(void)setArtworkImageCache:(id)cache;
-(void)setArtworkImageRequest:(id)request artworkLoadCompletionHandler:(id)handler;
// declared property setter: -(void)setCurrent:(BOOL)current;
// declared property setter: -(void)setIndex:(unsigned)index;
// declared property setter: -(void)setSelected:(BOOL)selected;
// declared property setter: -(void)setShowThumbnailColumn:(BOOL)column;
// declared property setter: -(void)setTimeColumnWidth:(float)width;
// declared property setter: -(void)setTimeMarker:(id)marker;
// declared property getter: -(BOOL)showThumbnailColumn;
// declared property getter: -(float)timeColumnWidth;
// declared property getter: -(id)timeMarker;
@end
