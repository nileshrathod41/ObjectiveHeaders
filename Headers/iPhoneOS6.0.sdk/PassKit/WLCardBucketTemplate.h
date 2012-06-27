/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PassKit-Structs.h"

@class NSMutableArray, WLCardFieldTemplate;

@interface WLCardBucketTemplate : XXUnknownSuperclass {
@private
	int _bucketAlignment;
	CGRect _bucketRect;
	float _minFieldPadding;
	WLCardFieldTemplate* _defaultFieldTemplate;
	unsigned _maxFields;
	NSMutableArray* _fieldTemplates;
	BOOL _isHeaderBucket;
	BOOL _sitsOnStripImage;
}
@property(assign, nonatomic) int bucketAlignment;	// @synthesize=_bucketAlignment
@property(assign, nonatomic) CGRect bucketRect;	// @synthesize=_bucketRect
@property(retain, nonatomic) WLCardFieldTemplate* defaultFieldTemplate;	// @synthesize=_defaultFieldTemplate
@property(retain, nonatomic) NSMutableArray* fieldTemplates;	// @synthesize=_fieldTemplates
@property(assign, nonatomic) BOOL isHeaderBucket;	// @synthesize=_isHeaderBucket
@property(assign, nonatomic) unsigned maxFields;	// @synthesize=_maxFields
@property(assign, nonatomic) float minFieldPadding;	// @synthesize=_minFieldPadding
@property(assign, nonatomic) BOOL sitsOnStripImage;	// @synthesize=_sitsOnStripImage
-(void)addFieldTemplate:(id)aTemplate;
// declared property getter: -(int)bucketAlignment;
// declared property getter: -(CGRect)bucketRect;
-(void)dealloc;
// declared property getter: -(id)defaultFieldTemplate;
// declared property getter: -(id)fieldTemplates;
// declared property getter: -(BOOL)isHeaderBucket;
// declared property getter: -(unsigned)maxFields;
// declared property getter: -(float)minFieldPadding;
// declared property setter: -(void)setBucketAlignment:(int)alignment;
// declared property setter: -(void)setBucketRect:(CGRect)rect;
// declared property setter: -(void)setDefaultFieldTemplate:(id)aTemplate;
// declared property setter: -(void)setFieldTemplates:(id)templates;
// declared property setter: -(void)setIsHeaderBucket:(BOOL)bucket;
// declared property setter: -(void)setMaxFields:(unsigned)fields;
// declared property setter: -(void)setMinFieldPadding:(float)padding;
// declared property setter: -(void)setSitsOnStripImage:(BOOL)image;
// declared property getter: -(BOOL)sitsOnStripImage;
-(id)templateForFieldAtIndex:(unsigned)index;
@end

