/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKBCacheableView.h"

@class UIKeyboardCandidate, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBarCell : UIView <UIKBCacheableView> {
@private
	UIKeyboardCandidate* m_candidate;
	NSString* m_candidateText;
	id m_target;
	SEL m_action;
	CGSize m_textSize;
	BOOL m_highlighted;
	BOOL m_special;
}
@property(readonly, assign, nonatomic) BOOL cacheDeferable;
@property(readonly, assign, nonatomic) float cachedWidth;
@property(assign, nonatomic) BOOL highlighted;
@property(readonly, assign, nonatomic) CGSize stringSize;	// @synthesize=m_textSize
+(id)fontForCandidateText:(id)candidateText;
-(id)initWithCandidate:(id)candidate tag:(int)tag target:(id)target action:(SEL)action;
-(id)initWithCandidateText:(id)candidateText tag:(int)tag target:(id)target action:(SEL)action;
// declared property getter: -(BOOL)cacheDeferable;
-(id)cacheKey;
// declared property getter: -(float)cachedWidth;
-(void)dealloc;
-(void)displayLayer:(id)layer;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(BOOL)highlighted;
// declared property setter: -(void)setHighlighted:(BOOL)highlighted;
-(BOOL)shouldCache;
// declared property getter: -(CGSize)stringSize;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
@end

