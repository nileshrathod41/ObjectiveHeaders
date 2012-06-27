/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateList.h"
#import "UIView.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UIAutocorrectInlinePrompt : UIView <UIKeyboardCandidateList> {
@private
	CGRect m_originalTypedTextRect;
	NSString* m_typedText;
	NSString* m_correction;
	NSMutableArray* m_typedTextViews;
	UIView* m_correctionView;
	UIView* m_correctionAnimationView;
	UIView* m_typedTextAnimationView;
	UIView* m_correctionShadowView;
	BOOL m_fits;
	BOOL m_mouseDown;
	id m_delegate;
	int m_index;
	int m_promptTextType;
	float m_originalTypedTextRectCorrectionAmount;
}
-(id)initWithFrame:(CGRect)frame;
-(void)_candidateSelected:(id)selected;
-(id)activeCandidateList;
-(void)addTypedTextRect:(CGRect)rect;
-(void)candidateAcceptedAtIndex:(unsigned)index;
-(id)candidateAtIndex:(unsigned)index;
-(void)candidatesDidChange;
-(void)configureKeyboard:(id)keyboard;
-(id)correction;
-(id)correctionAnimationView;
-(CGRect)correctionFrameFromDesiredFrame:(CGRect)desiredFrame textHeight:(int)height withExtraGap:(float)extraGap;
-(id)correctionShadowView;
-(id)correctionView;
-(unsigned)count;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)dealloc;
-(void)dismiss;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(CGRect)horizontallySquishedCorrectionFrame:(CGRect)frame;
-(unsigned)index;
-(BOOL)isAcceptableTextEffectsFrame:(CGRect)frame afterScrollBy:(float)by;
-(void)layout;
-(float)maximumCandidateWidth;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)mouseUp:(GSEventRef)up;
-(BOOL)needsWebDocumentViewEventsDirectly;
-(unsigned)numberOfShownItems;
-(BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(BOOL)prepareForAnimation:(CGRect)animation;
-(void)removePromptSubviews;
-(void)setCandidateObject:(id)object type:(int)type typedText:(id)text inRect:(CGRect)rect maxX:(float)x;
-(void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;
-(void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;
-(void)setCorrection:(id)correction typedText:(id)text inRect:(CGRect)rect maxX:(float)x;
-(void)setSelectedItem:(unsigned)item;
-(void)setUIKeyboardCandidateListDelegate:(id)delegate;
-(CGRect)shadowFrameForFrame:(CGRect)frame;
-(void)showCandidate:(id)candidate;
-(void)showCandidateAtIndex:(unsigned)index;
-(void)showNextCandidate;
-(void)showNextPage;
-(void)showPageAtIndex:(unsigned)index;
-(void)showPreviousCandidate;
-(void)showPreviousPage;
-(int)textEffectsVisibilityLevel;
-(int)textEffectsVisibilityLevelWhenKey;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(id)typedText;
-(id)typedTextAnimationView;
-(id)typedTextView;
@end

