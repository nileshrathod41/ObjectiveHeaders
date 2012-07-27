/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSString;

__attribute__((visibility("hidden")))
@interface _UIPreviewItemProxy : XXUnknownSuperclass {
@private
	NSURL* _URL;
	NSURL* _previewURLOverride;
	NSString* _name;
	NSURL* _URLToDeleteOnDealloc;
	NSString* _previewItemContentType;
}
@property(copy, nonatomic) NSURL* URLToDeleteOnDealloc;	// @synthesize=_URLToDeleteOnDealloc
@property(copy, nonatomic) NSString* previewItemContentType;
@property(copy, nonatomic) NSString* previewItemTitle;	// @synthesize=_name
@property(copy, nonatomic) NSURL* previewItemURL;	// @synthesize=_URL
@property(copy, nonatomic) NSURL* previewItemURLOverride;	// @synthesize=_previewURLOverride
// declared property getter: -(id)URLToDeleteOnDealloc;
-(id)_primitive_previewItemContentType;
-(void)dealloc;
// declared property getter: -(id)previewItemContentType;
// declared property getter: -(id)previewItemTitle;
// declared property getter: -(id)previewItemURL;
-(id)previewItemURLForDisplay;
// declared property getter: -(id)previewItemURLOverride;
// declared property setter: -(void)setPreviewItemContentType:(id)type;
// declared property setter: -(void)setPreviewItemTitle:(id)title;
// declared property setter: -(void)setPreviewItemURL:(id)url;
// declared property setter: -(void)setPreviewItemURLOverride:(id)override;
// declared property setter: -(void)setURLToDeleteOnDealloc:(id)deleteOnDealloc;
@end

