/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaPredicate.h"
#import "MPMediaPropertyPredicate.h"
#import "MediaPlayer-Structs.h"

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate {
@private
	MPMediaPropertyPredicateInternal _internal;
}
@property(assign, nonatomic) MPMediaPropertyPredicateInternal _internal;	// @synthesize
@property(assign, nonatomic) int comparisonType;
@property(copy, nonatomic) NSString* property;
@property(copy, nonatomic) id value;
+(id)predicateWithValue:(id)value forProperty:(id)property;
+(id)predicateWithValue:(id)value forProperty:(id)property comparisonType:(int)type;
-(id)initWithCoder:(id)coder;
// declared property getter: -(MPMediaPropertyPredicateInternal)_internal;
// declared property getter: -(int)comparisonType;
-(void)dealloc;
-(id)description;
-(id)descriptionOfValue:(id)value forProperty:(id)property;
-(void)encodeWithCoder:(id)coder;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)property;
// declared property setter: -(void)setComparisonType:(int)type;
// declared property setter: -(void)setProperty:(id)property;
// declared property setter: -(void)setValue:(id)value;
// declared property setter: -(void)set_internal:(MPMediaPropertyPredicateInternal)internal;
// declared property getter: -(id)value;
@end

@interface MPMediaPropertyPredicate (ML3Additions)
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(id)_ML3PredicateForML3EntityProperty:(id)ml3EntityProperty;
@end
