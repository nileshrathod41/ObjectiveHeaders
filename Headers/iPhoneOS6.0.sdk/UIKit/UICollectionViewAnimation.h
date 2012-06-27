/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UICollectionViewLayoutAttributes, UICollectionReusableView;

__attribute__((visibility("hidden")))
@interface UICollectionViewAnimation : XXUnknownSuperclass {
@private
	UICollectionReusableView* _view;
	UICollectionViewLayoutAttributes* _finalLayoutAttributes;
	float _startFraction;
	float _endFraction;
	int _viewType;
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
	} _collectionViewAnimationFlags;
}
@property(readonly, assign, nonatomic) BOOL animateFromCurrentPosition;
@property(readonly, assign, nonatomic) BOOL deleteAfterAnimation;
@property(readonly, assign, nonatomic) float endFraction;	// @synthesize=_endFraction
@property(readonly, assign, nonatomic) UICollectionViewLayoutAttributes* finalLayoutAttributes;	// @synthesize=_finalLayoutAttributes
@property(assign, nonatomic) BOOL rasterizeAfterAnimation;
@property(assign, nonatomic) BOOL resetRasterizationAfterAnimation;
@property(readonly, assign, nonatomic) float startFraction;	// @synthesize=_startFraction
@property(readonly, assign, nonatomic) UICollectionReusableView* view;	// @synthesize=_view
@property(readonly, assign, nonatomic) int viewType;	// @synthesize=_viewType
-(id)initWithView:(id)view viewType:(int)type finalLayoutAttributes:(id)attributes startFraction:(float)fraction endFraction:(float)fraction5 animateFromCurrentPostion:(BOOL)currentPostion deleteAfterAnimation:(BOOL)animation;
// declared property getter: -(BOOL)animateFromCurrentPosition;
-(void)dealloc;
// declared property getter: -(BOOL)deleteAfterAnimation;
// declared property getter: -(float)endFraction;
// declared property getter: -(id)finalLayoutAttributes;
// declared property getter: -(BOOL)rasterizeAfterAnimation;
// declared property getter: -(BOOL)resetRasterizationAfterAnimation;
// declared property setter: -(void)setRasterizeAfterAnimation:(BOOL)animation;
// declared property setter: -(void)setResetRasterizationAfterAnimation:(BOOL)animation;
// declared property getter: -(float)startFraction;
// declared property getter: -(id)view;
// declared property getter: -(int)viewType;
@end

