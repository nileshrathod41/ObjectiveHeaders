/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, NSString;

@interface GKNotificationBannerView : XXUnknownSuperclass {
@private
	NSString* _title;
	NSString* _message;
	BOOL _showing;
	UIImageView* _backgroundView;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	double _duration;
	id _completionHandler;
}
@property(readonly, assign, nonatomic) UIImageView* backgroundView;	// @synthesize=_backgroundView
@property(copy, nonatomic) id completionHandler;	// @synthesize=_completionHandler
@property(assign, nonatomic) double duration;	// @synthesize=_duration
@property(readonly, assign, nonatomic) UIImageView* imageView;	// @synthesize=_imageView
@property(retain, nonatomic) NSString* message;	// @synthesize=_message
@property(readonly, assign, nonatomic) UILabel* messageLabel;	// @synthesize=_messageLabel
@property(assign, nonatomic) BOOL showing;	// @synthesize=_showing
@property(retain, nonatomic) NSString* title;	// @synthesize=_title
@property(readonly, assign, nonatomic) UILabel* titleLabel;	// @synthesize=_titleLabel
+(id)bannerWindow;
+(void)decrementCount;
+(void)incrementCount;
+(dispatch_queue_s*)queue;
+(dispatch_semaphore_s*)semaphore;
-(id)initWithTitle:(id)title message:(id)message;
-(void)_hide;
-(void)_layoutForOrientation:(int)orientation animated:(BOOL)animated;
-(void)_show;
// declared property getter: -(id)backgroundView;
// declared property getter: -(id)completionHandler;
-(void)dealloc;
// declared property getter: -(double)duration;
// declared property getter: -(id)imageView;
-(void)layoutSubviews;
// declared property getter: -(id)message;
// declared property getter: -(id)messageLabel;
-(void)orientationChanged:(id)changed;
// declared property setter: -(void)setCompletionHandler:(id)handler;
// declared property setter: -(void)setDuration:(double)duration;
// declared property setter: -(void)setMessage:(id)message;
// declared property setter: -(void)setShowing:(BOOL)showing;
// declared property setter: -(void)setTitle:(id)title;
-(void)showWithCompletionHandler:(id)completionHandler;
// declared property getter: -(BOOL)showing;
// declared property getter: -(id)title;
// declared property getter: -(id)titleLabel;
@end

