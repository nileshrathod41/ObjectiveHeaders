/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, UIView, NSString, UIImageView;

@interface MPVideoBackgroundView : XXUnknownSuperclass {
	int _interfaceOrientation;
	UIView* _imageView;
	UIImageView* _iconView;
	UIImageView* _backgroundPlaceholderImageView;
	UIView* _backgroundPlaceholderPosterImageView;
	UIView* _backgroundPlaceholderView;
	UIImageView* _customBackgroundImageView;
	NSString* _destinationName;
	int _destinationPlaceholderStyle;
	BOOL _showDestinationPlaceholder;
	id _layoutSubviewsPostflightHandler;
}
@property(retain, nonatomic) UIImage* backgroundPlaceholderImage;
@property(retain, nonatomic) UIView* backgroundPlaceholderPosterImageView;	// @synthesize=_backgroundPlaceholderPosterImageView
@property(readonly, assign, nonatomic) UIView* backgroundPlaceholderView;
@property(copy, nonatomic) NSString* destinationName;	// @synthesize=_destinationName
@property(assign, nonatomic) int destinationPlaceholderStyle;	// @synthesize=_destinationPlaceholderStyle
@property(assign, nonatomic) int interfaceOrientation;	// @synthesize=_interfaceOrientation
@property(copy, nonatomic) id layoutSubviewsPostflightHandler;	// @synthesize=_layoutSubviewsPostflightHandler
-(id)initWithFrame:(CGRect)frame;
-(void)_createInformationalTitleView:(id*)view systemFont:(id)font lineBreakMode:(int)mode;
-(void)_tvOutCapabilityDidChangeNotification:(id)_tvOutCapability;
-(void)_updateDestinationBackgroundViewAnimated:(BOOL)animated;
// declared property getter: -(id)backgroundPlaceholderImage;
// declared property getter: -(id)backgroundPlaceholderPosterImageView;
// declared property getter: -(id)backgroundPlaceholderView;
-(void)dealloc;
// declared property getter: -(id)destinationName;
// declared property getter: -(int)destinationPlaceholderStyle;
// declared property getter: -(int)interfaceOrientation;
-(void)layoutSubviews;
// declared property getter: -(id)layoutSubviewsPostflightHandler;
-(id)qtIcon;
// declared property setter: -(void)setBackgroundPlaceholderImage:(id)image;
// declared property setter: -(void)setBackgroundPlaceholderPosterImageView:(id)view;
-(void)setCustomBackgroundImage:(id)image;
// declared property setter: -(void)setDestinationName:(id)name;
// declared property setter: -(void)setDestinationPlaceholderStyle:(int)style;
// declared property setter: -(void)setInterfaceOrientation:(int)orientation;
// declared property setter: -(void)setLayoutSubviewsPostflightHandler:(id)handler;
-(void)setShowDestinationPlaceholder:(BOOL)placeholder animated:(BOOL)animated;
-(void)setShowQTAudioOnlyUI:(BOOL)ui;
@end

