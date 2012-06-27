/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "QLPreviewContentControllerProtocol.h"


@protocol QLRemotePreviewContentControllerProtocol <QLPreviewContentControllerProtocol>
-(void)_getNumberOfPagesForSize:(id)size withHandler:(id)handler;
-(void)_getPDFPageAtIndex:(int)index size:(id)size handler:(id)handler;
-(void)_getPDFPreviewDataWithHandler:(id)handler;
-(void)_prepareForDrawingPages:(id)drawingPages;
-(void)_setContentFrame:(id)frame;
-(void)_setNumberOfPreviewItems:(int)previewItems;
-(void)_setPreviewItems:(id)items;
@end

