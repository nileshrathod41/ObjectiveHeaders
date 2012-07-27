/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, NSMutableData, NSString, NSURLConnection, NSArray, NSURL;

@interface UIWebClip : XXUnknownSuperclass {
	NSString* identifier;
	NSURL* pageURL;
	NSArray* icons;
	unsigned currentIconIndex;
	NSURL* startupImageURL;
	NSURL* startupLandscapeImageURL;
	NSString* title;
	float scale;
	CGPoint scrollPoint;
	BOOL fullScreen;
	BOOL classicMode;
	BOOL removalDisallowed;
	BOOL iconIsScreenShotBased;
	BOOL iconIsPrecomposed;
	BOOL iconIsPrerendered;
	int statusBarStyle;
	UIImage* iconImage;
	UIImage* startupImage;
	UIImage* startupLandscapeImage;
	id delegate;
@private
	NSMutableData* _customIconData;
	NSURLConnection* _iconConnection;
	NSMutableData* _customStartupImageData;
	NSURLConnection* _startupImageConnection;
	NSMutableData* _customStartupLandscapeImageData;
	NSURLConnection* _startupLandscapeImageConnection;
}
@property(assign) BOOL classicMode;	// @synthesize
@property(assign) id delegate;	// @synthesize
@property(assign) BOOL fullScreen;	// @synthesize
@property(readonly, assign, nonatomic) UIImage* iconImage;
@property(readonly, assign) NSString* iconImagePath;
@property(readonly, assign) BOOL iconIsPrecomposed;	// @synthesize
@property(readonly, assign) BOOL iconIsPrerendered;	// @synthesize
@property(readonly, assign) BOOL iconIsScreenShotBased;	// @synthesize
@property(retain) NSArray* icons;	// @synthesize
@property(copy) NSString* identifier;	// @synthesize
@property(retain) NSURL* pageURL;	// @synthesize
@property(assign) BOOL removalDisallowed;	// @synthesize
@property(assign) float scale;	// @synthesize
@property(assign) CGPoint scrollPoint;	// @synthesize
@property(retain, nonatomic) UIImage* startupImage;	// @synthesize
@property(retain) NSURL* startupImageURL;	// @synthesize
@property(retain, nonatomic) UIImage* startupLandscapeImage;	// @synthesize
@property(retain) NSURL* startupLandscapeImageURL;	// @synthesize
@property(assign) int statusBarStyle;	// @synthesize
@property(copy) NSString* title;	// @synthesize
+(id)_contentForMetaName:(id)metaName inWebDocumentView:(id)webDocumentView;
+(id)pathForWebClipWithIdentifier:(id)identifier;
+(id)urlForWebClipWithIdentifier:(id)identifier;
+(BOOL)webClipClassicModeValueForWebDocumentView:(id)webDocumentView;
+(BOOL)webClipFullScreenValueForWebDocumentView:(id)webDocumentView;
+(id)webClipIconsForWebDocumentView:(id)webDocumentView;
+(int)webClipStatusBarStyleForWebDocumentView:(id)webDocumentView;
+(id)webClipWithIdentifier:(id)identifier;
+(id)webClipWithURL:(id)url;
+(id)webClips;
+(id)webClipsDirectoryPath;
-(id)_bundleImageWithName:(id)name;
-(id)_bundleResourceWithName:(id)name;
-(id)_displayIdentifierString;
-(id)_info;
-(id)_initWithIdentifier:(id)identifier;
-(void)_readPropertiesFromBundle:(CFBundleRef)bundle;
-(void)_reloadProperties;
-(void)_setIconImage:(id)image isPrecomposed:(BOOL)precomposed isScreenShotBased:(BOOL)based;
-(BOOL)_writeImage:(id)image toDiskWithFileName:(id)fileName;
-(void)cancelMediaUpdate;
// declared property getter: -(BOOL)classicMode;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connectionDidFinishLoading:(id)connection;
-(BOOL)createOnDisk;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(BOOL)fullScreen;
-(id)generateIconImageForFormat:(int)format scale:(float)scale;
-(id)getStartupImage:(int)image;
// declared property getter: -(id)iconImage;
// declared property getter: -(id)iconImagePath;
// declared property getter: -(BOOL)iconIsPrecomposed;
// declared property getter: -(BOOL)iconIsPrerendered;
// declared property getter: -(BOOL)iconIsScreenShotBased;
// declared property getter: -(id)icons;
// declared property getter: -(id)identifier;
// declared property getter: -(id)pageURL;
// declared property getter: -(BOOL)removalDisallowed;
-(BOOL)removeFromDisk;
-(void)requestCustomIconUpdate;
-(void)requestCustomLandscapeStartupImageUpdate;
-(void)requestCustomPortraitStartupImageUpdate;
-(void)requestIconUpdateInSpringBoard;
// declared property getter: -(float)scale;
// declared property getter: -(CGPoint)scrollPoint;
// declared property setter: -(void)setClassicMode:(BOOL)mode;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setFullScreen:(BOOL)screen;
-(void)setIconImage:(id)image isPrecomposed:(BOOL)precomposed;
-(void)setIconImageFromScreenshot:(id)screenshot;
// declared property setter: -(void)setIcons:(id)icons;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property setter: -(void)setPageURL:(id)url;
// declared property setter: -(void)setRemovalDisallowed:(BOOL)disallowed;
// declared property setter: -(void)setScale:(float)scale;
// declared property setter: -(void)setScrollPoint:(CGPoint)point;
// declared property setter: -(void)setStartupImage:(id)image;
// declared property setter: -(void)setStartupImageURL:(id)url;
// declared property setter: -(void)setStartupLandscapeImage:(id)image;
// declared property setter: -(void)setStartupLandscapeImageURL:(id)url;
// declared property setter: -(void)setStatusBarStyle:(int)style;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)startupImage;
// declared property getter: -(id)startupImageURL;
// declared property getter: -(id)startupLandscapeImage;
// declared property getter: -(id)startupLandscapeImageURL;
// declared property getter: -(int)statusBarStyle;
-(void)stopLoadingCustomIcon;
-(void)stopLoadingStartupImage;
-(void)stopLoadingStartupLandscapeImage;
// declared property getter: -(id)title;
-(BOOL)tryLoadingNextCustomIcon;
-(void)updateCustomMediaLocationsFromWebDocumentView:(id)webDocumentView;
-(BOOL)updateOnDisk;
@end

