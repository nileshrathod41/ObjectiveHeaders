/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock;

__attribute__((visibility("hidden")))
@interface MKMiniTiledLayer : XXUnknownSuperclass {
@private
	float _zoomScale;
	float _roundedZoomScale;
	int _zoomLevel;
	CADoubleSize _tileSize;
	BOOL _drawingEnabled;
	void* _hash;
	unsigned _maxTiles;
	unsigned _lastPrefetchTiles;
	unsigned _prefetchTiles;
	float _lastTileZoomScale;
	CADoubleRect _lastTileRect;
	NSLock* _tileLock;
}
@property(assign, nonatomic, getter=isDrawingEnabled) BOOL drawingEnabled;	// @synthesize=_drawingEnabled
@property(assign, nonatomic) float maximumTileScale;
@property(assign, nonatomic) unsigned prefetchTiles;	// @synthesize=_prefetchTiles
@property(assign, nonatomic) CGSize tileSize;
-(id)init;
-(id).cxx_construct;
-(id)actionForKey:(id)key;
-(BOOL)canDrawRect:(CGRect)rect levelOfDetail:(int)detail;
-(void)dealloc;
-(void)displayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;
-(void)drawLayer:(id)layer inContext:(CGContextRef)context;
-(void)flush;
-(void)invalidateTilesInRect:(CADoubleRect)rect;
// declared property getter: -(BOOL)isDrawingEnabled;
// declared property getter: -(float)maximumTileScale;
// declared property getter: -(unsigned)prefetchTiles;
-(BOOL)relayoutNecessaryForZoomScale:(float)zoomScale;
// declared property setter: -(void)setDrawingEnabled:(BOOL)enabled;
// declared property setter: -(void)setMaximumTileScale:(float)scale;
-(void)setNeedsDisplayInRect:(CGRect)rect;
-(void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail;
// declared property setter: -(void)setPrefetchTiles:(unsigned)tiles;
// declared property setter: -(void)setTileSize:(CGSize)size;
-(BOOL)setZoomScale:(float)scale;
-(void)tileRect:(CADoubleRect)rect;
-(void)tileRect:(CADoubleRect)rect forceNeedsDisplay:(BOOL)display forceDisplay:(BOOL)display3 ignoreDrawingEnabled:(BOOL)enabled;
// declared property getter: -(CGSize)tileSize;
-(float)zoomScale;
@end

