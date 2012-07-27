/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoder.h"


@interface NSKeyedArchiver : NSCoder {
@private
	void* _stream;
	unsigned _flags;
	id _delegate;
	id _containers;
	id _objects;
	id _objRefMap;
	id _replacementMap;
	id _classNameMap;
	id _conditionals;
	id _classes;
	unsigned _genericKey;
	void* _cache;
	unsigned _cacheSize;
	unsigned _estimatedCount;
	void* _reserved2;
	id _visited;
	void* _reserved0;
}
+(BOOL)archiveRootObject:(id)object toFile:(id)file;
+(id)archivedDataWithRootObject:(id)rootObject;
+(id)classNameForClass:(Class)aClass;
+(void)initialize;
+(void)setClassName:(id)name forClass:(Class)aClass;
-(id)init;
-(id)initForWritingWithMutableData:(id)mutableData;
-(id)_blobForCurrentObject;
-(void)_encodeArrayOfObjects:(id)objects forKey:(id)key;
-(void)_encodePropertyList:(id)list forKey:(id)key;
-(id)_initWithOutput:(id)output;
-(void)_setBlobForCurrentObject:(id)currentObject;
-(BOOL)allowsKeyedCoding;
-(id)classNameForClass:(Class)aClass;
-(void)dealloc;
-(id)delegate;
-(id)description;
-(void)encodeArrayOfObjCType:(const char*)objCType count:(unsigned)count at:(const void*)at;
-(void)encodeBool:(BOOL)aBool forKey:(id)key;
-(void)encodeBycopyObject:(id)object;
-(void)encodeByrefObject:(id)object;
-(void)encodeBytes:(const void*)bytes length:(unsigned)length;
-(void)encodeBytes:(const char*)bytes length:(unsigned)length forKey:(id)key;
-(void)encodeConditionalObject:(id)object;
-(void)encodeConditionalObject:(id)object forKey:(id)key;
-(void)encodeDataObject:(id)object;
-(void)encodeDouble:(double)aDouble forKey:(id)key;
-(void)encodeFloat:(float)aFloat forKey:(id)key;
-(void)encodeInt32:(int)a32 forKey:(id)key;
-(void)encodeInt64:(long long)a64 forKey:(id)key;
-(void)encodeInt:(int)int forKey:(id)key;
-(void)encodeObject:(id)object;
-(void)encodeObject:(id)object forKey:(id)key;
-(void)encodeRootObject:(id)object;
-(void)encodeValueOfObjCType:(const char*)objCType at:(const void*)at;
-(void)encodeValuesOfObjCTypes:(const char*)objCTypes;
-(void)finalize;
-(void)finishEncoding;
-(unsigned)outputFormat;
-(void)replaceObject:(id)object withObject:(id)object2;
-(void)setClassName:(id)name forClass:(Class)aClass;
-(void)setDelegate:(id)delegate;
-(void)setOutputFormat:(unsigned)format;
-(unsigned)systemVersion;
-(int)versionForClassName:(id)className;
@end

