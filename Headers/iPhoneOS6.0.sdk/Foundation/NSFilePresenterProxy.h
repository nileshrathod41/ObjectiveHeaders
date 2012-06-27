/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileReactorProxy.h"


__attribute__((visibility("hidden")))
@interface NSFilePresenterProxy : NSFileReactorProxy {
@private
	BOOL _isInSuperArbiter;
	id _prewritingProcedure;
	unsigned _writingRelinquishmentCount;
	id _currentWriterPurposeID;
	id _postwritingProcedure;
	BOOL _didObserveMovingByWriter;
	BOOL _didObserveVersionChangingByWriter;
}
+(id)urlWithItemURL:(id)itemURL subitemPath:(id)path;
-(void)accommodateDeletionWithSubitemPath:(id)subitemPath completionHandler:(id)handler;
-(void)afterRelinquishingToWriterInvokeProcedure:(id)writerInvokeProcedure;
-(void)beforeReacquiringFromWriterInvokeProcedure:(id)writerInvokeProcedure;
-(id)currentWriterPurposeID;
-(void)dealloc;
-(BOOL)didObserveMoving;
-(void)forwardObservationMessageWithKind:(id)kind parameters:(id)parameters;
-(void)forwardRelinquishmentMessageWithKind:(id)kind parameters:(id)parameters resultHandler:(id)handler;
-(void)forwardUsingMessageSender:(id)sender;
-(BOOL)hasRelinquishedToWriter;
-(void)observeChangeByWriterWithPurposeID:(id)purposeID;
-(void)observeChangeOfSubitemAtURL:(id)url byWriterWithPurposeID:(id)purposeID;
-(void)observeDisconnectionByWriterWithPurposeID:(id)purposeID;
-(void)observeMoveByWriterWithPurposeID:(id)purposeID;
-(void)observeMoveOfSubitemAtURL:(id)url toURL:(id)url2 byWriterWithPurposeID:(id)purposeID;
-(void)observeReconnectionByWriterWithPurposeID:(id)purposeID;
-(void)observeVersionChangeOfKind:(id)kind withClientID:(id)clientID name:(id)name subitemPath:(id)path;
-(void)relinquishToReadingClaimWithID:(id)anId options:(unsigned)options purposeID:(id)anId3 resultHandler:(id)handler;
-(void)relinquishToWritingClaimWithID:(id)anId options:(unsigned)options purposeID:(id)anId3 subitemPath:(id)path resultHandler:(id)handler;
-(void)resetMoveObserving;
-(void)saveChangesWithCompletionHandler:(id)completionHandler;
-(void)setInSuperarbiter;
-(void)setItemLocation:(id)location;
-(void)updateLastEventIdentifier:(unsigned long long)identifier;
@end

