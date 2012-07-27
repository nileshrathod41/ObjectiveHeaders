/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

#import <PhotoLibrary/PLManagedAsset.h>
#import "AssetsLibrary-Structs.h"

@class ALAssetRepresentationPrivate;

@interface ALAssetRepresentation : PLManagedAsset {
@private
	id _internal;
}
@property(retain, nonatomic) ALAssetRepresentationPrivate* internal;	// @synthesize=_internal
-(id)initWithManagedAsset:(id)managedAsset sidecar:(id)sidecar extension:(id)extension library:(id)library;
-(CGImageRef)CGImageWithOptions:(id)options;
-(CGImageRef)CGImageWithOptions:(id)options format:(int)format bakeInOrientation:(int)orientation;
-(id)UTI;
-(int)_fileDescriptor;
-(id)_imageData;
-(void)dealloc;
-(id)description;
-(CGSize)dimensions;
-(id)filename;
-(CGImageRef)fullResolutionImage;
-(CGImageRef)fullScreenImage;
-(unsigned)getBytes:(char*)bytes fromOffset:(long long)offset length:(unsigned)length error:(id*)error;
// declared property getter: -(id)internal;
-(BOOL)isValid;
-(id)metadata;
-(int)orientation;
-(float)scale;
// declared property setter: -(void)setInternal:(id)internal;
-(long long)size;
-(id)url;
@end

