/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol NSObject, NSCopying;

@interface MPUbiquitousLRUDictionaryEntry : XXUnknownSuperclass <NSCoding> {
@private
	id<NSObject, NSCopying, NSCoding> _key;
	id<NSObject, NSCoding> _value;
	double _timestamp;
}
@property(readonly, assign, nonatomic) id<NSObject, NSCopying, NSCoding> key;	// @synthesize=_key
@property(readonly, assign, nonatomic) double timestamp;	// @synthesize=_timestamp
@property(readonly, assign, nonatomic) id<NSObject, NSCoding> value;	// @synthesize=_value
-(id)initWithCoder:(id)coder;
-(id)initWithKey:(id)key value:(id)value;
-(id)initWithKey:(id)key value:(id)value timestamp:(double)timestamp;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)key;
// declared property getter: -(double)timestamp;
// declared property getter: -(id)value;
@end

