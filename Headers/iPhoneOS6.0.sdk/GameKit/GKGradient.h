/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GameKit-Structs.h"


@interface GKGradient : XXUnknownSuperclass {
@private
	CGGradientRef _CGGradient;
}
+(id)gradientWithColors:(id)colors atLocations:(const float*)locations;
-(id)initWithColors:(id)colors atLocations:(const float*)locations;
-(CGGradientRef)CGGradient;
-(void)dealloc;
@end

