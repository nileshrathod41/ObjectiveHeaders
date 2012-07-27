/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSBundle, NSString, NSMutableDictionary;

@interface UIStoryboard : XXUnknownSuperclass {
@private
	NSBundle* bundle;
	NSString* relativePathFromBundle;
	NSDictionary* identifierToNibNameMap;
	NSString* designatedEntryPointIdentifier;
	NSMutableDictionary* identifierToUINibMap;
}
@property(readonly, assign, nonatomic) NSBundle* bundle;	// @synthesize
@property(readonly, assign, nonatomic) NSString* designatedEntryPointIdentifier;	// @synthesize
@property(readonly, assign, nonatomic) NSDictionary* identifierToNibNameMap;	// @synthesize
@property(readonly, assign, nonatomic) NSMutableDictionary* identifierToUINibMap;	// @synthesize
@property(readonly, assign, nonatomic) NSString* relativePathFromBundle;	// @synthesize
+(id)storyboardWithName:(id)name bundle:(id)bundle;
-(id)initWithBundle:(id)bundle relativePathFromBundle:(id)bundle2 identifierToNibNameMap:(id)nibNameMap designatedEntryPointIdentifier:(id)identifier;
// declared property getter: -(id)bundle;
-(BOOL)containsNibNamed:(id)named;
-(void)dealloc;
// declared property getter: -(id)designatedEntryPointIdentifier;
// declared property getter: -(id)identifierToNibNameMap;
// declared property getter: -(id)identifierToUINibMap;
-(id)instantiateInitialViewController;
-(id)instantiateViewControllerWithIdentifier:(id)identifier;
-(id)nibForStoryboardNibNamed:(id)storyboardNibNamed;
-(id)nibForViewControllerWithIdentifier:(id)identifier;
// declared property getter: -(id)relativePathFromBundle;
@end

