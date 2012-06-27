/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "SSRequestDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface MPHomeSharingRentalTracker : XXUnknownSuperclass <SSRequestDelegate> {
@private
	NSMutableDictionary* _rentals;
}
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)_loadRentals;
-(void)_saveRentals;
-(void)addRentalWithItemID:(unsigned long long)itemID databaseID:(id)anId;
-(void)dealloc;
-(void)removeAllRentalsForDatabaseID:(id)databaseID;
-(void)removeRentalWithItemID:(unsigned long long)itemID;
-(void)request:(id)request didFailWithError:(id)error;
-(void)requestDidFinish:(id)request;
@end

