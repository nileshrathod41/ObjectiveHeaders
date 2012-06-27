/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Twitter.framework/Twitter
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, SLTwitterRequest, ACAccount, NSURL;

@interface TWRequest : XXUnknownSuperclass {
@private
	SLTwitterRequest* _request;
}
@property(readonly, assign, nonatomic) NSURL* URL;
@property(retain, nonatomic) ACAccount* account;
@property(readonly, assign, nonatomic) NSDictionary* parameters;
@property(readonly, assign, nonatomic) int requestMethod;
-(id)initWithURL:(id)url parameters:(id)parameters requestMethod:(int)method;
// declared property getter: -(id)URL;
// declared property getter: -(id)account;
-(void)addMultiPartData:(id)data withName:(id)name type:(id)type;
-(void)dealloc;
// declared property getter: -(id)parameters;
-(void)performRequestWithHandler:(id)handler;
// declared property getter: -(int)requestMethod;
// declared property setter: -(void)setAccount:(id)account;
-(id)signedURLRequest;
@end
