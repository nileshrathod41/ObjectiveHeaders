/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface QLDisplayBundleLoader : XXUnknownSuperclass {
	NSMutableDictionary* _displayBundlesById;
}
+(id)sharedLoader;
-(id)init;
-(void)_lookForDisplayBundles;
-(id)copyDisplayBundleWithPreviewItem:(id)previewItem displayBundleIdentifier:(id)identifier;
-(void)dealloc;
-(Class)displayBundleClassForDocumentType:(id)documentType;
-(Class)loadDisplayBundle:(id)bundle;
@end

