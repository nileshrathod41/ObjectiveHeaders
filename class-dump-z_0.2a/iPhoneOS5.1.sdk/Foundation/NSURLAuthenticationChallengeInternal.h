/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, NSURLResponse, NSURLCredential, NSURLProtectionSpace;
@protocol NSURLAuthenticationChallengeSender;

__attribute__((visibility("hidden")))
@interface NSURLAuthenticationChallengeInternal : XXUnknownSuperclass {
@private
	NSURLProtectionSpace* space;
	NSURLCredential* proposedCredential;
	int previousFailureCount;
	NSURLResponse* failureResponse;
	NSError* error;
	id<NSURLAuthenticationChallengeSender> sender;
}
-(id)initWithProtectionSpace:(id)protectionSpace proposedCredential:(id)credential previousFailureCount:(int)count failureResponse:(id)response error:(id)error sender:(id)sender;
-(void)dealloc;
@end

