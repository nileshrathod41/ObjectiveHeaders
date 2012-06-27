/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"


@interface CATiledLayer : CALayer {
}
@property(assign, getter=isDrawingEnabled) BOOL drawingEnabled;
@property(assign) CGColorRef fillColor;
@property(assign) unsigned long levelsOfDetail;
@property(assign) unsigned long levelsOfDetailBias;
@property(assign) float maximumTileScale;
@property(assign) CGSize tileSize;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)observers;
+(id)defaultValueForKey:(id)key;
+(double)fadeDuration;
+(unsigned)prefetchedTiles;
+(BOOL)shouldDrawOnMainThread;
-(BOOL)_canDisplayConcurrently;
-(void)_dealloc;
-(void)_display;
-(BOOL)canDrawRect:(CGRect)rect levelOfDetail:(int)detail;
-(void)dealloc;
-(void)didChangeValueForKey:(id)key;
-(void)displayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;
// declared property getter: -(CGColorRef)fillColor;
-(void)invalidateContents;
// declared property getter: -(BOOL)isDrawingEnabled;
// declared property getter: -(unsigned long)levelsOfDetail;
// declared property getter: -(unsigned long)levelsOfDetailBias;
// declared property getter: -(float)maximumTileScale;
-(BOOL)queueIsEmpty;
-(void)setContents:(id)contents;
// declared property setter: -(void)setDrawingEnabled:(BOOL)enabled;
// declared property setter: -(void)setFillColor:(CGColorRef)color;
// declared property setter: -(void)setLevelsOfDetail:(unsigned long)detail;
// declared property setter: -(void)setLevelsOfDetailBias:(unsigned long)detailBias;
// declared property setter: -(void)setMaximumTileScale:(float)scale;
-(void)setNeedsDisplayInRect:(CGRect)rect;
-(void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail;
-(void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;
// declared property setter: -(void)setTileSize:(CGSize)size;
-(BOOL)shouldArchiveValueForKey:(id)key;
// declared property getter: -(CGSize)tileSize;
@end

