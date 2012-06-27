/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessClaim.h"

@class NSURL, NSFileAccessNode;

__attribute__((visibility("hidden")))
@interface NSFileReadingWritingClaim : NSFileAccessClaim {
@private
	NSURL* _readingURL;
	BOOL _readingURLDidChange;
	unsigned _readingOptions;
	NSURL* _writingURL;
	BOOL _writingURLDidChange;
	unsigned _writingOptions;
	NSFileAccessNode* _readingLocation;
	NSFileAccessNode* _writingLocation;
	NSFileAccessNode* _rootNode;
	int _readingLinkResolutionCount;
}
-(id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;
-(id)initWithPurposeID:(id)purposeID readingURL:(id)url options:(unsigned)options writingURL:(id)url4 options:(unsigned)options5 claimer:(id)claimer;
-(BOOL)blocksClaim:(id)claim;
-(void)dealloc;
-(void)devalueSelf;
-(BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;
-(void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;
-(void)granted;
-(void)invokeClaimer;
-(BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;
-(BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;
-(void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;
@end

