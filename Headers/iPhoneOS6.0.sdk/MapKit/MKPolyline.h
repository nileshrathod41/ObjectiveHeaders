/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import "MKOverlay.h"
#import "MKMultiPoint.h"

@class NSString;

@interface MKPolyline : MKMultiPoint <MKOverlay> {
}
@property(readonly, assign, nonatomic) XXStruct_Yvvv9D boundingMapRect;
@property(readonly, assign, nonatomic) CADoublePoint coordinate;
@property(readonly, assign, nonatomic) NSString* subtitle;
@property(readonly, assign, nonatomic) NSString* title;
+(id)polylineWithCoordinates:(CADoublePoint*)coordinates count:(unsigned)count;
+(id)polylineWithPoints:(CADoublePoint*)points count:(unsigned)count;
// declared property getter: -(XXStruct_Yvvv9D)boundingMapRect;
// declared property getter: -(CADoublePoint)coordinate;
-(BOOL)intersectsMapRect:(XXStruct_Yvvv9D)rect;
@end

