/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKThemeBrush.h"

@class NSArray;

@interface GKBrushList : GKThemeBrush {
@private
	NSArray* _brushList;
}
@property(retain, nonatomic) NSArray* brushList;	// @synthesize=_brushList
// declared property getter: -(id)brushList;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)drawInRect:(CGRect)rect withContext:(CGContextRef)context input:(id)input;
// declared property setter: -(void)setBrushList:(id)list;
@end

