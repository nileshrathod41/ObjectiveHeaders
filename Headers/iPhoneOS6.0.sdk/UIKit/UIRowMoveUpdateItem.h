/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIUpdateItem.h"

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIRowMoveUpdateItem : UIUpdateItem {
@private
	NSIndexPath* _newIndexPath;
}
-(id)initWithOldIndexPath:(id)oldIndexPath newIndexPath:(id)path;
-(void)dealloc;
-(id)newIndexPath;
@end

