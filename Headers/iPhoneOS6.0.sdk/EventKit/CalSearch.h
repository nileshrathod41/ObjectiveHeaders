/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol CalSearchDataSink;

@interface CalSearch : XXUnknownSuperclass {
	CalDatabase* _database;
	CalFilter* _filter;
	CFStringRef _searchString;
	int _seed;
	id<CalSearchDataSink> _dataSink;
	opaque_pthread_mutex_t _dataSinkLock;
	bool _dateToStartShowingResultsSentToDataSink;
	bool _moreResultsAvailable;
	CFArrayRef _partialResults;
	CFArrayRef _partialCachedOccurrences;
	CFArrayRef _partialCachedDays;
	CFArrayRef _partialCachedDaysIndexes;
	CFSetRef _matchedEventsSet;
	CFSetRef _matchedParticipantsSet;
	CFSetRef _matchedLocationsSet;
	bool _stopLoadingResults;
	opaque_pthread_mutex_t _dataSourceDeallocLock;
	bool _implementsCancellationCallback;
}
-(id)initWithDatabase:(CalDatabase*)database filter:(CalFilter*)filter dataSink:(id)sink;
-(void)_addMatchedEventIds:(CFArrayRef)ids;
-(void)_addMatchedLocationIds:(CFArrayRef)ids;
-(void)_addMatchedParticipantIds:(CFArrayRef)ids;
-(CalEventIdsSearchContext*)_createEventIdsSearchContext;
-(CalLocationIdsSearchContext*)_createLocationIdsSearchContext;
-(CalParticipantIdsSearchContext*)_createParticipantIdsSearchContext;
-(CalEventOccurrenceSearchContext*)_createSearchContext;
-(void)_deleteEventIdsSearchContext:(CalEventIdsSearchContext*)context;
-(void)_deleteLocationIdsSearchContext:(CalLocationIdsSearchContext*)context;
-(void)_deleteParticipantIdsSearchContext:(CalParticipantIdsSearchContext*)context;
-(void)_deleteSearchContext:(CalEventOccurrenceSearchContext*)context;
-(void)_getApplicationSearchResults:(CalEventOccurrenceSearchContext*)results;
-(void)_getAttendeesSearchResults:(CalEventIdsSearchContext*)results;
-(void)_getEventsSearchResults:(CalEventIdsSearchContext*)results;
-(void)_getLocationSearchResults:(CalLocationIdsSearchContext*)results;
-(void)_getParticipantsSearchResults:(CalParticipantIdsSearchContext*)results;
-(void)_startLoadingResults;
-(void)dealloc;
-(bool)moreResultsAvailable;
-(int)seed;
-(void)startSearching;
-(void)stopSearching;
@end

