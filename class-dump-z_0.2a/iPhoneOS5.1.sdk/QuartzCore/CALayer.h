/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "CAPropertyInfo.h"
#import "CAMediaTiming.h"
#import "CALayer.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CAMeshTransform, NSString, NSArray, NSDictionary;

@interface CALayer : XXUnknownSuperclass <NSCoding, CAMediaTiming> {
@private
	CALayerIvars _attr;
}
@property(copy) NSDictionary* actions;
@property(assign) CGPoint anchorPoint;
@property(assign) float anchorPointZ;
@property(assign) BOOL autoreverses;
@property(assign) CGColorRef backgroundColor;
@property(copy) NSArray* backgroundFilters;
@property(assign) double beginTime;
@property(assign) CGColorRef borderColor;
@property(assign) float borderWidth;
@property(assign) CGRect bounds;
@property(retain) id compositingFilter;
@property(retain) id contents;
@property(assign) CGRect contentsCenter;
@property(copy) NSString* contentsGravity;
@property(assign) CGRect contentsRect;
@property(assign) float contentsScale;
@property(assign) float cornerRadius;
@property(assign) id delegate;
@property(assign, getter=isDoubleSided) BOOL doubleSided;
@property(assign) double duration;
@property(assign) unsigned edgeAntialiasingMask;
@property(copy) NSString* fillMode;
@property(copy) NSArray* filters;
@property(assign) CGRect frame;
@property(assign, getter=isGeometryFlipped) BOOL geometryFlipped;
@property(assign, getter=isHidden) BOOL hidden;
@property(copy) NSString* magnificationFilter;
@property(retain) CALayer* mask;
@property(assign) BOOL masksToBounds;
@property(copy) NSString* minificationFilter;
@property(assign) float minificationFilterBias;
@property(copy) NSString* name;
@property(assign) BOOL needsDisplayOnBoundsChange;
@property(assign) float opacity;
@property(assign, getter=isOpaque) BOOL opaque;
@property(assign) CGPoint position;
@property(assign) float rasterizationScale;
@property(assign) float repeatCount;
@property(assign) double repeatDuration;
@property(assign) CGColorRef shadowColor;
@property(assign) CGSize shadowOffset;
@property(assign) float shadowOpacity;
@property(assign) CGPathRef shadowPath;
@property(assign) float shadowRadius;
@property(assign) BOOL shouldRasterize;
@property(assign) float speed;
@property(copy) NSDictionary* style;
@property(assign) CATransform3D sublayerTransform;
@property(copy) NSArray* sublayers;
@property(readonly, assign) CALayer* superlayer;
@property(assign) double timeOffset;
@property(assign) CATransform3D transform;
@property(assign) float zPosition;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)observers;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
+(id)defaultActionForKey:(id)key;
+(id)defaultValueForKey:(id)key;
+(id)layer;
+(BOOL)needsDisplayForKey:(id)key;
-(id)init;
-(id)initWithBounds:(CGRect)bounds;
-(id)initWithCoder:(id)coder;
-(id)initWithLayer:(id)layer;
-(void)_cancelAnimationTimer;
-(void)_dealloc;
-(void)_display;
-(CGSize)_preferredSize;
-(void)_renderBackgroundInContext:(CGContextRef)context;
-(void)_renderBorderInContext:(CGContextRef)context;
-(void)_renderForegroundInContext:(CGContextRef)context;
-(void)_renderSublayersInContext:(CGContextRef)context;
-(BOOL)_scheduleAnimationTimer;
-(id)actionForKey:(id)key;
// declared property getter: -(id)actions;
-(void)addAnimation:(id)animation forKey:(id)key;
-(void)addSublayer:(id)sublayer;
-(CGAffineTransform)affineTransform;
-(BOOL)allowsWeakReference;
// declared property getter: -(CGPoint)anchorPoint;
// declared property getter: -(float)anchorPointZ;
-(id)animationForKey:(id)key;
-(id)animationKeys;
// declared property getter: -(BOOL)autoreverses;
// declared property getter: -(CGColorRef)backgroundColor;
// declared property getter: -(id)backgroundFilters;
// declared property getter: -(double)beginTime;
// declared property getter: -(CGColorRef)borderColor;
// declared property getter: -(float)borderWidth;
// declared property getter: -(CGRect)bounds;
// declared property getter: -(id)compositingFilter;
-(BOOL)containsPoint:(CGPoint)point;
// declared property getter: -(id)contents;
-(BOOL)contentsAreFlipped;
// declared property getter: -(CGRect)contentsCenter;
// declared property getter: -(id)contentsGravity;
// declared property getter: -(CGRect)contentsRect;
// declared property getter: -(float)contentsScale;
-(id)contentsScaling;
-(CGPoint)convertPoint:(CGPoint)point fromLayer:(id)layer;
-(CGPoint)convertPoint:(CGPoint)point toLayer:(id)layer;
-(CGRect)convertRect:(CGRect)rect fromLayer:(id)layer;
-(CGRect)convertRect:(CGRect)rect toLayer:(id)layer;
-(double)convertTime:(double)time fromLayer:(id)layer;
-(double)convertTime:(double)time toLayer:(id)layer;
// declared property getter: -(float)cornerRadius;
-(void)dealloc;
-(id)debugDescription;
// declared property getter: -(id)delegate;
-(void)display;
-(void)displayIfNeeded;
-(void)drawInContext:(CGContextRef)context;
// declared property getter: -(double)duration;
// declared property getter: -(unsigned)edgeAntialiasingMask;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)fillMode;
// declared property getter: -(id)filters;
// declared property getter: -(CGRect)frame;
-(id)hitTest:(CGPoint)test;
-(void)insertSublayer:(id)sublayer above:(id)above;
-(void)insertSublayer:(id)sublayer atIndex:(unsigned)index;
-(void)insertSublayer:(id)sublayer below:(id)below;
// declared property getter: -(BOOL)isDoubleSided;
// declared property getter: -(BOOL)isGeometryFlipped;
// declared property getter: -(BOOL)isHidden;
// declared property getter: -(BOOL)isOpaque;
-(void)layoutIfNeeded;
-(void)layoutSublayers;
// declared property getter: -(id)magnificationFilter;
// declared property getter: -(id)mask;
// declared property getter: -(BOOL)masksToBounds;
// declared property getter: -(id)minificationFilter;
// declared property getter: -(float)minificationFilterBias;
-(id)modelLayer;
// declared property getter: -(id)name;
-(BOOL)needsDisplay;
// declared property getter: -(BOOL)needsDisplayOnBoundsChange;
-(BOOL)needsLayout;
// declared property getter: -(float)opacity;
// declared property getter: -(CGPoint)position;
-(CGSize)preferredFrameSize;
-(id)presentationLayer;
// declared property getter: -(float)rasterizationScale;
-(void)release;
-(void)removeAllAnimations;
-(void)removeAnimationForKey:(id)key;
-(void)removeFromSuperlayer;
-(void)renderInContext:(CGContextRef)context;
// declared property getter: -(float)repeatCount;
// declared property getter: -(double)repeatDuration;
-(void)replaceSublayer:(id)sublayer with:(id)with;
-(id)retain;
-(unsigned)retainCount;
-(BOOL)retainWeakReference;
// declared property setter: -(void)setActions:(id)actions;
-(void)setAffineTransform:(CGAffineTransform)transform;
// declared property setter: -(void)setAnchorPoint:(CGPoint)point;
// declared property setter: -(void)setAnchorPointZ:(float)z;
// declared property setter: -(void)setAutoreverses:(BOOL)autoreverses;
// declared property setter: -(void)setBackgroundColor:(CGColorRef)color;
// declared property setter: -(void)setBackgroundFilters:(id)filters;
// declared property setter: -(void)setBeginTime:(double)time;
// declared property setter: -(void)setBorderColor:(CGColorRef)color;
// declared property setter: -(void)setBorderWidth:(float)width;
// declared property setter: -(void)setBounds:(CGRect)bounds;
// declared property setter: -(void)setCompositingFilter:(id)filter;
// declared property setter: -(void)setContents:(id)contents;
// declared property setter: -(void)setContentsCenter:(CGRect)center;
// declared property setter: -(void)setContentsGravity:(id)gravity;
// declared property setter: -(void)setContentsRect:(CGRect)rect;
// declared property setter: -(void)setContentsScale:(float)scale;
-(void)setContentsScaling:(id)scaling;
// declared property setter: -(void)setCornerRadius:(float)radius;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDoubleSided:(BOOL)sided;
// declared property setter: -(void)setDuration:(double)duration;
// declared property setter: -(void)setEdgeAntialiasingMask:(unsigned)mask;
// declared property setter: -(void)setFillMode:(id)mode;
// declared property setter: -(void)setFilters:(id)filters;
// declared property setter: -(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setGeometryFlipped:(BOOL)flipped;
// declared property setter: -(void)setHidden:(BOOL)hidden;
// declared property setter: -(void)setMagnificationFilter:(id)filter;
// declared property setter: -(void)setMask:(id)mask;
// declared property setter: -(void)setMasksToBounds:(BOOL)bounds;
// declared property setter: -(void)setMinificationFilter:(id)filter;
// declared property setter: -(void)setMinificationFilterBias:(float)bias;
// declared property setter: -(void)setName:(id)name;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(CGRect)rect;
// declared property setter: -(void)setNeedsDisplayOnBoundsChange:(BOOL)change;
-(void)setNeedsLayout;
// declared property setter: -(void)setOpacity:(float)opacity;
// declared property setter: -(void)setOpaque:(BOOL)opaque;
// declared property setter: -(void)setPosition:(CGPoint)position;
// declared property setter: -(void)setRasterizationScale:(float)scale;
// declared property setter: -(void)setRepeatCount:(float)count;
// declared property setter: -(void)setRepeatDuration:(double)duration;
// declared property setter: -(void)setShadowColor:(CGColorRef)color;
// declared property setter: -(void)setShadowOffset:(CGSize)offset;
// declared property setter: -(void)setShadowOpacity:(float)opacity;
// declared property setter: -(void)setShadowPath:(CGPathRef)path;
// declared property setter: -(void)setShadowRadius:(float)radius;
// declared property setter: -(void)setShouldRasterize:(BOOL)rasterize;
// declared property setter: -(void)setSpeed:(float)speed;
// declared property setter: -(void)setStyle:(id)style;
// declared property setter: -(void)setSublayerTransform:(CATransform3D)transform;
// declared property setter: -(void)setSublayers:(id)sublayers;
// declared property setter: -(void)setTimeOffset:(double)offset;
// declared property setter: -(void)setTransform:(CATransform3D)transform;
-(void)setValue:(id)value forKey:(id)key;
-(void)setValue:(id)value forKeyPath:(id)keyPath;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
// declared property setter: -(void)setZPosition:(float)position;
// declared property getter: -(CGColorRef)shadowColor;
// declared property getter: -(CGSize)shadowOffset;
// declared property getter: -(float)shadowOpacity;
// declared property getter: -(CGPathRef)shadowPath;
// declared property getter: -(float)shadowRadius;
-(BOOL)shouldArchiveValueForKey:(id)key;
// declared property getter: -(BOOL)shouldRasterize;
// declared property getter: -(float)speed;
// declared property getter: -(id)style;
// declared property getter: -(CATransform3D)sublayerTransform;
// declared property getter: -(id)sublayers;
// declared property getter: -(id)superlayer;
// declared property getter: -(double)timeOffset;
// declared property getter: -(CATransform3D)transform;
-(id)valueForKey:(id)key;
-(id)valueForKeyPath:(id)keyPath;
-(id)valueForUndefinedKey:(id)undefinedKey;
// declared property getter: -(float)zPosition;
@end

