/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSString, NSMutableDictionary;

@interface CTMessagePart : XXUnknownSuperclass {
	NSString* _contentType;
	NSMutableDictionary* _contentTypeParams;
	NSString* _contentId;
	NSString* _contentLocation;
	NSData* _data;
}
@property(copy, nonatomic) NSString* contentId;	// @synthesize=_contentId
@property(copy, nonatomic) NSString* contentLocation;	// @synthesize=_contentLocation
@property(copy, nonatomic) NSString* contentType;	// @synthesize=_contentType
@property(copy, nonatomic) NSData* data;	// @synthesize=_data
-(id)initWithData:(id)data contentType:(id)type;
-(void)addContentTypeParameterWithName:(id)name value:(id)value;
-(id)allContentTypeParameterNames;
// declared property getter: -(id)contentId;
// declared property getter: -(id)contentLocation;
// declared property getter: -(id)contentType;
-(id)contentTypeParameterWithName:(id)name;
// declared property getter: -(id)data;
-(void)dealloc;
// declared property setter: -(void)setContentId:(id)anId;
// declared property setter: -(void)setContentLocation:(id)location;
// declared property setter: -(void)setContentType:(id)type;
// declared property setter: -(void)setData:(id)data;
@end

