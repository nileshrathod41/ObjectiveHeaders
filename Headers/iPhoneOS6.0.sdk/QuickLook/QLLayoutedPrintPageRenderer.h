/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QLRemotePrintPageHelper.h"
#import "QuickLook-Structs.h"

@class UIWebPaginationInfo, NSMutableArray;

@interface QLLayoutedPrintPageRenderer : QLRemotePrintPageHelper {
	NSMutableArray* _nodes;
	UIWebPaginationInfo* _paginationInfo;
}
-(id)_currentNodes;
-(id)_htmlPageXPath;
-(void)dealloc;
-(int)numberOfPages;
-(id)pdfDataForPageAtIndex:(int)index withSize:(CGSize)size printingDone:(BOOL*)done;
-(void)prepareForDrawingPages:(NSRange)drawingPages;
@end

