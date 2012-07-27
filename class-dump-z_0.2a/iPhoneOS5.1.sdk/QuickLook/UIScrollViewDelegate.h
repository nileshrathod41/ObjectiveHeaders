/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "NSObject.h"
#import "QuickLook-Structs.h"


@protocol UIScrollViewDelegate <NSObject>
@optional
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewDidScrollToTop:(id)scrollView;
-(void)scrollViewDidZoom:(id)scrollView;
-(BOOL)scrollViewShouldScrollToTop:(id)scrollView;
-(void)scrollViewWillBeginDecelerating:(id)scrollView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewWillBeginZooming:(id)scrollView withView:(id)view;
-(void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint*)offset;
-(id)viewForZoomingInScrollView:(id)scrollView;
@end

