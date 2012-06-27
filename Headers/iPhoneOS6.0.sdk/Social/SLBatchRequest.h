/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import "SLRequest.h"

@class NSMutableArray;

@interface SLBatchRequest : SLRequest {
@private
	NSMutableArray* _requests;
}
-(id)initWithServiceType:(id)serviceType URL:(id)url parameters:(id)parameters requestMethod:(int)method;
-(void).cxx_destruct;
-(void)addRequest:(id)request;
-(id)preparedURLRequest;
@end

