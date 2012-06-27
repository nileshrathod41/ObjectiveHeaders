/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSObject.h"

@class NSURL, NSOperationQueue;

@protocol NSFilePresenter <NSObject>
@property(readonly, assign) NSOperationQueue* presentedItemOperationQueue;
@property(readonly, assign) NSURL* presentedItemURL;
@optional
@property(readonly, assign) NSURL* primaryPresentedItemURL;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(id)completionHandler;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)url completionHandler:(id)handler;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion:(id)presentedItem;
-(void)presentedItemDidLoseVersion:(id)presentedItem;
-(void)presentedItemDidMoveToURL:(id)presentedItem;
-(void)presentedItemDidResolveConflictVersion:(id)presentedItem;
@required
// declared property getter: -(id)presentedItemOperationQueue;
// declared property getter: -(id)presentedItemURL;
@optional
-(void)presentedSubitemAtURL:(id)url didGainVersion:(id)version;
-(void)presentedSubitemAtURL:(id)url didLoseVersion:(id)version;
-(void)presentedSubitemAtURL:(id)url didMoveToURL:(id)url2;
-(void)presentedSubitemAtURL:(id)url didResolveConflictVersion:(id)version;
-(void)presentedSubitemDidAppearAtURL:(id)presentedSubitem;
-(void)presentedSubitemDidChangeAtURL:(id)presentedSubitem;
// declared property getter: -(id)primaryPresentedItemURL;
-(void)relinquishPresentedItemToReader:(id)reader;
-(void)relinquishPresentedItemToWriter:(id)writer;
-(void)savePresentedItemChangesWithCompletionHandler:(id)completionHandler;
@end

