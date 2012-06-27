/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UINibStringIDTable;

__attribute__((visibility("hidden")))
@interface UINibDecoder : XXUnknownSuperclass {
@private
	Class arrayClass;
	Class setClass;
	Class dictionaryClass;
	Class* classes;
	id* missingClasses;
	UINibDecoderObjectEntry* objects;
	UINibDecoderValue* values;
	char* valueTypes;
	void* valueData;
	unsigned long valueDataSize;
	UINibDecoderHeader header;
	id* objectsByObjectID;
	unsigned* longObjectClassIDs;
	char* shortObjectClassIDs;
	unsigned* keyMasks;
	long inlinedValueKey;
	UINibDecoderRecursiveState recursiveState;
	UINibStringIDTable* keyIDTable;
	id delegate;
	UIKeyToKeyIDCache keyIDCache;
	UIKeyAndScopeToValueCache valueCache;
	int lookupRounds;
	int maxPossibleLookupRounds;
	int failedByKeyMask;
	int savedByKeyMask;
}
@property(assign) id delegate;	// @synthesize
+(id)unarchiveObjectWithData:(id)data;
+(id)unarchiveObjectWithFile:(id)file;
-(id)initForReadingWithData:(id)data;
-(id)initForReadingWithData:(id)data error:(id*)error;
-(BOOL)allowsKeyedCoding;
-(BOOL)containsValueForKey:(id)key;
-(void)dealloc;
-(BOOL)decodeArrayOfCGFloats:(float*)cgfloats count:(int)count forKey:(id)key;
-(BOOL)decodeArrayOfDoubles:(double*)doubles count:(int)count forKey:(id)key;
-(BOOL)decodeArrayOfFloats:(float*)floats count:(int)count forKey:(id)key;
-(void)decodeArrayOfObjCType:(const char*)objCType count:(unsigned)count at:(void*)at;
-(BOOL)decodeBoolForKey:(id)key;
-(const char*)decodeBytesForKey:(id)key returnedLength:(unsigned*)length;
-(void*)decodeBytesWithReturnedLength:(unsigned*)returnedLength;
-(CGAffineTransform)decodeCGAffineTransformForKey:(id)key;
-(CGPoint)decodeCGPointForKey:(id)key;
-(CGRect)decodeCGRectForKey:(id)key;
-(CGSize)decodeCGSizeForKey:(id)key;
-(id)decodeDataObject;
-(double)decodeDoubleForKey:(id)key;
-(float)decodeFloatForKey:(id)key;
-(int)decodeInt32ForKey:(id)key;
-(long long)decodeInt64ForKey:(id)key;
-(int)decodeIntForKey:(id)key;
-(int)decodeIntegerForKey:(id)key;
-(id)decodeNXObject;
-(id)decodeObject;
-(id)decodeObjectForKey:(id)key;
-(id)decodePropertyList;
-(UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)key;
-(void)decodeValueOfObjCType:(const char*)objCType at:(void*)at;
-(void)decodeValuesOfObjCTypes:(const char*)objCTypes;
// declared property getter: -(id)delegate;
-(void)finishDecoding;
-(id)nextGenericKey;
-(void)replaceObject:(id)object withObject:(id)object2;
// declared property setter: -(void)setDelegate:(id)delegate;
-(unsigned)systemVersion;
-(BOOL)validateAndIndexClasses:(const void*)classes length:(unsigned long)length;
-(BOOL)validateAndIndexData:(id)data error:(id*)error;
-(BOOL)validateAndIndexKeys:(const void*)keys length:(unsigned long)length;
-(BOOL)validateAndIndexObjects:(const void*)objects length:(unsigned long)length;
-(BOOL)validateAndIndexValues:(const void*)values length:(unsigned long)length;
-(int)versionForClassName:(id)className;
@end

