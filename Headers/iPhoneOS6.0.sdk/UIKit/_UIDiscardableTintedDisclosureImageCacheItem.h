/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSDiscardableContent.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIDiscardableTintedDisclosureImageCacheItem : XXUnknownSuperclass <NSDiscardableContent> {
@private
	UIImage* _tintedImage;
	UIColor* _tintColor;
	struct {
		unsigned isDiscarded : 1;
		unsigned isPressed : 1;
		unsigned useCount;
	} _flags;
}
@property(readonly, assign, nonatomic) UIColor* tintColor;	// @synthesize=_tintColor
@property(readonly, assign, nonatomic) UIImage* tintedImage;	// @synthesize=_tintedImage
-(id)initWithPressed:(BOOL)pressed tintColor:(id)color;
-(id)_tintedDisclosureImage:(BOOL)image;
-(BOOL)beginContentAccess;
-(void)dealloc;
-(void)discardContentIfPossible;
-(void)endContentAccess;
-(unsigned)hash;
-(BOOL)isContentDiscarded;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)tintColor;
// declared property getter: -(id)tintedImage;
@end

