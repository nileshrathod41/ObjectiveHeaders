/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABVCardPersonValueSetter.h"


@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter {
@private
	BOOL _recordIsGroup;
	BOOL _importingToExistingGroup;
}
@property(assign) BOOL recordIsGroup;	// @synthesize=_recordIsGroup
+(CFDictionaryRef)_personToGroupPropertyMap;
+(int)groupPropertyForPersonProperty:(int)personProperty;
-(id)initWithGroup:(void*)group removeExistingProperties:(BOOL)properties;
-(id)initWithPerson:(void*)person removeExistingProperties:(BOOL)properties;
-(void)_drainExistingProperties;
-(void*)copyParsedRecordWithSource:(void*)source outRecordType:(unsigned*)type;
-(id)imageData;
-(BOOL)propertyIsValidForPerson:(unsigned)person;
// declared property getter: -(BOOL)recordIsGroup;
-(BOOL)setImageData:(id)data cropRectX:(int)x cropRectY:(int)y cropRectWidth:(int)width cropRectHeight:(int)height;
// declared property setter: -(void)setRecordIsGroup:(BOOL)group;
-(BOOL)setValue:(void*)value forProperty:(unsigned)property;
-(void*)valueForProperty:(unsigned)property;
@end

