/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "Foundation-Structs.h"

@class NSLock;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExportedObjectTable : NSObject {
@private
	NSLock* _lock;
	CFDictionaryRef _proxyNumberToObject;
	CFDictionaryRef _objectToProxyNumber;
	unsigned long long _next;
}
-(id)init;
-(void)dealloc;
-(id)exportedObjectForProxyNumber:(unsigned long long)proxyNumber;
-(void)finalize;
-(id)interfaceForProxyNumber:(unsigned long long)proxyNumber;
-(unsigned long long)proxyNumberForExportedObject:(id)exportedObject interface:(id)interface;
-(void)releaseExportedObject:(unsigned long long)object;
-(void)setExportedObject:(id)object forProxyNumber:(unsigned long long)proxyNumber;
-(void)setInterface:(id)interface forProxyNumber:(unsigned long long)proxyNumber;
@end

