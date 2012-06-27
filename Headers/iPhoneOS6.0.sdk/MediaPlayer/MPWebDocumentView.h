/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSString;

@interface MPWebDocumentView : XXUnknownSuperclass {
	id _loadDelegate;
	NSString* _stylesheet;
	unsigned _adjustHeightToFit : 1;
	unsigned _treatAsPlainText : 1;
}
@property(assign, nonatomic) id loadDelegate;	// @synthesize=_loadDelegate
@property(retain, nonatomic) NSString* stylesheet;	// @synthesize=_stylesheet
+(id)newEmptyLabelView;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(CGSize)layoutWithAutoresizingSize:(CGSize)autoresizingSize contentBlock:(id)block;
// declared property getter: -(id)loadDelegate;
-(void)openURL:(id)url;
-(void)setContentWithString:(id)string stylesheet:(id)stylesheet;
-(void)setHTMLFragment:(id)fragment;
// declared property setter: -(void)setLoadDelegate:(id)delegate;
-(void)setPlaintextString:(id)string manuallyWrap:(BOOL)wrap;
// declared property setter: -(void)setStylesheet:(id)stylesheet;
// declared property getter: -(id)stylesheet;
-(void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;
-(void)webView:(id)view didFinishLoadForFrame:(id)frame;
@end