@interface CALayer (CALayerScrolling)
@property(readonly, assign) CGRect visibleRect;
-(void)_scrollPoint:(CGPoint)point fromLayer:(id)layer;
-(void)_scrollRect:(CGRect)rect fromLayer:(id)layer;
-(CGRect)_visibleRectOfLayer:(id)layer;
-(void)scrollPoint:(CGPoint)point;
-(void)scrollRectToVisible:(CGRect)visible;
// declared property getter: -(CGRect)visibleRect;
@end

@interface CALayer (CALayerFunctions)
@end

@interface CALayer (CADynamicsBehavior)
@property(assign) float coefficientOfRestitution;
@property(assign) float mass;
@property(assign) float momentOfInertia;
// declared property getter: -(float)coefficientOfRestitution;
// declared property getter: -(float)mass;
// declared property getter: -(float)momentOfInertia;
// declared property setter: -(void)setCoefficientOfRestitution:(float)restitution;
// declared property setter: -(void)setMass:(float)mass;
// declared property setter: -(void)setMomentOfInertia:(float)inertia;
@end

@interface CALayer (CABehavior)
@property(copy) NSArray* behaviors;
@property(assign) float velocityStretch;
// declared property getter: -(id)behaviors;
// declared property setter: -(void)setBehaviors:(id)behaviors;
// declared property setter: -(void)setVelocityStretch:(float)stretch;
// declared property getter: -(float)velocityStretch;
@end

