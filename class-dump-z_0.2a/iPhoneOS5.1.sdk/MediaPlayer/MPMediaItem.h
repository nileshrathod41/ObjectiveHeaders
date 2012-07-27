/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaItem.h"
#import "MPMediaEntity.h"

@class NSArray, MPMediaItemArtwork, NSString, NSDate;

@interface MPMediaItem : MPMediaEntity {
}
@property(readonly, assign, nonatomic) NSString* albumArtist;
@property(readonly, assign, nonatomic) NSString* albumTitle;
@property(readonly, assign, nonatomic) NSString* artist;
@property(readonly, assign, nonatomic) MPMediaItemArtwork* artwork;
@property(assign, nonatomic) double bookmarkTime;
@property(readonly, assign, nonatomic) NSArray* chapters;
@property(readonly, assign, nonatomic) NSString* composer;
@property(readonly, assign, nonatomic) NSString* effectiveAlbumArtist;
@property(readonly, assign, nonatomic) double effectiveStopTime;
@property(readonly, assign, nonatomic) NSString* genre;
@property(assign, nonatomic) BOOL hasBeenPlayed;
@property(readonly, assign, nonatomic) BOOL isITunesU;
@property(readonly, assign, nonatomic) BOOL isRental;
@property(copy, nonatomic) NSDate* lastPlayedDate;
@property(copy, nonatomic) NSDate* lastSkippedDate;
@property(readonly, assign, nonatomic) int mediaType;
@property(assign, nonatomic) unsigned playCount;
@property(assign, nonatomic) unsigned playCountSinceSync;
@property(readonly, assign, nonatomic) double playbackDuration;
@property(readonly, assign, nonatomic) NSString* podcastTitle;
@property(assign, nonatomic) unsigned rating;
@property(readonly, assign, nonatomic) NSDate* releaseDate;
@property(readonly, assign, nonatomic) BOOL rememberBookmarkTime;
@property(assign, nonatomic) unsigned skipCount;
@property(assign, nonatomic) unsigned skipCountSinceSync;
@property(readonly, assign, nonatomic) double startTime;
@property(readonly, assign, nonatomic) double stopTime;
@property(readonly, assign, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) unsigned year;
+(void)_createFilterableDictionary;
+(BOOL)_isValidItemProperty:(id)property;
+(BOOL)canFilterByProperty:(id)property;
+(id)dynamicProperties;
+(id)persistentIDPropertyForGroupingType:(int)groupingType;
+(id)titlePropertyForGroupingType:(int)groupingType;
-(id)initWithCoder:(id)coder;
-(id)initWithPersistentID:(unsigned long long)persistentID;
-(id)_bestStoreURL;
-(id)_directStoreURL;
-(id)_libraryLinkArtist;
-(id)_libraryLinkKind;
-(id)_libraryLinkPlaylistName;
-(id)_libraryLinkURL;
// declared property getter: -(id)albumArtist;
// declared property getter: -(id)albumTitle;
// declared property getter: -(id)artist;
// declared property getter: -(id)artwork;
// declared property getter: -(double)bookmarkTime;
-(id)chapterOfType:(int)type atIndex:(unsigned)index;
-(id)chapterOfType:(int)type atTime:(double)time;
// declared property getter: -(id)chapters;
-(id)chaptersOfType:(int)type;
// declared property getter: -(id)composer;
-(unsigned)countOfChaptersOfType:(int)type;
// declared property getter: -(id)effectiveAlbumArtist;
// declared property getter: -(double)effectiveStopTime;
-(void)encodeWithCoder:(id)coder;
-(BOOL)existsInLibrary;
-(void)gaplessHeuristicInfo:(unsigned*)info duration:(unsigned*)duration lastPacketsResync:(unsigned*)resync encodingDelay:(unsigned*)delay encodingDrain:(unsigned*)drain;
// declared property getter: -(id)genre;
// declared property getter: -(BOOL)hasBeenPlayed;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(BOOL)isITunesU;
// declared property getter: -(BOOL)isRental;
// declared property getter: -(id)lastPlayedDate;
// declared property getter: -(id)lastSkippedDate;
// declared property getter: -(int)mediaType;
// declared property getter: -(unsigned)playCount;
// declared property getter: -(unsigned)playCountSinceSync;
// declared property getter: -(double)playbackDuration;
// declared property getter: -(id)podcastTitle;
-(id)predicateForProperty:(id)property;
// declared property getter: -(unsigned)rating;
// declared property getter: -(id)releaseDate;
// declared property getter: -(BOOL)rememberBookmarkTime;
-(id)representativeItem;
// declared property setter: -(void)setBookmarkTime:(double)time;
// declared property setter: -(void)setHasBeenPlayed:(BOOL)played;
// declared property setter: -(void)setLastPlayedDate:(id)date;
// declared property setter: -(void)setLastSkippedDate:(id)date;
// declared property setter: -(void)setPlayCount:(unsigned)count;
// declared property setter: -(void)setPlayCountSinceSync:(unsigned)sync;
// declared property setter: -(void)setRating:(unsigned)rating;
// declared property setter: -(void)setSkipCount:(unsigned)count;
// declared property setter: -(void)setSkipCountSinceSync:(unsigned)sync;
// declared property getter: -(unsigned)skipCount;
// declared property getter: -(unsigned)skipCountSinceSync;
// declared property getter: -(double)startTime;
// declared property getter: -(double)stopTime;
// declared property getter: -(id)title;
-(id)valueForProperty:(id)property;
// declared property getter: -(unsigned)year;
@end

@interface MPMediaItem (MPMediaDownloadObserverAdditions)
@property(readonly, assign, nonatomic) BOOL _hasDownloadProgress;
@property(readonly, assign, nonatomic) BOOL _isDownloadable;
+(BOOL)_hasDownloadProgressForDownloadStatus:(int)downloadStatus downloadIdentifier:(id)identifier isTemporaryCloudDownload:(BOOL)download mediaItemPersistentID:(id)anId;
+(BOOL)_isDownloadableForRedownloadParameters:(id)redownloadParameters filePath:(id)path downloadStatus:(int)status isTemporaryCloudDownload:(BOOL)download;
// declared property getter: -(BOOL)_hasDownloadProgress;
// declared property getter: -(BOOL)_isDownloadable;
@end

@interface MPMediaItem (MPUbiquitousAdditions)
+(id)daapKeyForMediaProperty:(id)mediaProperty;
+(id)daapValueFromMediaValue:(id)mediaValue mediaProperty:(id)property;
+(id)mediaPropertyForDAAPKey:(id)daapkey;
+(id)mediaValueFromDAAPValue:(id)daapvalue mediaProperty:(id)property;
@end

