/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import </libxml2.2.h>
#import "Foundation-Structs.h"
#import "NSCoding.h"


@interface NSPredicateOperator : NSObject <NSCoding, NSCopying> {
@private
	unsigned _operatorType;
	unsigned _modifier;
}
+(SEL)_getSelectorForType:(unsigned)type;
+(id)_getSymbolForType:(unsigned)type;
+(id)_newOperatorWithType:(unsigned)type modifier:(unsigned)modifier options:(unsigned)options;
+(id)operatorWithCustomSelector:(SEL)customSelector modifier:(unsigned)modifier;
+(id)operatorWithType:(unsigned)type modifier:(unsigned)modifier options:(unsigned)options;
-(id)initWithCoder:(id)coder;
-(id)initWithOperatorType:(unsigned)operatorType;
-(id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier;
-(id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier options:(unsigned)options;
-(void)_setModifier:(unsigned)modifier;
-(void)_setOptions:(unsigned)options;
-(void)acceptVisitor:(id)visitor flags:(unsigned)flags;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(unsigned)modifier;
-(unsigned)operatorType;
-(unsigned)options;
-(BOOL)performOperationUsingObject:(id)object andObject:(id)object2;
-(BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;
-(id)predicateFormat;
-(SEL)selector;
-(id)symbol;
@end

