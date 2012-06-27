/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol CalSearchDataSink;

@interface CalSpotlightSearch : XXUnknownSuperclass {
	CalDatabase* _database;
	NSString* _titleString;
	NSString* _locationString;
	NSString* _descriptionString;
	NSString* _participantString;
	id<CalSearchDataSink> _dataSink;
	bool _moreResultsAvailable;
	bool _onlySearchEvents;
	CFArrayRef _partialResults;
	CFSetRef _matchedEventsSet;
	CFSetRef _matchedParticipantsSet;
	CFSetRef _matchedLocationsSet;
	bool _implementsCancellationCallback;
	CFDictionaryRef _closestEventOccurrences;
	bool _cancelled;
}
+(CFDictionaryRef)newQueryCache;
-(id)initWithDatabase:(CalDatabase*)database searchString:(CFStringRef)string dataSink:(id)sink queryCache:(CFDictionaryRef)cache;
-(id)initWithDatabase:(CalDatabase*)database titleString:(id)string locationString:(id)string3 descriptionString:(id)string4 participantString:(id)string5 dataSink:(id)sink queryCache:(CFDictionaryRef)cache;
-(id)initWithDatabase:(CalDatabase*)database titleString:(id)string locationString:(id)string3 descriptionString:(id)string4 participantString:(id)string5 queryCache:(CFDictionaryRef)cache;
-(void)_addMatchedLocationIds:(CFArrayRef)ids;
-(void)_addMatchedParticipantIds:(CFArrayRef)ids;
-(CalLocationIdsSearchContext*)_createLocationIdsSearchContext;
-(CalParticipantIdsSearchContext*)_createParticipantIdsSearchContext;
-(CalEventSpotlightContext*)_createSpotlightEventsContext;
-(void)_deleteLocationIdsSearchContext:(CalLocationIdsSearchContext*)context;
-(void)_deleteParticipantIdsSearchContext:(CalParticipantIdsSearchContext*)context;
-(void)_deleteSpotlightEventsContext:(CalEventSpotlightContext*)context;
-(void)_getLocationSearchResults:(CalLocationIdsSearchContext*)results;
-(void)_getParticipantsSearchResults:(CalParticipantIdsSearchContext*)results;
-(void)_getSpotlightEvents:(CalEventSpotlightContext*)events callback:(id)callback;
-(void)_startLoadingResults:(id)results;
-(void)calculateSearchWindow:(CalEventSpotlightContext*)window;
-(void)dealloc;
-(void)performWithBlock:(id)block;
-(void)startSearching;
-(void)stopSearching;
@end

