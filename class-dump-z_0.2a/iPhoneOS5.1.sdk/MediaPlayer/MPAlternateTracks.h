/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSDictionary, MPAVItem;

@interface MPAlternateTracks : XXUnknownSuperclass {
	MPAVItem* _item;
	NSDictionary* _alternateTracks;
	NSMutableDictionary* _trackChangeDictionary;
}
@property(readonly, assign, nonatomic, getter=isLoaded) BOOL loaded;
-(id)initWithItem:(id)item;
-(id)_keyForTrackType:(unsigned)trackType;
-(void)beginTrackChanges;
-(void)commitTrackChanges;
-(id)currentTrackForType:(unsigned)type;
-(void)dealloc;
-(BOOL)hasTracksForTypes:(unsigned)types;
-(unsigned)indexOfCurrentTrackForType:(unsigned)type;
// declared property getter: -(BOOL)isLoaded;
-(void)reloadData;
-(void)setTrack:(id)track forType:(unsigned)type;
-(unsigned)trackCountForTypes:(unsigned)types;
-(id)tracksForType:(unsigned)type;
@end

