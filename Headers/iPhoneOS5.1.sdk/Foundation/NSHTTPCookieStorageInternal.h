/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface NSHTTPCookieStorageInternal : XXUnknownSuperclass {
@private
	OpaqueCFHTTPCookieStorage* storage;
	OpaqueCFHTTPCookieStorage* privateStorage;
	NSRecursiveLock* dataLock;
	BOOL privateBrowsing;
}
-(id)initWithSharedStorage;
-(void)_syncCookies;
-(void)dealloc;
@end
