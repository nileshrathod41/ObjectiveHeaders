/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import "iAd-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface ADRemoteView : XXUnknownSuperclass {
@private
	CGAffineTransform _userTransform;
}
@property(assign, nonatomic) unsigned remoteWindowContextId;
@property(assign, nonatomic) CGAffineTransform userTransform;	// @synthesize=_userTransform
+(Class)layerClass;
-(id)initWithFrame:(CGRect)frame;
-(void)didMoveToWindow;
// declared property getter: -(unsigned)remoteWindowContextId;
// declared property setter: -(void)setRemoteWindowContextId:(unsigned)anId;
-(void)setTransform:(CGAffineTransform)transform;
-(void)setUserInteractionEnabled:(BOOL)enabled;
// declared property setter: -(void)setUserTransform:(CGAffineTransform)transform;
-(CGAffineTransform)transform;
// declared property getter: -(CGAffineTransform)userTransform;
@end

