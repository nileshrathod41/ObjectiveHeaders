/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIBezierPath;

@interface MPAlternateTrackCellBackgroundView : XXUnknownSuperclass {
	int _sectionLocation;
	UIBezierPath* _fillPath;
	UIBezierPath* _strokePath;
}
@property(assign, nonatomic) int sectionLocation;	// @synthesize=_sectionLocation
-(id)initWithFrame:(CGRect)frame;
-(void)_createBezierPathWithCornerRadius:(float)cornerRadius bottomRadius:(float)radius animating:(BOOL)animating;
-(void)_invalidatePaths;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(void)layoutSubviews;
// declared property getter: -(int)sectionLocation;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setSectionLocation:(int)location;
-(void)setSectionLocation:(int)location animated:(BOOL)animated;
@end

