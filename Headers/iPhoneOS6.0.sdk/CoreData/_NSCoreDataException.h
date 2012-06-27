/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden"),objc_exception))
@interface _NSCoreDataException : XXUnknownSuperclass {
@private
	long _code;
	NSString* _domain;
}
+(id)exceptionWithName:(id)name code:(long)code reason:(id)reason userInfo:(id)info;
-(id)initWithName:(id)name code:(long)code reason:(id)reason userInfo:(id)info;
-(id)initWithName:(id)name reason:(id)reason userInfo:(id)info;
-(void)_setDomain:(id)domain;
-(long)code;
-(void)dealloc;
-(id)domain;
@end

