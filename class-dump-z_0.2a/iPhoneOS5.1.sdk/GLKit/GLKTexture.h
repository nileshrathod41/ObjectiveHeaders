/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import "GLKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSData;

@interface GLKTexture : XXUnknownSuperclass {
	NSData* imageData;
	CGImageBlockSetRef _blockSet;
	CFDataRef _cfData;
	unsigned _width;
	unsigned _height;
	unsigned orientation;
	unsigned numMipMapLevels;
	unsigned bitsPerPixel;
	unsigned _rowBytes;
	unsigned nComponents;
	unsigned nPrimarySurfaces;
	unsigned nSurfaces;
	int loadMode;
	unsigned texelFormat;
	unsigned _dataCategory;
	unsigned _index;
	unsigned GLTextureName;
	unsigned bindTarget;
	unsigned textureTarget;
	unsigned internalFormat;
	unsigned format;
	unsigned type;
	int _unpackAlignment;
	BOOL isPreMultipliedAlpha;
	BOOL isPowerOfTwo;
	BOOL _isCubeMap;
	BOOL isMipmapped;
	BOOL isVerticalFlipped;
	BOOL hasAlpha;
	BOOL reOrient;
	BOOL grayscaleAsAlpha;
	unsigned _primarySurfaceLength;
	NSString* _label;
}
@property(assign, nonatomic) unsigned GLTextureName;	// @synthesize
@property(assign, nonatomic) unsigned bindTarget;	// @synthesize
@property(assign, nonatomic) unsigned bitsPerPixel;	// @synthesize
@property(assign, nonatomic) unsigned dataCategory;	// @synthesize=_dataCategory
@property(assign, nonatomic) unsigned format;	// @synthesize
@property(assign, nonatomic) BOOL hasAlpha;	// @synthesize
@property(assign, nonatomic) unsigned height;	// @synthesize=_height
@property(readonly, assign) NSData* imageData;	// @synthesize
@property(assign, nonatomic) unsigned index;	// @synthesize=_index
@property(assign, nonatomic) unsigned internalFormat;	// @synthesize
@property(assign, nonatomic) BOOL isCubeMap;	// @synthesize=_isCubeMap
@property(assign, nonatomic) BOOL isMipmapped;	// @synthesize
@property(assign, nonatomic) BOOL isPowerOfTwo;	// @synthesize
@property(assign, nonatomic) BOOL isPreMultipliedAlpha;	// @synthesize
@property(assign, nonatomic) BOOL isVerticalFlipped;	// @synthesize
@property(copy, nonatomic) NSString* label;	// @synthesize=_label
@property(assign, nonatomic) int loadMode;	// @synthesize
@property(assign, nonatomic) unsigned nComponents;	// @synthesize
@property(assign, nonatomic) unsigned nPrimarySurfaces;	// @synthesize
@property(assign, nonatomic) unsigned nSurfaces;	// @synthesize
@property(assign, nonatomic) unsigned numMipMapLevels;	// @synthesize
@property(assign, nonatomic) unsigned orientation;	// @synthesize
@property(assign, nonatomic) BOOL reOrient;	// @synthesize
@property(assign, nonatomic) unsigned rowBytes;	// @synthesize=_rowBytes
@property(assign, nonatomic) unsigned texelFormat;	// @synthesize
@property(assign, nonatomic) unsigned textureTarget;	// @synthesize
@property(assign, nonatomic) unsigned type;	// @synthesize
@property(assign, nonatomic) unsigned width;	// @synthesize=_width
-(id)init;
-(id)initWithCGImage:(CGImageRef)cgimage forceCubeMap:(BOOL)map wasCubeMap:(BOOL*)map3 cubeMapIndex:(int)index options:(id)options error:(id*)error;
-(id)initWithData:(id)data forceCubeMap:(BOOL)map wasCubeMap:(BOOL*)map3 cubeMapIndex:(int)index options:(id)options error:(id*)error;
-(id)initWithDecodedData:(id)decodedData width:(unsigned)width height:(unsigned)height rowBytes:(unsigned)bytes texture:(id)texture cubeMapIndex:(int)index options:(id)options error:(id*)error;
// declared property getter: -(unsigned)GLTextureName;
-(BOOL)_uploadToGLTexture:(unsigned)gltexture data:(id)data width:(int)width height:(int)height dataCategory:(int)category cubeMapIndex:(int)index mipMapIndex:(int)index7 error:(id*)error;
-(void*)alignmentFix:(unsigned long)fix data:(const void*)data;
-(BOOL)applyTextureOperations:(void*)operations source:(void*)source withWidth:(unsigned)width withHeight:(unsigned)height withRowBytes:(unsigned)rowBytes error:(id*)error;
// declared property getter: -(unsigned)bindTarget;
// declared property getter: -(unsigned)bitsPerPixel;
// declared property getter: -(unsigned)dataCategory;
-(void)dealloc;
-(BOOL)decodeCGImage:(CGImageRef)image premultiplyAlpha:(BOOL)alpha;
-(BOOL)decodeCGImageDataProvider:(CGImageRef)provider;
-(BOOL)decodeCGImageImageProvider:(CGImageRef)provider CGImageProvider:(CGImageProviderRef)provider2 premultiplyAlpha:(BOOL)alpha;
-(BOOL)determineCGImageBlockFormatWithComponentType:(int)componentType andPixelSize:(unsigned long)size andColorModel:(int)model;
-(BOOL)determinePVRFormat:(unsigned)format;
// declared property getter: -(unsigned)format;
// declared property getter: -(BOOL)hasAlpha;
// declared property getter: -(unsigned)height;
// declared property getter: -(id)imageData;
// declared property getter: -(unsigned)index;
// declared property getter: -(unsigned)internalFormat;
// declared property getter: -(BOOL)isCubeMap;
// declared property getter: -(BOOL)isMipmapped;
// declared property getter: -(BOOL)isPowerOfTwo;
// declared property getter: -(BOOL)isPreMultipliedAlpha;
// declared property getter: -(BOOL)isVerticalFlipped;
// declared property getter: -(id)label;
-(BOOL)loadCGImage:(CGImageRef)image options:(id)options error:(id*)error;
// declared property getter: -(int)loadMode;
-(BOOL)loadPVRTCData:(id)data error:(id*)error;
-(BOOL)loadWithData:(id)data options:(id)options error:(id*)error;
// declared property getter: -(unsigned)nComponents;
// declared property getter: -(unsigned)nPrimarySurfaces;
// declared property getter: -(unsigned)nSurfaces;
// declared property getter: -(unsigned)numMipMapLevels;
// declared property getter: -(unsigned)orientation;
// declared property getter: -(BOOL)reOrient;
// declared property getter: -(unsigned)rowBytes;
// declared property setter: -(void)setBindTarget:(unsigned)target;
// declared property setter: -(void)setBitsPerPixel:(unsigned)pixel;
// declared property setter: -(void)setDataCategory:(unsigned)category;
// declared property setter: -(void)setFormat:(unsigned)format;
// declared property setter: -(void)setGLTextureName:(unsigned)name;
// declared property setter: -(void)setHasAlpha:(BOOL)alpha;
// declared property setter: -(void)setHeight:(unsigned)height;
// declared property setter: -(void)setIndex:(unsigned)index;
// declared property setter: -(void)setInternalFormat:(unsigned)format;
// declared property setter: -(void)setIsCubeMap:(BOOL)map;
// declared property setter: -(void)setIsMipmapped:(BOOL)mipmapped;
// declared property setter: -(void)setIsPowerOfTwo:(BOOL)two;
// declared property setter: -(void)setIsPreMultipliedAlpha:(BOOL)alpha;
// declared property setter: -(void)setIsVerticalFlipped:(BOOL)flipped;
// declared property setter: -(void)setLabel:(id)label;
// declared property setter: -(void)setLoadMode:(int)mode;
// declared property setter: -(void)setNComponents:(unsigned)components;
// declared property setter: -(void)setNPrimarySurfaces:(unsigned)surfaces;
// declared property setter: -(void)setNSurfaces:(unsigned)surfaces;
// declared property setter: -(void)setNumMipMapLevels:(unsigned)levels;
// declared property setter: -(void)setOrientation:(unsigned)orientation;
// declared property setter: -(void)setReOrient:(BOOL)orient;
// declared property setter: -(void)setRowBytes:(unsigned)bytes;
// declared property setter: -(void)setTexelFormat:(unsigned)format;
// declared property setter: -(void)setTextureTarget:(unsigned)target;
// declared property setter: -(void)setType:(unsigned)type;
// declared property setter: -(void)setWidth:(unsigned)width;
// declared property getter: -(unsigned)texelFormat;
// declared property getter: -(unsigned)textureTarget;
// declared property getter: -(unsigned)type;
-(BOOL)uploadToGLTexture:(unsigned)gltexture error:(id*)error;
// declared property getter: -(unsigned)width;
@end

