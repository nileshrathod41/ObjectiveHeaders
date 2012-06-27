/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"

@class NSString;

@interface NSSortDescriptor : NSObject <NSCoding, NSCopying> {
@private
	unsigned _sortDescriptorFlags;
	NSString* _key;
	SEL _selector;
	id _selectorOrBlock;
}
+(id)_defaultSelectorName;
+(void)initialize;
+(id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending;
+(id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending comparator:(id)comparator;
+(id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending selector:(SEL)selector;
-(id)initWithCoder:(id)coder;
-(id)initWithKey:(id)key ascending:(BOOL)ascending;
-(id)initWithKey:(id)key ascending:(BOOL)ascending comparator:(id)comparator;
-(id)initWithKey:(id)key ascending:(BOOL)ascending selector:(SEL)selector;
-(BOOL)_isEqualToSortDescriptor:(id)sortDescriptor;
-(id)_selectorName;
-(void)_setAscending:(BOOL)ascending;
-(void)_setKey:(id)key;
-(void)_setSelectorName:(id)name;
-(BOOL)ascending;
-(id)comparator;
-(int)compareObject:(id)object toObject:(id)object2;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(BOOL)isEqual:(id)equal;
-(id)key;
-(id)replacementObjectForPortCoder:(id)portCoder;
-(id)reversedSortDescriptor;
-(SEL)selector;
@end

