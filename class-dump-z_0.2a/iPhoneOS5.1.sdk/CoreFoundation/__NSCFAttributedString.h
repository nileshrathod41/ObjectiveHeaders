/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "__NSCFType.h"


__attribute__((visibility("hidden")))
@interface __NSCFAttributedString : __NSCFType {
}
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;
-(void)addAttributes:(id)attributes range:(NSRange)range;
-(void)appendAttributedString:(id)string;
-(id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange*)range inRange:(NSRange)range4;
-(id)attributedSubstringFromRange:(NSRange)range;
-(id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange*)range inRange:(NSRange)range3;
-(Class)classForCoder;
-(id)copyWithZone:(NSZone*)zone;
-(void)deleteCharactersInRange:(NSRange)range;
-(void)finalize;
-(void)insertAttributedString:(id)string atIndex:(unsigned)index;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToAttributedString:(id)attributedString;
-(unsigned)length;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(oneway void)release;
-(void)removeAttribute:(id)attribute range:(NSRange)range;
-(void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;
-(void)replaceCharactersInRange:(NSRange)range withString:(id)string;
-(id)retain;
-(unsigned)retainCount;
-(void)setAttributedString:(id)string;
-(void)setAttributes:(id)attributes range:(NSRange)range;
-(id)string;
@end

