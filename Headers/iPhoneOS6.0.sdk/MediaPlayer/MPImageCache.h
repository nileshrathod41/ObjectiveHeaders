/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MPImageRequestDelegate.h"

@class NSObject, CPLRUDictionary, NSOperationQueue;
@protocol OS_dispatch_queue, MPImageCacheDelegate;

@interface MPImageCache : XXUnknownSuperclass <MPImageRequestDelegate> {
@private
	CPLRUDictionary* _cachedImages;
	NSObject<OS_dispatch_queue>* _cachedImagesQueue;
	unsigned _cacheSize;
	id<MPImageCacheDelegate> _delegate;
	NSOperationQueue* _operationQueue;
	int _retainCount;
	id _libraryDisplayValueChangeObserver;
}
@property(assign, nonatomic) unsigned cacheSize;	// @synthesize=_cacheSize
@property(assign, nonatomic) id<MPImageCacheDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) BOOL imageRequestsSuspended;
@property(assign, nonatomic) id libraryDisplayValueChangeObserver;	// @synthesize=_libraryDisplayValueChangeObserver
-(id)init;
-(void)_cacheImage:(id)image forKey:(id)key;
-(id)_cachedImageForKey:(id)key;
-(void)_didEnterBackgroundNotification:(id)notification;
-(void)_didReceiveMemoryWarningNotification:(id)notification;
-(void)_enqueueRequest:(id)request;
-(id)_imageByApplyingModificationsForCachedImageForRequest:(id)request;
-(BOOL)_isDeallocating;
-(void)_removeCachedImageForKey:(id)key;
-(BOOL)_tryRetain;
-(void)_zapCache;
-(void)_zapCachedPlaceholders;
// declared property getter: -(unsigned)cacheSize;
-(id)cachedImageForRequest:(id)request;
-(void)cancelAllImageRequests;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(id)imageForRequest:(id)request error:(id*)error;
-(id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary;
-(id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary waitUntilFetched:(BOOL)fetched;
-(void)imageRequest:(id)request failedWithError:(id)error;
-(void)imageRequest:(id)request loadedImage:(id)image;
// declared property getter: -(BOOL)imageRequestsSuspended;
// declared property getter: -(id)libraryDisplayValueChangeObserver;
-(void)loadImageForRequest:(id)request asynchronously:(BOOL)asynchronously completionHandler:(id)handler;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
// declared property setter: -(void)setCacheSize:(unsigned)size;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setImageRequestsSuspended:(BOOL)suspended;
// declared property setter: -(void)setLibraryDisplayValueChangeObserver:(id)observer;
@end

