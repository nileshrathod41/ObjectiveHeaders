/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSCompoundPredicateOperator : NSPredicateOperator {
}
+(id)andPredicateOperator;
+(id)notPredicateOperator;
+(id)orPredicateOperator;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(BOOL)evaluatePredicates:(id)predicates withObject:(id)object;
-(BOOL)evaluatePredicates:(id)predicates withObject:(id)object substitutionVariables:(id)variables;
-(id)predicateFormat;
-(id)symbol;
@end

