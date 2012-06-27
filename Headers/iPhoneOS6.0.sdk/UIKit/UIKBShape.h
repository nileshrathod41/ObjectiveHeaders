/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class UIKBGeometry;

@interface UIKBShape : XXUnknownSuperclass <NSCoding, NSCopying> {
	UIKBGeometry* m_geometry;
	CGRect m_originalFrame;
	CGRect m_frame;
	CGRect m_paddedFrame;
	unsigned m_uid;
	BOOL m_scaled;
}
@property(assign, nonatomic) CGRect frame;	// @synthesize=m_frame
@property(retain, nonatomic) UIKBGeometry* geometry;	// @synthesize=m_geometry
@property(readonly, assign, nonatomic) CGRect originalFrame;
@property(assign, nonatomic) CGRect paddedFrame;	// @synthesize=m_paddedFrame
@property(readonly, assign, nonatomic) unsigned uid;	// @synthesize=m_uid
+(id)shape;
+(id)shapeByCombining:(id)combining withShape:(id)shape;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithGeometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame3;
-(CGRect)_scaleRect:(CGRect)rect inYAxis:(BOOL)yaxis;
-(void)addRectFrom:(id)from;
-(void)addRectFrom:(id)from widthFraction:(float)fraction adjustOriginFactor:(float)factor;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(CGRect)frame;
// declared property getter: -(id)geometry;
-(unsigned)hash;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)equal;
-(void)makeLikeOther:(id)other;
// declared property getter: -(CGRect)originalFrame;
// declared property getter: -(CGRect)paddedFrame;
-(void)scaleIfNeeded:(float)needed onlyYAxis:(BOOL)axis;
-(void)scaleWidth:(float)width;
// declared property setter: -(void)setFrame:(CGRect)frame;
-(void)setFrame:(CGRect)frame resetOriginalFrame:(BOOL)frame2;
-(void)setFrameOnly:(CGRect)only;
// declared property setter: -(void)setGeometry:(id)geometry;
// declared property setter: -(void)setPaddedFrame:(CGRect)frame;
// declared property getter: -(unsigned)uid;
@end

