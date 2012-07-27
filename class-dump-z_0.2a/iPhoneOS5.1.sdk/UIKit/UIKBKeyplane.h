/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class UIKBIdentifierList, NSString, NSArray, UIKBAttributeList, NSMutableArray;

@interface UIKBKeyplane : XXUnknownSuperclass <NSCoding, NSCopying> {
	NSString* m_name;
	NSMutableArray* m_keylayouts;
	UIKBAttributeList* m_attributes;
	UIKBIdentifierList* m_supportedTypes;
	NSArray* m_keys;
}
@property(copy, nonatomic) UIKBAttributeList* attributes;	// @synthesize=m_attributes
@property(retain, nonatomic) NSArray* keylayouts;	// @synthesize=m_keylayouts
@property(readonly, assign, nonatomic) NSArray* keys;
@property(readonly, assign, nonatomic) NSArray* keysOrderedByPosition;
@property(retain, nonatomic) NSString* name;	// @synthesize=m_name
@property(copy, nonatomic) UIKBIdentifierList* supportedTypes;	// @synthesize=m_supportedTypes
+(id)keyplane;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithName:(id)name keylayouts:(id)keylayouts attributes:(id)attributes supportedTypes:(id)types;
-(id)alternateKeyplaneName;
// declared property getter: -(id)attributes;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(BOOL)isShiftKeyPlaneChooser;
-(BOOL)isShiftKeyplane;
-(id)keylayoutWithName:(id)name;
// declared property getter: -(id)keylayouts;
// declared property getter: -(id)keys;
-(id)keysByKeyName:(id)name;
// declared property getter: -(id)keysOrderedByPosition;
-(void)layoutInRect:(CGRect)rect;
-(BOOL)looksLike:(id)like;
-(BOOL)looksLikeShiftAlternate;
// declared property getter: -(id)name;
-(BOOL)notUseCandidateSelection;
// declared property setter: -(void)setAttributes:(id)attributes;
// declared property setter: -(void)setKeylayouts:(id)keylayouts;
// declared property setter: -(void)setName:(id)name;
// declared property setter: -(void)setSupportedTypes:(id)types;
-(id)shiftAlternateKeyplaneName;
-(BOOL)shouldSkipCandidateSelection;
// declared property getter: -(id)supportedTypes;
-(BOOL)supportsType:(int)type;
-(BOOL)usesAdaptiveKeys;
-(BOOL)usesAutoShift;
-(BOOL)usesKeyCharging;
@end

