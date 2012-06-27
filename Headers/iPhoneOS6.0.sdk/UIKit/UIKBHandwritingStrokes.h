/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface UIKBHandwritingStrokes : XXUnknownSuperclass <NSCopying> {
	KBStrokeList* _strokes;
}
-(id)initWithStrokes:(KBStrokeList*)strokes;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(const KBStrokeList*)strokes;
@end

