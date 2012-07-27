/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSAttributedString.h"

@class NSString, NSRLEArray;

@interface NSConcreteAttributedString : NSAttributedString {
@private
	NSString* string;
	NSRLEArray* attributes;
}
-(id)init;
-(id)initWithAttributedString:(id)attributedString;
-(id)initWithString:(id)string;
-(id)initWithString:(id)string attributes:(id)attributes;
-(id)_runArrayHoldingAttributes;
-(id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(void)dealloc;
-(void)finalize;
-(unsigned)length;
-(id)string;
@end

