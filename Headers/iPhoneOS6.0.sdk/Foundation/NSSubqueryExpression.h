/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSPredicate;

@interface NSSubqueryExpression : NSExpression {
@private
	NSExpression* _collection;
	NSExpression* _variableExpression;
	NSPredicate* _subpredicate;
}
-(id)initWithCoder:(id)coder;
-(id)initWithExpression:(id)expression usingIteratorExpression:(id)expression2 predicate:(id)predicate;
-(id)initWithExpression:(id)expression usingIteratorVariable:(id)variable predicate:(id)predicate;
-(id)_expressionWithSubstitutionVariables:(id)substitutionVariables;
-(BOOL)_shouldUseParensWithDescription;
-(void)acceptVisitor:(id)visitor flags:(unsigned)flags;
-(id)collection;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)expressionValueWithObject:(id)object context:(id)context;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)predicate;
-(id)predicateFormat;
-(id)variable;
-(id)variableExpression;
@end

