/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CMLogItem.h"
#import "CoreMotion-Structs.h"


@interface CMActivity : CMLogItem {
@private
	id _internal;
}
@property(readonly, assign, nonatomic) int confidence;
@property(readonly, assign, nonatomic) BOOL isDriving;
@property(readonly, assign, nonatomic) BOOL isMoving;
@property(readonly, assign, nonatomic) BOOL isRunning;
@property(readonly, assign, nonatomic) BOOL isWalking;
-(id)initWithCoder:(id)coder;
-(id)initWithMotionActivity:(CLMotionActivity)motionActivity andTimestamp:(double)timestamp;
-(CLMotionActivity)activity;
// declared property getter: -(int)confidence;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(BOOL)isDriving;
// declared property getter: -(BOOL)isMoving;
// declared property getter: -(BOOL)isRunning;
// declared property getter: -(BOOL)isWalking;
@end

