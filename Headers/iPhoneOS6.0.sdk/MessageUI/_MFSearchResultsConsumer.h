/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "NSObject.h"


@protocol _MFSearchResultsConsumer <NSObject>
-(void)_addResults:(id)results ofType:(int)type;
-(void)_appendSortedResultsOfType:(int)type excluding:(id)excluding toResults:(id)results;
-(BOOL)_didFinishSearchForType:(int)type;
-(void)_enumerateSearchResultTypesInSortOrderUsingBlock:(id)sortOrderUsingBlock;
-(BOOL)_isResetting;
-(BOOL)_shouldProcessResultsAfterFinishingType:(int)type;
@end

