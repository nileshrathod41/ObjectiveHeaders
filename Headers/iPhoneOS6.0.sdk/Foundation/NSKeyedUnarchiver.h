/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoder.h"
#import "Foundation-Structs.h"


@interface NSKeyedUnarchiver : NSCoder {
@private
	id _delegate;
	unsigned _flags;
	id _objRefMap;
	id _replacementMap;
	id _nameClassMap;
	id _tmpRefObjMap;
	id _refObjMap;
	int _genericKey;
	id _data;
	void* _offsetData;
	id _containers;
	id _objects;
	const char* _bytes;
	unsigned long long _len;
	id _helper;
	void* _reserved0;
}
+(Class)classForClassName:(id)className;
+(void)initialize;
+(void)setClass:(Class)aClass forClassName:(id)className;
+(id)unarchiveObjectWithData:(id)data;
+(id)unarchiveObjectWithFile:(id)file;
-(id)init;
-(id)initForReadingWithData:(id)data;
-(id)initWithStream:(id)stream;
-(id)_allowedClassNames;
-(id)_blobForCurrentObject;
-(unsigned)_currentUniqueIdentifier;
-(id)_decodeArrayOfObjectsForKey:(id)key;
-(id)_decodePropertyListForKey:(id)key;
-(id)_initWithStream:(CFReadStreamRef)stream data:(id)data topDict:(CFDictionaryRef)dict;
-(void)_replaceObject:(id)object withObject:(id)object2;
-(void)_setAllowedClassNames:(id)names;
-(void)_temporaryMapReplaceObject:(id)object withObject:(id)object2;
-(id)allowedClasses;
-(BOOL)allowsKeyedCoding;
-(Class)classForClassName:(id)className;
-(BOOL)containsValueForKey:(id)key;
-(void)dealloc;
-(void)decodeArrayOfObjCType:(const char*)objCType count:(unsigned)count at:(void*)at;
-(BOOL)decodeBoolForKey:(id)key;
-(const char*)decodeBytesForKey:(id)key returnedLength:(unsigned*)length;
-(void*)decodeBytesWithReturnedLength:(unsigned*)returnedLength;
-(id)decodeDataObject;
-(double)decodeDoubleForKey:(id)key;
-(float)decodeFloatForKey:(id)key;
-(int)decodeInt32ForKey:(id)key;
-(long long)decodeInt64ForKey:(id)key;
-(int)decodeIntForKey:(id)key;
-(id)decodeObject;
-(id)decodeObjectForKey:(id)key;
-(id)decodeObjectOfClass:(Class)aClass forKey:(id)key;
-(id)decodeObjectOfClasses:(id)classes forKey:(id)key;
-(void)decodeValueOfObjCType:(const char*)objCType at:(void*)at;
-(void)decodeValuesOfObjCTypes:(const char*)objCTypes;
-(id)delegate;
-(id)description;
-(void)finalize;
-(void)finishDecoding;
-(void)replaceObject:(id)object withObject:(id)object2;
-(BOOL)requiresSecureCoding;
-(void)setAllowedClasses:(id)classes;
-(void)setClass:(Class)aClass forClassName:(id)className;
-(void)setDelegate:(id)delegate;
-(void)setRequiresSecureCoding:(BOOL)coding;
-(unsigned)systemVersion;
-(int)versionForClassName:(id)className;
@end

