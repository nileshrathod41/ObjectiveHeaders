/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, NSString, GKAchievementDescriptionInternal;

@interface GKAchievementDescription : XXUnknownSuperclass <NSCoding> {
@private
	GKAchievementDescriptionInternal* _internal;
	UIImage* _image;
	NSString* _imageURL;
}
@property(readonly, assign, nonatomic) NSString* achievedDescription;	// @dynamic
@property(readonly, assign, nonatomic) NSString* groupIdentifier;	// @dynamic
@property(readonly, assign, nonatomic, getter=isHidden) BOOL hidden;	// @dynamic
@property(readonly, assign, nonatomic) NSString* identifier;	// @dynamic
@property(retain, nonatomic) UIImage* image;	// @synthesize=_image
@property(retain, nonatomic) NSString* imageURL;	// @synthesize=_imageURL
@property(retain, nonatomic) GKAchievementDescriptionInternal* internal;	// @synthesize=_internal
@property(readonly, assign, nonatomic) int maximumPoints;	// @dynamic
@property(readonly, assign, nonatomic, getter=isReplayable) BOOL replayable;	// @dynamic
@property(readonly, assign, nonatomic) NSString* title;	// @dynamic
@property(readonly, assign, nonatomic) NSString* unachievedDescription;	// @dynamic
+(id)incompleteAchievementImage;
+(BOOL)instancesRespondToSelector:(SEL)selector;
+(void)loadAchievementDescriptionWithIdentifier:(id)identifier forGame:(id)game withCompletionHandler:(id)completionHandler;
+(void)loadAchievementDescriptionsForGame:(id)game withCompletionHandler:(id)completionHandler;
+(void)loadAchievementDescriptionsWithCompletionHandler:(id)completionHandler;
+(id)placeholderCompletedAchievementImage;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithInternalRepresentation:(id)internalRepresentation;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)forwardingTargetForSelector:(SEL)selector;
-(unsigned)hash;
// declared property getter: -(id)image;
// declared property getter: -(id)imageURL;
// declared property getter: -(id)internal;
-(BOOL)isEqual:(id)equal;
-(void)loadImageWithCompletionHandler:(id)completionHandler;
-(BOOL)respondsToSelector:(SEL)selector;
// declared property setter: -(void)setImage:(id)image;
// declared property setter: -(void)setImageURL:(id)url;
// declared property setter: -(void)setInternal:(id)internal;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
-(id)valueForUndefinedKey:(id)undefinedKey;
@end

