/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyDescription.h"
#import "CoreData-Structs.h"

@class NSExpression;

@interface NSExpressionDescription : NSPropertyDescription {
@private
	id _reservedtype1_1;
	id _reservedtype1_2;
	unsigned _reservedtype1_3;
	id _reservedtype1_4;
	unsigned _reservedtype1_5;
	id _reservedtype1_6;
	void* _reservedtype2_1;
	void* _reservedtype2_2;
	void* _reservedtype2_3;
	NSExpression* _expression;
	unsigned _expressionResultType;
}
-(id)init;
-(id)initWithCoder:(id)coder;
-(unsigned)_propertyType;
-(void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots fetchRequests:(id)requests;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)expression;
-(unsigned)expressionResultType;
-(void)setExpression:(id)expression;
-(void)setExpressionResultType:(unsigned)type;
@end

