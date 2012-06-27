/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ALAssetsLibraryAsset.h"

@class PLPhotoLibrary, PLManagedAsset, ALAssetsLibrary;

__attribute__((visibility("hidden")))
@interface ALAssetPrivate : XXUnknownSuperclass <ALAssetsLibraryAsset> {
@private
	ALAssetsLibrary* _library;
	BOOL _isValid;
	PLManagedAsset* _photo;
	PLPhotoLibrary* _photoLibrary;
}
@property(retain, nonatomic) PLPhotoLibrary* _photoLibrary;	// @synthesize
@property(assign, nonatomic) BOOL isValid;	// @synthesize=_isValid
@property(assign, nonatomic) ALAssetsLibrary* library;
@property(retain, nonatomic) PLManagedAsset* photo;	// @synthesize=_photo
-(id)initWithManagedAsset:(id)managedAsset library:(id)library;
-(void)_performBlockAndWait:(id)wait;
// declared property getter: -(id)_photoLibrary;
-(void)dealloc;
// declared property getter: -(BOOL)isValid;
// declared property getter: -(id)library;
-(void)libraryDidChange;
-(void)libraryWillDisappear;
// declared property getter: -(id)photo;
// declared property setter: -(void)setIsValid:(BOOL)valid;
// declared property setter: -(void)setLibrary:(id)library;
// declared property setter: -(void)setPhoto:(id)photo;
// declared property setter: -(void)set_photoLibrary:(id)library;
@end
