/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import </libxml2.2.h>
#import "NSISRowBody.h"
#import "NSCopying.h"


@interface NSISLinearExpression : NSObject <NSCopying, NSISRowBody> {
	float _constant;
	CFArrayRef _sortedVarPointers;
	CFArrayRef _sortedVarCoeffs;
	float _termScalar;
}
@property(assign) float constant;	// @synthesize=_constant
-(id)init;
-(id)initWithSortedVarPointers:(CFArrayRef)sortedVarPointers sortedVarCoefficients:(CFArrayRef)coefficients constant:(float)constant termScalar:(float)scalar;
-(float)_preScaledCoefficientForVariable:(id)variable;
-(void)_setPreScaledCoefficient:(float)coefficient forVariable:(id)variable;
-(void)addExpression:(id)expression times:(float)times;
-(void)addExpression:(id)expression times:(float)times processVariableNewToReceiver:(id)receiver processVariableDroppedFromReceiver:(id)receiver4;
-(void)addVariable:(id)variable coefficient:(float)coefficient;
-(void)addVariable:(id)variable coefficient:(float)coefficient processVariableNewToReceiver:(id)receiver processVariableDroppedFromReceiver:(id)receiver4;
-(id)allVariables;
-(float)coefficientForVariable:(id)variable;
// declared property getter: -(float)constant;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)enumerateVariables:(id)variables;
-(void)enumerateVariablesAndCoefficients:(id)coefficients;
-(float)incrementConstant:(float)constant;
-(BOOL)isConstant;
-(void)removeVariable:(id)variable;
-(void)replaceVariable:(id)variable withExpression:(id)expression processVariableNewToReceiver:(id)receiver processVariableDroppedFromReceiver:(id)receiver4;
-(void)replaceVariable:(id)variable withVariablePlusDelta:(float)variablePlusDelta;
-(void)replaceVariable:(id)variable withVariablePlusDelta:(float)variablePlusDelta timesVariable:(id)variable3 processVariableNewToReceiver:(id)receiver processVariableDroppedFromReceiver:(id)receiver5;
-(void)scaleBy:(float)by;
-(void)setCoefficient:(float)coefficient forVariable:(id)variable;
// declared property setter: -(void)setConstant:(float)constant;
@end

