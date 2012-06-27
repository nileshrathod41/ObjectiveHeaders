/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString, NSMutableArray;

@interface UIKBTree : XXUnknownSuperclass <NSCopying> {
	int type;
	NSString* name;
	NSMutableDictionary* properties;
	NSMutableArray* subtrees;
	NSMutableDictionary* cache;
}
@property(readonly, assign, nonatomic) BOOL acceptsShiftLock;
@property(retain, nonatomic) NSMutableDictionary* cache;	// @synthesize
@property(readonly, assign, nonatomic) BOOL modifiesKeyplane;
@property(retain, nonatomic) NSString* name;	// @synthesize
@property(retain, nonatomic) NSMutableDictionary* properties;	// @synthesize
@property(retain, nonatomic) NSMutableArray* subtrees;	// @synthesize
@property(assign, nonatomic) int type;	// @synthesize
+(id)key;
+(id)keyboard;
+(id)mergeStringForKeyName:(id)keyName;
+(id)shapesForControlKeyShapes:(id)controlKeyShapes options:(int)options;
+(BOOL)shouldSkipCacheString:(id)string;
+(id)stringForType:(int)type;
+(id)treeOfType:(int)type;
+(id)uniqueName;
-(id)initWithType:(int)type;
-(id)initWithType:(int)type withName:(id)name withProperties:(id)properties withSubtrees:(id)subtrees withCache:(id)cache;
-(id)_cacheRootNameForKey:(id)key;
-(BOOL)_needsScaling;
-(int)_variantType;
// declared property getter: -(BOOL)acceptsShiftLock;
-(id)alternateKeyplaneName;
-(id)attributeSet:(BOOL)set;
-(id)autolocalizedKeyCacheIterator;
-(BOOL)behavesAsShiftKey;
-(BOOL)boolForProperty:(id)property;
// declared property getter: -(id)cache;
-(id)cacheDisplayString;
-(void)cacheKey:(id)key;
-(id)cachedKeysByKeyName:(id)name;
-(void)clearTransientCaches;
-(id)clientVariantActionName;
-(id)clientVariantRepresentedString;
-(int)clipCorners;
-(id)componentName;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(BOOL)disabled;
-(int)displayRowHint;
-(id)displayString;
-(int)displayType;
-(int)displayTypeHint;
-(id)findLeftMoreKey;
-(id)firstCachedKeyWithName:(id)name;
-(CGRect)frame;
-(id)geometries;
-(id)geometry;
-(id)geometrySet:(BOOL)set;
-(BOOL)ghost;
-(int)highlightedVariantIndex;
-(int)indexOfSubtree:(id)subtree;
-(int)intForProperty:(id)property;
-(int)interactionType;
-(BOOL)isClientVariantOverride;
-(BOOL)isDuplicateOfTree:(id)tree;
-(BOOL)isEqualToTree:(id)tree;
-(BOOL)isGenerated;
-(BOOL)isHashed;
-(BOOL)isLeafType;
-(BOOL)isLetters;
-(BOOL)isSameAsTree:(id)tree;
-(BOOL)isShiftKeyPlaneChooser;
-(BOOL)isShiftKeyplane;
-(id)keyAttributes;
-(id)keyForString:(id)string;
-(id)keySet;
-(id)keyplaneForKey:(id)key;
-(id)keys;
-(id)keysByKeyName:(id)name;
-(id)keysOrderedByPosition;
-(id)keysOrderedByPositionWithoutZip;
-(id)keysWithString:(id)string;
-(id)layoutName;
-(id)localizationKey;
-(BOOL)looksLike:(id)like;
-(BOOL)looksLikeShiftAlternate;
// declared property getter: -(BOOL)modifiesKeyplane;
// declared property getter: -(id)name;
-(id)nameFromAttributes;
-(BOOL)noLanguageIndicator;
-(BOOL)notUseCandidateSelection;
-(id)numberForProperty:(id)property;
-(id)overrideDisplayString;
-(CGRect)paddedFrame;
// declared property getter: -(id)properties;
-(id)recursiveDescription;
-(void)removeClientVariantActionInfo;
-(BOOL)renderAsStringKey;
-(BOOL)renderAsStringKeyExcludingPunctuation:(BOOL)punctuation;
-(int)rendering;
-(id)representedString;
-(void)setAttributes:(id)attributes;
// declared property setter: -(void)setCache:(id)cache;
-(void)setClientVariantActionName:(id)name;
-(void)setClientVariantRepresentedString:(id)string;
-(void)setClipCorners:(int)corners;
-(void)setDisabled:(BOOL)disabled;
-(void)setDisplayRowHint:(int)hint;
-(void)setDisplayString:(id)string;
-(void)setDisplayType:(int)type;
-(void)setDisplayTypeHint:(int)hint;
-(void)setFrame:(CGRect)frame;
-(void)setFrameOnly:(CGRect)only;
-(void)setGeometry:(id)geometry;
-(void)setGhost:(BOOL)ghost;
-(void)setHighlightedVariantIndex:(int)index;
-(void)setInteractionType:(int)type;
-(void)setIsClientVariantOverride:(BOOL)override;
-(void)setIsGenerated:(BOOL)generated;
// declared property setter: -(void)setName:(id)name;
-(BOOL)setObject:(id)object forProperty:(id)property;
-(void)setOverrideDisplayString:(id)string;
-(void)setPaddedFrame:(CGRect)frame;
// declared property setter: -(void)setProperties:(id)properties;
-(void)setRendering:(int)rendering;
-(void)setRepresentedString:(id)string;
-(void)setShape:(id)shape;
-(void)setShouldSkipCandidateSelection:(BOOL)skipCandidateSelection;
-(void)setSplitMode:(int)mode;
// declared property setter: -(void)setSubtrees:(id)subtrees;
-(void)setTextAlignment:(int)alignment;
// declared property setter: -(void)setType:(int)type;
-(void)setVariantPopupBias:(id)bias;
-(void)setVariantType:(int)type;
-(void)setVisible:(BOOL)visible;
-(void)setVisualStyle:(int)style;
-(id)shape;
-(id)shiftAlternateKeyplaneName;
-(BOOL)shouldCacheKey;
-(BOOL)shouldSkipCandidateSelection;
-(int)splitMode;
-(id)stringForProperty:(id)property;
-(id)subtreeAtIndexPath:(id)indexPath withPosition:(int)position;
-(id)subtreeWithName:(id)name;
-(id)subtreeWithName:(id)name rows:(id)rows;
-(id)subtreeWithType:(int)type;
// declared property getter: -(id)subtrees;
-(BOOL)subtreesAreOrdered;
-(id)subtreesWithProperty:(id)property value:(id)value;
-(BOOL)supportsType:(int)type;
-(int)textAlignment;
// declared property getter: -(int)type;
-(id)unhashedName;
-(void)updateDictationKeyOnNumberPads:(BOOL)pads;
-(void)updateMoreAndInternationalKeysWithOptions:(int)options;
-(void)updateVariantTypeForActions:(unsigned)actions;
-(BOOL)usesAdaptiveKeys;
-(BOOL)usesAutoShift;
-(BOOL)usesKeyCharging;
-(id)variantDisplayString;
-(id)variantPopupBias;
-(int)variantType;
-(BOOL)visible;
-(int)visualStyle;
-(void)zipAttributes;
-(void)zipGeometries:(BOOL)geometries attributes:(BOOL)attributes;
-(void)zipGeometrySet;
@end

