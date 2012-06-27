/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, ALAssetsLibrary, NSCondition, ALAsset;

__attribute__((visibility("hidden")))
@interface _UIGetAssetThread : XXUnknownSuperclass {
@private
	NSURL* _url;
	ALAssetsLibrary* _library;
	NSCondition* _condition;
	ALAsset* _asset;
}
@property(retain) ALAsset* asset;	// @synthesize=_asset
@property(retain) NSCondition* condition;	// @synthesize=_condition
-(id)initWithURL:(id)url assetsLibrary:(id)library;
// declared property getter: -(id)asset;
// declared property getter: -(id)condition;
-(void)dealloc;
-(void)main;
// declared property setter: -(void)setAsset:(id)asset;
// declared property setter: -(void)setCondition:(id)condition;
@end

