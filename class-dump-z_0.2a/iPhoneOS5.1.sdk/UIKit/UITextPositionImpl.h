/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextPosition.h"

@class WebVisiblePosition;

__attribute__((visibility("hidden")))
@interface UITextPositionImpl : UITextPosition {
@private
	WebVisiblePosition* _webVisiblePosition;
}
@property(retain, nonatomic) WebVisiblePosition* webVisiblePosition;	// @synthesize=_webVisiblePosition
+(id)wrapWebVisiblePosition:(id)position;
-(void)dealloc;
-(id)description;
-(BOOL)isEqual:(id)equal;
// declared property setter: -(void)setWebVisiblePosition:(id)position;
// declared property getter: -(id)webVisiblePosition;
@end

