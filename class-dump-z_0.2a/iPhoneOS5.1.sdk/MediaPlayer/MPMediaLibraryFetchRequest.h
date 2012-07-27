/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MPMediaLibraryEntityWriteStream, NSSet, MPMediaQueryCriteria;

@interface MPMediaLibraryFetchRequest : XXUnknownSuperclass {
@private
	id _entityArray;
	MPMediaLibraryEntityWriteStream* _stream;
}
@property(readonly, assign, nonatomic) NSSet* propertiesToFetch;
@property(readonly, assign, nonatomic) MPMediaQueryCriteria* queryCriteria;
-(id)initWithEntityStreamArray:(id)entityStreamArray;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)propertiesToFetch;
// declared property getter: -(id)queryCriteria;
-(id)streamForWritingWithCount:(unsigned)count containedMediaTypes:(int)types sectionInfo:(id)info;
@end

