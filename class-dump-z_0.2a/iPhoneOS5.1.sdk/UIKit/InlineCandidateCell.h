/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface InlineCandidateCell : UIView {
@private
	NSString* _candidate;
	unsigned _index;
	UIFont* _font;
	CGSize _stringImageSize;
	BOOL _highlighted;
	id _target;
	SEL _action;
	BOOL _lastItem;
	BOOL _dontDrawRightEdge;
}
-(id)initWithCandidate:(id)candidate andIndex:(unsigned)index withFontSize:(float)fontSize target:(id)target action:(SEL)action;
-(void)dealloc;
-(void)dontDrawRightEdge:(BOOL)edge;
-(void)drawRect:(CGRect)rect;
-(unsigned)index;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setLastItem:(BOOL)item;
-(CGSize)stringImageSize;
@end

