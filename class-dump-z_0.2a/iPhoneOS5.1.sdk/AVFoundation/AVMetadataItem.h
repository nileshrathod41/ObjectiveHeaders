/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AVMetadataItem.h"

@class NSData, NSLocale, NSDictionary, NSNumber, NSDate, NSString, AVMetadataItemInternal;
@protocol NSObject;

@interface AVMetadataItem : XXUnknownSuperclass <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {
	AVMetadataItemInternal* _priv;
}
@property(readonly, assign) NSString* commonKey;
@property(readonly, assign) XXStruct_pwHToB duration;
@property(readonly, assign) NSDictionary* extraAttributes;
@property(readonly, assign) id<NSCopying, NSObject> key;
@property(readonly, assign) NSString* keySpace;
@property(readonly, assign) NSLocale* locale;
@property(readonly, assign) XXStruct_pwHToB time;
@property(readonly, assign) id<NSCopying, NSObject> value;
+(id)_figMetadataPropertyFromMetadataItems:(id)metadataItems;
+(id)metadataItemsFromArray:(id)array withKey:(id)key keySpace:(id)space;
+(id)metadataItemsFromArray:(id)array withLocale:(id)locale;
+(id)metadataItemsFromArray:(id)array withStringValue:(id)stringValue;
-(id)init;
-(id)_figMetadataDictionary;
-(id)_figMetadataFormat;
-(id)_figMetadataProperties;
-(id)_initWithFigMetadataDictionary:(id)figMetadataDictionary;
-(id)_initWithReader:(OpaqueFigMetadataReader*)reader itemIndex:(long)index;
-(void)cancelLoading;
// declared property getter: -(id)commonKey;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
// declared property getter: -(XXStruct_pwHToB)duration;
// declared property getter: -(id)extraAttributes;
-(void)finalize;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)key;
// declared property getter: -(id)keySpace;
-(void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;
// declared property getter: -(id)locale;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(int)statusOfValueForKey:(id)key error:(id*)error;
// declared property getter: -(XXStruct_pwHToB)time;
// declared property getter: -(id)value;
@end

@interface AVMetadataItem (AVMetadataItem_Local)
-(void)_extractPropertiesFromDictionary:(id)dictionary;
-(id)_keyAsString;
-(void)_makePropertiesReady;
-(void)_makeValueReady;
-(void)_updateCommonKey;
@end

@interface AVMetadataItem (AVMetadataItemTypeCoercion)
@property(readonly, assign) NSData* dataValue;
@property(readonly, assign) NSDate* dateValue;
@property(readonly, assign) NSNumber* numberValue;
@property(readonly, assign) NSString* stringValue;
// declared property getter: -(id)dataValue;
// declared property getter: -(id)dateValue;
-(CGImageRef)imageValue;
// declared property getter: -(id)numberValue;
// declared property getter: -(id)stringValue;
@end

