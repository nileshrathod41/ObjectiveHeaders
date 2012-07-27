/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"
#import "CATextLayer.h"

@class NSString;

@interface CATextLayer : CALayer {
@private
	CATextLayerPrivateRef _state;
}
@property(copy) NSString* alignmentMode;
@property(assign) void* font;
@property(assign) float fontSize;
@property(assign) CGColorRef foregroundColor;
@property(copy) id string;
@property(copy) NSString* truncationMode;
@property(assign, getter=isWrapped) BOOL wrapped;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)observers;
+(id)defaultValueForKey:(id)key;
+(BOOL)needsDisplayForKey:(id)key;
-(id)init;
-(id)initWithLayer:(id)layer;
-(void)_applyLinesToFunction:(/*function-pointer*/ void*)function info:(void*)info;
-(id)_createStringDict;
-(CTLineRef)_createTruncationToken;
-(void)_drawLine:(CTLineRef)line inContext:(CGContextRef)context atPoint:(CGPoint)point;
-(CGSize)_preferredSize;
-(void)_prepareContext:(CGContextRef)context;
-(CTTypesetterRef)_retainTypesetter;
// declared property getter: -(id)alignmentMode;
-(void)dealloc;
-(void)didChangeValueForKey:(id)key;
-(void)drawInContext:(CGContextRef)context;
// declared property getter: -(void*)font;
// declared property getter: -(float)fontSize;
// declared property getter: -(CGColorRef)foregroundColor;
-(id)implicitAnimationForKeyPath:(id)keyPath;
// declared property getter: -(BOOL)isWrapped;
// declared property setter: -(void)setAlignmentMode:(id)mode;
// declared property setter: -(void)setFont:(void*)font;
// declared property setter: -(void)setFontSize:(float)size;
// declared property setter: -(void)setForegroundColor:(CGColorRef)color;
// declared property setter: -(void)setString:(id)string;
// declared property setter: -(void)setTruncationMode:(id)mode;
// declared property setter: -(void)setWrapped:(BOOL)wrapped;
// declared property getter: -(id)string;
// declared property getter: -(id)truncationMode;
@end

@interface CATextLayer (CATextLayerPrivate)
@property(assign) BOOL allowsFontSubpixelQuantization;
@property(copy) id truncationString;
// declared property getter: -(BOOL)allowsFontSubpixelQuantization;
// declared property setter: -(void)setAllowsFontSubpixelQuantization:(BOOL)quantization;
// declared property setter: -(void)setTruncationString:(id)string;
// declared property getter: -(id)truncationString;
-(BOOL)wrapped;
@end

