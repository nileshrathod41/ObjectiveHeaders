/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaDownloadObserver.h"


@interface MPPreparingDownloadObserver : MPMediaDownloadObserver {
}
-(id)initWithMediaItemPersistentIdentifier:(id)mediaItemPersistentIdentifier;
-(void)_onQueue_invalidate;
-(BOOL)canCancel;
-(void)cancelDownload;
-(double)downloadProgress;
@end

