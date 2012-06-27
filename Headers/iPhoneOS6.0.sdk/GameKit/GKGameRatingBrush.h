/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKThemeBrush.h"

@class UIImage;

@interface GKGameRatingBrush : GKThemeBrush {
@private
	UIImage* _foregroundImage;
	UIImage* _backgroundImage;
}
@property(retain, nonatomic) UIImage* backgroundImage;	// @synthesize=_backgroundImage
@property(retain, nonatomic) UIImage* foregroundImage;	// @synthesize=_foregroundImage
// declared property getter: -(id)backgroundImage;
-(void)dealloc;
-(void)drawInRect:(CGRect)rect withContext:(CGContextRef)context input:(id)input;
// declared property getter: -(id)foregroundImage;
-(float)scaleForInput:(id)input;
// declared property setter: -(void)setBackgroundImage:(id)image;
// declared property setter: -(void)setForegroundImage:(id)image;
-(CGSize)sizeForInput:(id)input;
@end
