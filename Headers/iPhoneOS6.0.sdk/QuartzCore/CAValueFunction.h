/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "QuartzCore-Structs.h"
#import "NSCoding.h"

@class NSString;

@interface CAValueFunction : XXUnknownSuperclass <NSCoding> {
	NSString* _string;
	void* _impl;
}
@property(readonly, assign) NSString* name;
+(id)functionWithName:(id)name;
-(id)initWithCoder:(id)coder;
-(Object*)CA_copyRenderValue;
-(id)_initWithName:(int)name;
-(BOOL)apply:(const double*)apply result:(double*)result;
-(BOOL)apply:(const double*)apply result:(double*)result parameterFunction:(/*function-pointer*/ void*)function context:(void*)context;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(unsigned long)inputCount;
// declared property getter: -(id)name;
-(unsigned long)outputCount;
@end

