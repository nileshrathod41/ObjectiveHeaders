/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class MPImageModifier, UIColor, UIImage, MPImageCache;
@protocol MPImageRequestDelegate, NSObject, NSCopying;

@interface MPImageCacheRequest : XXUnknownSuperclass {
	MPImageCache* _cache;
	id _completionHandler;
	int _contentMode;
	BOOL _decodeOnFetch;
	id<MPImageRequestDelegate> _delegate;
	UIColor* _fillColor;
	CGSize _finalSize;
	MPImageModifier* _modifier;
	id<NSObject, NSCopying> _uniqueKey;
	long long _tag;
}
@property(assign, nonatomic) MPImageCache* cache;	// @synthesize=_cache
@property(readonly, assign, nonatomic) BOOL canRequestSynchronously;
@property(copy, nonatomic) id completionHandler;	// @synthesize=_completionHandler
@property(assign, nonatomic) int contentMode;	// @synthesize=_contentMode
@property(assign, nonatomic) BOOL decodeOnFetch;	// @synthesize=_decodeOnFetch
@property(assign, nonatomic) id<MPImageRequestDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) UIColor* fillColor;	// @synthesize=_fillColor
@property(assign, nonatomic) CGSize finalSize;	// @synthesize=_finalSize
@property(retain, nonatomic) MPImageModifier* modifier;	// @synthesize=_modifier
@property(readonly, assign, nonatomic) UIImage* placeholderImage;
@property(assign, nonatomic) long long tag;	// @synthesize=_tag
@property(retain, nonatomic) id<NSObject, NSCopying> uniqueKey;	// @synthesize=_uniqueKey
-(id)init;
-(BOOL)_canUseInputImageAsFinalOutput:(id)output;
-(void)_getGeometryForCreatingNewImage:(id)creatingNewImage finalSize:(CGSize)size contentSize:(CGSize*)size3 contentSubRect:(CGRect*)rect imageFrame:(CGRect*)frame;
-(id)_newBitmapImageFromImage:(id)image finalSize:(CGSize)size;
-(void)_sendErrorToDelegate:(id)delegate;
-(void)_sendImageToDelegate:(id)delegate;
// declared property getter: -(id)cache;
// declared property getter: -(BOOL)canRequestSynchronously;
-(void)cancel;
// declared property getter: -(id)completionHandler;
// declared property getter: -(int)contentMode;
-(id)copyImageFromImage:(id)image;
-(id)copyRawImageReturningError:(id*)error;
-(void)dealloc;
// declared property getter: -(BOOL)decodeOnFetch;
// declared property getter: -(id)delegate;
-(id)description;
// declared property getter: -(id)fillColor;
// declared property getter: -(CGSize)finalSize;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)main;
// declared property getter: -(id)modifier;
// declared property getter: -(id)placeholderImage;
// declared property setter: -(void)setCache:(id)cache;
// declared property setter: -(void)setCompletionHandler:(id)handler;
// declared property setter: -(void)setContentMode:(int)mode;
// declared property setter: -(void)setDecodeOnFetch:(BOOL)fetch;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setFillColor:(id)color;
// declared property setter: -(void)setFinalSize:(CGSize)size;
// declared property setter: -(void)setModifier:(id)modifier;
// declared property setter: -(void)setTag:(long long)tag;
// declared property setter: -(void)setUniqueKey:(id)key;
// declared property getter: -(long long)tag;
// declared property getter: -(id)uniqueKey;
@end

