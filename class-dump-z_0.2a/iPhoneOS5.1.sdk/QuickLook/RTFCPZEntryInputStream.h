/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "NSObject.h"


@protocol RTFCPZEntryInputStream <NSObject>
-(unsigned long)readToBuffer:(char*)buffer size:(unsigned long)size;
-(void)readToOwnBuffer:(const char**)ownBuffer size:(unsigned*)size;
@end

