/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MKOverlayPathView.h"

@class MKCircle;

@interface MKCircleView : MKOverlayPathView {
}
@property(readonly, assign, nonatomic) MKCircle* circle;
-(id)initWithCircle:(id)circle;
// declared property getter: -(id)circle;
-(void)createPath;
@end

