/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPredicate.h"
#import "Foundation-Structs.h"


@interface NSTruePredicate : NSPredicate {
}
+(id)allocWithZone:(NSZone*)zone;
+(id)defaultInstance;
+(void)initialize;
-(id)initWithCoder:(id)coder;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)acceptVisitor:(id)visitor flags:(unsigned)flags;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)predicateFormat;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
@end

