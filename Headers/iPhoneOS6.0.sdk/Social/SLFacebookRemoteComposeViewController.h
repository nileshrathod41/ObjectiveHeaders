/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol SLFacebookComposeViewServiceProtocol;

__attribute__((visibility("hidden")))
@interface SLFacebookRemoteComposeViewController : XXUnknownSuperclass {
@private
	id<SLFacebookComposeViewServiceProtocol> _serviceProxy;
	id _completionHandler;
	int _controllerResult;
	BOOL _hasAppeared;
}
@property(assign) BOOL hasAppeared;	// @synthesize=_hasAppeared
-(void).cxx_destruct;
-(void)addAttachment:(id)attachment;
-(void)addImageData:(id)data;
-(void)addURL:(id)url;
-(void)dismissModalPresentationAnimated:(id)animated;
// declared property getter: -(BOOL)hasAppeared;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)removeAllImages;
-(void)removeAllURLs;
-(void)setCompletionHandler:(id)handler;
// declared property setter: -(void)setHasAppeared:(BOOL)appeared;
-(void)setInitialText:(id)text;
-(void)setupRemoteViewController;
-(void)sheetWillDismissWithUserResult:(id)sheet;
-(void)shouldShowNetworkActivityIndicator:(id)indicator;
-(void)updateAttachment:(id)attachment;
-(void)updateAttachmentPreview:(id)preview;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewServiceDidTerminateWithError:(id)viewService;
@end

