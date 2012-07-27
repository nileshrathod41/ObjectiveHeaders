/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebPDFSearchOperationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString, NSArray, UIPDFDocument, NSObject, NSOperationQueue;
@protocol UIWebPDFSearchControllerDelegate;

@interface UIWebPDFSearchController : XXUnknownSuperclass <UIWebPDFSearchOperationDelegate> {
@private
	unsigned _resultIndexWhenLimitHit;
	BOOL _notifiedThatSearchBegin;
	unsigned _pageIndexWhenLimitHit;
	NSOperationQueue* _searchQueue;
	NSMutableArray* _results;
	NSString* _searchString;
	UIPDFDocument* _documentToSearch;
	NSObject<UIWebPDFSearchControllerDelegate>* searchDelegate;
	unsigned startingPageIndex;
	float documentScale;
	unsigned resultLimit;
}
@property(assign, nonatomic) float documentScale;	// @synthesize
@property(retain, nonatomic) UIPDFDocument* documentToSearch;	// @synthesize=_documentToSearch
@property(readonly, assign, nonatomic) BOOL paused;
@property(assign, nonatomic) unsigned resultLimit;	// @synthesize
@property(retain, nonatomic) NSArray* results;	// @synthesize=_results
@property(assign, nonatomic) NSObject<UIWebPDFSearchControllerDelegate>* searchDelegate;	// @synthesize
@property(retain, nonatomic) NSString* searchString;	// @synthesize=_searchString
@property(readonly, assign, nonatomic) BOOL searching;
@property(assign, nonatomic) unsigned startingPageIndex;	// @synthesize
-(id)init;
-(unsigned)_actualStartingPageIndex;
-(void)_clearSearchQueue;
-(void)cancel;
-(void)dealloc;
// declared property getter: -(float)documentScale;
// declared property getter: -(id)documentToSearch;
-(void)pause;
// declared property getter: -(BOOL)paused;
// declared property getter: -(unsigned)resultLimit;
// declared property getter: -(id)results;
-(void)resume;
-(void)search:(id)search;
-(void)search:(id)search hasPartialResults:(id)results;
// declared property getter: -(id)searchDelegate;
-(void)searchDidBegin:(id)search;
-(void)searchDidFinish:(id)search;
-(void)searchDidTimeOut:(id)search;
-(void)searchLimitHit:(id)hit;
// declared property getter: -(id)searchString;
-(void)searchWasCancelled:(id)cancelled;
// declared property getter: -(BOOL)searching;
// declared property setter: -(void)setDocumentScale:(float)scale;
// declared property setter: -(void)setDocumentToSearch:(id)search;
// declared property setter: -(void)setResultLimit:(unsigned)limit;
// declared property setter: -(void)setResults:(id)results;
// declared property setter: -(void)setSearchDelegate:(id)delegate;
// declared property setter: -(void)setSearchString:(id)string;
// declared property setter: -(void)setStartingPageIndex:(unsigned)index;
// declared property getter: -(unsigned)startingPageIndex;
@end