@interface CALayer (CALight)
@property(assign) BOOL acceptsLights;
@property(assign) float ambientReflectance;
@property(assign) float diffuseReflectance;
@property(copy) NSArray* lights;
@property(assign) float metallicity;
@property(assign) float shininess;
@property(assign) float specularReflectance;
// declared property getter: -(BOOL)acceptsLights;
// declared property getter: -(float)ambientReflectance;
// declared property getter: -(float)diffuseReflectance;
// declared property getter: -(id)lights;
// declared property getter: -(float)metallicity;
// declared property setter: -(void)setAcceptsLights:(BOOL)lights;
// declared property setter: -(void)setAmbientReflectance:(float)reflectance;
// declared property setter: -(void)setDiffuseReflectance:(float)reflectance;
// declared property setter: -(void)setLights:(id)lights;
// declared property setter: -(void)setMetallicity:(float)metallicity;
// declared property setter: -(void)setShininess:(float)shininess;
// declared property setter: -(void)setSpecularReflectance:(float)reflectance;
// declared property getter: -(float)shininess;
// declared property getter: -(float)specularReflectance;
@end

@interface CALayer (CALayerPrivate) <CAPropertyInfo>
@property(assign) BOOL acceleratesDrawing;
@property(assign) BOOL allowsDisplayCompositing;
@property(assign) BOOL allowsEdgeAntialiasing;
@property(assign) BOOL allowsGroupOpacity;
@property(assign) BOOL allowsHitTesting;
@property(assign) BOOL canDrawConcurrently;
@property(assign) BOOL clearsContext;
@property(assign) BOOL contentsOpaque;
@property(copy) NSString* contentsScaling;
@property(assign) CGAffineTransform contentsTransform;
@property(assign, getter=isFrozen) BOOL frozen;
@property(assign) BOOL invertsShadow;
@property(copy) CAMeshTransform* meshTransform;
@property(assign) BOOL needsLayoutOnGeometryChange;
@property(assign) BOOL preloadsCache;
@property(assign) CGSize sizeRequisition;
@property(assign) BOOL sortsSublayers;
+(/*function-pointer*/ void*)CA_getterForType:(int)type;
+(/*function-pointer*/ void*)CA_setterForType:(int)type;
+(id)properties;
+(BOOL)resolveInstanceMethod:(SEL)method;
-(BOOL)_canDisplayConcurrently;
-(Layer*)_copyRenderLayer:(Transaction*)layer layerFlags:(unsigned)flags commitFlags:(unsigned*)flags3;
-(void)_didCommitLayer:(Transaction*)layer;
-(void)_prepareContext:(CGContextRef)context;
-(bool)_renderLayerDefinesProperty:(unsigned)property;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;
// declared property getter: -(BOOL)acceleratesDrawing;
// declared property getter: -(BOOL)allowsDisplayCompositing;
// declared property getter: -(BOOL)allowsEdgeAntialiasing;
// declared property getter: -(BOOL)allowsGroupOpacity;
// declared property getter: -(BOOL)allowsHitTesting;
-(id)ancestorSharedWithLayer:(id)layer;
// declared property getter: -(BOOL)canDrawConcurrently;
-(void)clearHasBeenCommitted;
// declared property getter: -(BOOL)clearsContext;
// declared property getter: -(BOOL)contentsOpaque;
// declared property getter: -(CGAffineTransform)contentsTransform;
-(id)context;
-(CADoublePoint)convertDoublePoint:(CADoublePoint)point fromLayer:(id)layer;
-(CADoublePoint)convertDoublePoint:(CADoublePoint)point toLayer:(id)layer;
-(CADoubleRect)convertDoubleRect:(CADoubleRect)rect fromLayer:(id)layer;
-(CADoubleRect)convertDoubleRect:(CADoubleRect)rect toLayer:(id)layer;
-(CADoubleRect)doubleBounds;
-(CADoublePoint)doublePosition;
-(BOOL)doubleSided;
-(BOOL)drawsMipmapLevels;
-(BOOL)hasBeenCommitted;
-(BOOL)hidden;
-(BOOL)ignoresHitTesting;
-(id)implicitAnimationForKeyPath:(id)keyPath;
-(void)invalidateContents;
// declared property getter: -(BOOL)invertsShadow;
-(BOOL)isDescendantOf:(id)of;
-(BOOL)isFlipped;
// declared property getter: -(BOOL)isFrozen;
-(id)layerAtTime:(double)time;
-(id)layerBeingDrawn;
-(void)layerDidBecomeVisible:(BOOL)layer;
-(void)layoutBelowIfNeeded;
-(BOOL)layoutIsActive;
// declared property getter: -(id)meshTransform;
// declared property getter: -(BOOL)needsLayoutOnGeometryChange;
-(BOOL)opaque;
// declared property getter: -(BOOL)preloadsCache;
-(void*)regionBeingDrawn;
-(void)reloadValueForKeyPath:(id)keyPath;
// declared property setter: -(void)setAcceleratesDrawing:(BOOL)drawing;
// declared property setter: -(void)setAllowsDisplayCompositing:(BOOL)compositing;
// declared property setter: -(void)setAllowsEdgeAntialiasing:(BOOL)antialiasing;
// declared property setter: -(void)setAllowsGroupOpacity:(BOOL)opacity;
// declared property setter: -(void)setAllowsHitTesting:(BOOL)testing;
// declared property setter: -(void)setCanDrawConcurrently:(BOOL)concurrently;
// declared property setter: -(void)setClearsContext:(BOOL)context;
-(void)setContentsChanged;
// declared property setter: -(void)setContentsOpaque:(BOOL)opaque;
// declared property setter: -(void)setContentsTransform:(CGAffineTransform)transform;
-(void)setDoubleBounds:(CADoubleRect)bounds;
-(void)setDoublePosition:(CADoublePoint)position;
-(void)setFlipped:(BOOL)flipped;
// declared property setter: -(void)setFrozen:(BOOL)frozen;
// declared property setter: -(void)setInvertsShadow:(BOOL)shadow;
// declared property setter: -(void)setMeshTransform:(id)transform;
// declared property setter: -(void)setNeedsLayoutOnGeometryChange:(BOOL)change;
// declared property setter: -(void)setPreloadsCache:(BOOL)cache;
// declared property setter: -(void)setSizeRequisition:(CGSize)requisition;
// declared property setter: -(void)setSortsSublayers:(BOOL)sublayers;
-(CGSize)size;
// declared property getter: -(CGSize)sizeRequisition;
// declared property getter: -(BOOL)sortsSublayers;
@end

