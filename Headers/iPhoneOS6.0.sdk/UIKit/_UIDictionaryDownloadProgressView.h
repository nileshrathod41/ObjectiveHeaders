/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UILabel, UIProgressView, NSString;

__attribute__((visibility("hidden")))
@interface _UIDictionaryDownloadProgressView : UIView {
@private
	UIProgressView* _progressView;
	UILabel* _downloadProgressLabel;
	NSString* _downloadStatusText;
	float _downloadProgress;
}
@property(assign, nonatomic) float downloadProgress;	// @synthesize=_downloadProgress
@property(copy, nonatomic) NSString* downloadStatusText;	// @synthesize=_downloadStatusText
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
// declared property getter: -(float)downloadProgress;
// declared property getter: -(id)downloadStatusText;
-(void)layoutSubviews;
// declared property setter: -(void)setDownloadProgress:(float)progress;
// declared property setter: -(void)setDownloadStatusText:(id)text;
@end

