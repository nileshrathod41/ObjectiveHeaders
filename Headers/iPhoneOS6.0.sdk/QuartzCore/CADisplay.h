/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CADisplayMode, NSString, NSArray;

@interface CADisplay : XXUnknownSuperclass {
@private
	void* _impl;
}
@property(assign) BOOL allowsVirtualModes;
@property(readonly, assign, nonatomic) NSArray* availableModes;
@property(readonly, assign, nonatomic) CGRect bounds;
@property(readonly, assign, getter=isCloned) BOOL cloned;
@property(readonly, assign, getter=isCloningSupported) BOOL cloningSupported;
@property(copy, nonatomic) NSString* colorMode;
@property(retain, nonatomic) CADisplayMode* currentMode;
@property(readonly, assign, nonatomic) NSString* deviceName;
@property(readonly, assign) unsigned displayId;
@property(readonly, assign, getter=isExternal) BOOL external;
@property(readonly, assign, nonatomic) NSString* name;
@property(copy, nonatomic) NSString* overscanAdjustment;
@property(readonly, assign) float overscanAmount;
@property(readonly, assign, getter=isOverscanned) BOOL overscanned;
@property(readonly, assign, nonatomic) CADisplayMode* preferredMode;
@property(readonly, assign) double refreshRate;
@property(readonly, assign, nonatomic) CGRect safeBounds;
@property(readonly, assign, getter=isSupported) BOOL supported;
@property(readonly, assign) int tag;
@property(readonly, assign) NSString* uniqueId;
+(id)TVOutDisplay;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
+(id)displays;
+(id)mainDisplay;
-(id)_initWithDisplay:(Display*)display;
-(void)_invalidate;
// declared property getter: -(BOOL)allowsVirtualModes;
// declared property getter: -(id)availableModes;
// declared property getter: -(CGRect)bounds;
// declared property getter: -(id)colorMode;
// declared property getter: -(id)currentMode;
-(id)description;
// declared property getter: -(id)deviceName;
// declared property getter: -(unsigned)displayId;
// declared property getter: -(BOOL)isCloned;
// declared property getter: -(BOOL)isCloningSupported;
// declared property getter: -(BOOL)isExternal;
// declared property getter: -(BOOL)isOverscanned;
// declared property getter: -(BOOL)isSupported;
// declared property getter: -(id)name;
// declared property getter: -(id)overscanAdjustment;
// declared property getter: -(float)overscanAmount;
// declared property getter: -(id)preferredMode;
// declared property getter: -(double)refreshRate;
// declared property getter: -(CGRect)safeBounds;
// declared property setter: -(void)setAllowsVirtualModes:(BOOL)modes;
// declared property setter: -(void)setColorMode:(id)mode;
// declared property setter: -(void)setCurrentMode:(id)mode;
// declared property setter: -(void)setOverscanAdjustment:(id)adjustment;
// declared property getter: -(int)tag;
// declared property getter: -(id)uniqueId;
-(void)update;
@end
