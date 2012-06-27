/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSThread, NSArray, NSPredicate;
@protocol ABSearchOperationDelegate;

@interface ABSearchOperation : XXUnknownSuperclass {
@private
	void* _addressBook;
	NSPredicate* _predicate;
	NSArray* _prefetchProperties;
	unsigned _sortOrdering;
	void* _internalSearchAddressBook;
	id<ABSearchOperationDelegate> _delegate;
	id _progressBlock;
	NSThread* _progressBlockThread;
	void* _context;
}
@property(assign, nonatomic) void* addressBook;	// @synthesize=_addressBook
@property(assign, nonatomic) void* context;	// @synthesize=_context
@property(assign, nonatomic) id<ABSearchOperationDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) void* internalSearchAddressBook;	// @synthesize=_internalSearchAddressBook
@property(retain, nonatomic) NSPredicate* predicate;	// @synthesize=_predicate
@property(copy, nonatomic) NSArray* prefetchProperties;	// @synthesize=_prefetchProperties
@property(copy, nonatomic) id progressBlock;	// @synthesize=_progressBlock
@property(assign, nonatomic) unsigned sortOrdering;	// @synthesize=_sortOrdering
+(id)personPredicateWithAnyValueForProperty:(int)property addressBook:(void*)book;
+(id)personPredicateWithGroup:(void*)group addressBook:(void*)book;
+(id)personPredicateWithName:(id)name addressBook:(void*)book;
+(id)personPredicateWithNameLike:(id)nameLike addressBook:(void*)book;
+(id)personPredicateWithNameLike:(id)nameLike inAccount:(id)account addressBook:(void*)book;
+(id)personPredicateWithNameLike:(id)nameLike inGroup:(void*)group addressBook:(void*)book;
+(id)personPredicateWithNameLike:(id)nameLike inGroups:(id)groups sources:(id)sources addressBook:(void*)book;
+(id)personPredicateWithNameLike:(id)nameLike inSource:(void*)source addressBook:(void*)book;
+(id)personPredicateWithNameLike:(id)nameLike inSource:(void*)source includeSourceInResults:(BOOL)results addressBook:(void*)book;
+(id)personPredicateWithNameLike:(id)nameLike inSource:(void*)source includeSourceInResults:(BOOL)results includePhotosInResults:(BOOL)results4 addressBook:(void*)book;
+(id)personPredicateWithNameOnly:(id)nameOnly inAccount:(id)account addressBook:(void*)book;
+(id)personPredicateWithPhoneLike:(id)phoneLike countryHint:(id)hint addressBook:(void*)book;
+(id)personPredicateWithValue:(id)value comparison:(long)comparison forProperty:(int)property addressBook:(void*)book;
-(void)_mainThread_tellDelegateSearchFoundMatch:(void*)match;
// declared property getter: -(void*)addressBook;
-(void)cancel;
// declared property getter: -(void*)context;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(void*)internalSearchAddressBook;
-(BOOL)isConcurrent;
-(void)main;
// declared property getter: -(id)predicate;
-(BOOL)predicateShouldContinue:(id)predicate;
-(BOOL)predicateShouldContinue:(id)predicate afterFindingRecord:(void*)record;
// declared property getter: -(id)prefetchProperties;
// declared property getter: -(id)progressBlock;
// declared property setter: -(void)setAddressBook:(void*)book;
// declared property setter: -(void)setContext:(void*)context;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setInternalSearchAddressBook:(void*)book;
// declared property setter: -(void)setPredicate:(id)predicate;
// declared property setter: -(void)setPrefetchProperties:(id)properties;
// declared property setter: -(void)setProgressBlock:(id)block;
// declared property setter: -(void)setSortOrdering:(unsigned)ordering;
// declared property getter: -(unsigned)sortOrdering;
@end

