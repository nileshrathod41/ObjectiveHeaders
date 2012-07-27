/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <Foundation/NSOperation.h>

@class QLThumbnailOperation, UIImage;

@interface QLThumbnailView : NSOperation {
	QLThumbnailOperation* _thumbnailOperation;
	UIImage* _image;
	int _pageNumber;
	BOOL _alwaysVisible;
	CGRect unselectedFrame;
	CGRect _unselectedFrame;
}
@property(assign) BOOL alwaysVisible;	// @synthesize=_alwaysVisible
@property(retain) UIImage* image;	// @synthesize=_image
@property(assign) int pageNumber;	// @synthesize=_pageNumber
@property(retain) QLThumbnailOperation* thumbnailOperation;	// @synthesize=_thumbnailOperation
@property(assign) CGRect unselectedFrame;	// @synthesize=_unselectedFrame
-(id)initWithFrame:(CGRect)frame;
// declared property getter: -(BOOL)alwaysVisible;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(id)image;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
// declared property getter: -(int)pageNumber;
// declared property setter: -(void)setAlwaysVisible:(BOOL)visible;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setImage:(id)image;
// declared property setter: -(void)setPageNumber:(int)number;
// declared property setter: -(void)setThumbnailOperation:(id)operation;
// declared property setter: -(void)setUnselectedFrame:(CGRect)frame;
// declared property getter: -(id)thumbnailOperation;
// declared property getter: -(CGRect)unselectedFrame;
@end

