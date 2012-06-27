/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MapKit-Structs.h"


__attribute__((visibility("hidden")))
@interface MKAttributionLabel : XXUnknownSuperclass {
@private
	unsigned _mapType;
	BOOL _useDarkText;
}
@property(assign, nonatomic) unsigned mapType;	// @synthesize=_mapType
-(id)init;
-(id)_attributesWithStroke:(BOOL)stroke;
-(void)_layoutLabel;
-(void)_prepareLabel;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(unsigned)mapType;
// declared property setter: -(void)setMapType:(unsigned)type;
@end

