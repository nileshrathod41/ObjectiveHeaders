/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

@interface GKMaskView : XXUnknownSuperclass {
@private
	UIImage* _maskImage;
	UIImage* _maskFinalImage;
}
@property(retain, nonatomic) UIImage* maskFinalImage;	// @synthesize=_maskFinalImage
@property(retain, nonatomic) UIImage* maskImage;	// @synthesize=_maskImage
-(void)dealloc;
-(void)layoutSubviews;
// declared property getter: -(id)maskFinalImage;
// declared property getter: -(id)maskImage;
-(id)maskImageForCALayerContents;
-(id)maskImageForCGContext;
// declared property setter: -(void)setMaskFinalImage:(id)image;
// declared property setter: -(void)setMaskImage:(id)image;
@end

