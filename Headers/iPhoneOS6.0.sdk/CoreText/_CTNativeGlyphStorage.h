/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import "CoreText-Structs.h"
#import "_CTGlyphStorage.h"


__attribute__((visibility("hidden")))
@interface _CTNativeGlyphStorage : _CTGlyphStorage {
@private
	const int* _attachCounts;
	unsigned _retainCount;
	GlyphStack* _stack;
	long _capacity;
	void* _preallocatedStorage;
}
+(id)newWithCount:(long)count;
-(void)initGlyphStackWithCapacity:(long)capacity;
-(id)initWithCount:(long)count;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(long)attachmentCountAtIndex:(long)index;
-(id)copyWithRange:(XXStruct_K5nmsA)range;
-(void)dealloc;
-(void)finalize;
-(void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;
-(void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;
-(void)popGlyphAtIndex:(long)index;
-(void)prepareWithCapacity:(long)capacity preallocated:(bool)preallocated;
-(void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;
-(void)pushGlyphAtIndex:(long)index;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
-(void)setAdvance:(CGSize)advance atIndex:(long)index;
-(void)setAttachmentCount:(long)count atIndex:(long)index;
-(void)setCapacity:(long)capacity;
-(void)setGlyph:(unsigned short)glyph atIndex:(long)index;
-(void)setProps:(unsigned)props atIndex:(long)index;
-(void)setStringIndex:(long)index atIndex:(long)index2;
-(const int*)stringIndices;
-(void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;
@end

