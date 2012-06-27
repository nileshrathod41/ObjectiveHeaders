/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaPredicate.h"

@class NSString, NSSet;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate {
	NSString* _searchString;
	NSSet* _properties;
}
@property(copy, nonatomic) NSSet* properties;	// @synthesize=_properties
@property(copy, nonatomic) NSString* searchString;	// @synthesize=_searchString
+(id)predicateWithSearchString:(id)searchString forProperties:(id)properties;
-(id)initWithCoder:(id)coder;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(id)_ML3PredicateForEntityClass:(Class)entityClass;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)properties;
// declared property getter: -(id)searchString;
// declared property setter: -(void)setProperties:(id)properties;
// declared property setter: -(void)setSearchString:(id)string;
@end

