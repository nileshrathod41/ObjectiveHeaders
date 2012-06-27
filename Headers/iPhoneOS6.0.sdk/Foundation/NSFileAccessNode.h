/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "Foundation-Structs.h"

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface NSFileAccessNode : NSObject {
@private
	NSFileAccessNode* _parent;
	NSString* _name;
	NSString* _normalizedName;
	NSFileAccessNode* _symbolicLinkDestination;
	unsigned _symbolicLinkReferenceCount;
	NSMapTable* _childrenByNormalizedName;
	id _presenterOrPresenters;
	id _provider;
	id _accessClaimOrClaims;
	BOOL _isArbitrationBoundary;
	BOOL _isFilePackageIsFigured;
	BOOL _isFilePackage;
	NSString* _lastRequestedChildName;
	NSFileAccessNode* _lastRequestedChild;
	id _progressPublisherOrPublishers;
	id _progressSubscriberOrSubscribers;
}
-(id)initWithParent:(id)parent name:(id)name normalizedName:(id)name3;
-(void)addAccessClaim:(id)claim;
-(void)addPresenter:(id)presenter;
-(void)addProgressPublisher:(id)publisher;
-(void)addProgressSubscriber:(id)subscriber;
-(void)assertDead;
-(void)assertDescendantsLive;
-(void)assertLive;
-(id)biggestFilePackageLocation;
-(id)childForRange:(NSRange)range ofPath:(id)path;
-(void)dealloc;
-(id)descendantAtPath:(id)path componentRange:(NSRange)range create:(BOOL)create;
-(id)descendantForFileURL:(id)fileURL;
-(id)description;
-(id)descriptionWithIndenting:(id)indenting;
-(void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(id)eachAccessClaimOnItemOrContainedItemPerformProcedure;
-(void)forEachAccessClaimOnItemPerformProcedure:(id)eachAccessClaimOnItemPerformProcedure;
-(void)forEachDescendantPerformProcedure:(id)eachDescendantPerformProcedure;
-(void)forEachPresenterOfContainedItemPerformProcedure:(id)containedItemPerformProcedure;
-(void)forEachPresenterOfContainingFilePackagePerformProcedure:(id)containingFilePackagePerformProcedure;
-(void)forEachPresenterOfContainingItemPerformProcedure:(id)containingItemPerformProcedure;
-(void)forEachPresenterOfItemOrContainedItemPerformProcedure:(id)itemOrContainedItemPerformProcedure;
-(void)forEachPresenterOfItemOrContainingItemPerformProcedure:(id)itemOrContainingItemPerformProcedure;
-(void)forEachPresenterOfItemPerformProcedure:(id)itemPerformProcedure;
-(void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(id)itemOrContainedItemPerformProcedure;
-(void)forEachProgressPublisherOfItemPerformProcedure:(id)itemPerformProcedure;
-(void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(id)itemOrContainingItemPerformProcedure;
-(void)forEachProgressSubscriberOfItemPerformProcedure:(id)itemPerformProcedure;
-(void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(id)itemOrContainedItemPerformProcedure;
-(void)forEachReactorToItemOrContainedItemPerformProcedure:(id)itemOrContainedItemPerformProcedure;
-(void)forEachRelevantAccessClaimPerformProcedure:(id)eachRelevantAccessClaimPerformProcedure;
-(BOOL)isFilePackage;
-(BOOL)itemIsInItemAtLocation:(id)location;
-(BOOL)itemIsItemAtLocation:(id)location;
-(BOOL)itemIsSubarbitrable;
-(id)itemProvider;
-(id)pathExceptPrivate;
-(id)pathFromAncestor:(id)ancestor;
-(id)pathToDescendantForFileURL:(id)fileURL componentRange:(NSRange*)range;
-(void)removeAccessClaim:(id)claim;
-(void)removeChildForNormalizedName:(id)normalizedName;
-(void)removePresenter:(id)presenter;
-(void)removeProgressPublisher:(id)publisher;
-(void)removeProgressSubscriber:(id)subscriber;
-(void)removeSelfIfUseless;
-(void)setArbitrationBoundary;
-(void)setChild:(id)child forName:(id)name normalizedName:(id)name3;
-(void)setParent:(id)parent name:(id)name;
-(void)setProvider:(id)provider;
-(void)setSymbolicLinkDestination:(id)destination;
-(id)standardizedURL;
-(id)url;
@end

