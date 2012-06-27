/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface Face : XXUnknownSuperclass {
@private
	int size;
	int centerX;
	int centerY;
	double I;
	double Q;
}
@property(readonly, assign) double I;	// @synthesize
@property(readonly, assign) double Q;	// @synthesize
@property(readonly, assign) int centerX;	// @synthesize
@property(readonly, assign) int centerY;	// @synthesize
@property(readonly, assign) int size;	// @synthesize
-(id)initWithBounds:(CGRect)bounds andImage:(id)image usingContext:(id)context;
// declared property getter: -(double)I;
// declared property getter: -(double)Q;
// declared property getter: -(int)centerX;
// declared property getter: -(int)centerY;
-(id)description;
-(CGRect)faceRect;
// declared property getter: -(int)size;
@end

