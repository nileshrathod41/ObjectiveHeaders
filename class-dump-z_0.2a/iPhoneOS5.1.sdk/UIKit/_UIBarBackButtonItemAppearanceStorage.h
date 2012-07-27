/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, NSMutableDictionary, NSValue;

__attribute__((visibility("hidden")))
@interface _UIBarBackButtonItemAppearanceStorage : XXUnknownSuperclass {
@private
	NSMutableDictionary* backgroundImages;
	NSMutableDictionary* miniBackgroundImages;
	NSValue* titlePositionOffset;
	NSValue* miniTitlePositionOffset;
	NSNumber* backgroundVerticalAdjustment;
	NSNumber* miniBackgroundVerticalAdjustment;
}
@property(retain, nonatomic) NSNumber* backgroundVerticalAdjustment;	// @synthesize
@property(retain, nonatomic) NSNumber* miniBackgroundVerticalAdjustment;	// @synthesize
@property(retain, nonatomic) NSValue* miniTitlePositionOffset;	// @synthesize
@property(retain, nonatomic) NSValue* titlePositionOffset;	// @synthesize
-(id)anyBackgroundImage;
-(id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini;
// declared property getter: -(id)backgroundVerticalAdjustment;
-(void)dealloc;
// declared property getter: -(id)miniBackgroundVerticalAdjustment;
// declared property getter: -(id)miniTitlePositionOffset;
-(void)setBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;
// declared property setter: -(void)setBackgroundVerticalAdjustment:(id)adjustment;
// declared property setter: -(void)setMiniBackgroundVerticalAdjustment:(id)adjustment;
// declared property setter: -(void)setMiniTitlePositionOffset:(id)offset;
// declared property setter: -(void)setTitlePositionOffset:(id)offset;
// declared property getter: -(id)titlePositionOffset;
@end

