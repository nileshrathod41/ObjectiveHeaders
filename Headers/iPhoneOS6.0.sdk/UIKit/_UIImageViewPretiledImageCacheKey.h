/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageViewPretiledImageCacheKey : XXUnknownSuperclass {
@private
	UIImage* _originalImage;
	CGSize _pretiledSize;
}
+(id)cacheKeyWithOriginalImage:(id)originalImage pretiledSize:(CGSize)size;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

