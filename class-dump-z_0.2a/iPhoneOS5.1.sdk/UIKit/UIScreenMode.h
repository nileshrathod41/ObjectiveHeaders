/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"


@interface UIScreenMode : XXUnknownSuperclass {
@private
	id _mode;
	BOOL _mainScreen;
}
@property(assign) BOOL _mainScreen;	// @synthesize
@property(readonly, assign, nonatomic) float pixelAspectRatio;
@property(readonly, assign, nonatomic) CGSize size;
+(id)_screenModeForDisplayMode:(id)displayMode mainScreen:(BOOL)screen;
-(id)initWithDisplayMode:(id)displayMode mainScreen:(BOOL)screen;
-(id)_displayMode;
-(BOOL)_isNTSCOrPAL;
// declared property getter: -(BOOL)_mainScreen;
-(id)description;
// declared property getter: -(float)pixelAspectRatio;
// declared property setter: -(void)set_mainScreen:(BOOL)screen;
// declared property getter: -(CGSize)size;
@end

