/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol UIAccelerometerDelegate;

@interface UIAccelerometer : XXUnknownSuperclass {
@private
	double _updateInterval;
	id<UIAccelerometerDelegate> _delegate;
	mdocFlags _accelerometerFlags;
}
@property(assign, nonatomic) id<UIAccelerometerDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) double updateInterval;	// @synthesize=_updateInterval
+(id)sharedAccelerometer;
-(id)init;
-(void)_acceleratedInX:(double)x y:(double)y z:(double)z timestamp:(double)timestamp;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setUpdateInterval:(double)interval;
// declared property getter: -(double)updateInterval;
@end

