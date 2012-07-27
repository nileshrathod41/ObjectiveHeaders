/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAContext.h"


__attribute__((visibility("hidden")))
@interface CAContextImpl : CAContext {
@private
	Context* _impl;
}
-(id)initRemoteWithOptions:(id)options;
-(id)initWithOptions:(id)options localContext:(bool)context;
-(CGColorSpaceRef)colorSpace;
-(unsigned)contextId;
-(unsigned)createFencePort;
-(unsigned)createSlot;
-(void)dealloc;
-(void)deleteSlot:(unsigned)slot;
-(void)invalidate;
-(id)layer;
-(float)level;
-(id)options;
-(void)orderAbove:(unsigned)above;
-(void)orderBelow:(unsigned)below;
-(Context*)renderContext;
-(void)setColorSpace:(CGColorSpaceRef)space;
-(void)setFence:(unsigned)fence count:(unsigned)count;
-(void)setFencePort:(unsigned)port;
-(void)setLayer:(id)layer;
-(void)setLevel:(float)level;
-(void)setObject:(id)object forSlot:(unsigned)slot;
-(BOOL)valid;
@end

