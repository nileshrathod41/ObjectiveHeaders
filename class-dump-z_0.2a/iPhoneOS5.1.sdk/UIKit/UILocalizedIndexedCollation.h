/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILocalizedIndexedCollation.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray, NSLocale;

@interface UILocalizedIndexedCollation : XXUnknownSuperclass {
@private
	NSLocale* _locale;
	NSArray* _sectionTitles;
	NSArray* _sectionStartStrings;
	NSArray* _sectionIndexTitles;
	NSArray* _sectionIndexMapping;
	NSString* _transform;
}
@property(readonly, assign, nonatomic) NSArray* sectionIndexTitles;
@property(readonly, assign, nonatomic) NSArray* sectionTitles;
+(id)currentCollation;
-(void)dealloc;
-(int)sectionForObject:(id)object collationStringSelector:(SEL)selector;
-(int)sectionForSectionIndexTitleAtIndex:(int)index;
// declared property getter: -(id)sectionIndexTitles;
// declared property getter: -(id)sectionTitles;
-(id)sortedArrayFromArray:(id)array collationStringSelector:(SEL)selector;
@end

@interface UILocalizedIndexedCollation (UIKitInternal)
+(id)collationWithDictionary:(id)dictionary;
-(id)initWithDictionary:(id)dictionary;
-(id)transformedCollationStringForString:(id)string;
@end

