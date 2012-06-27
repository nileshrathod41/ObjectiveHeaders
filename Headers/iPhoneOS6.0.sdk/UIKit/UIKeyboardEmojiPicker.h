/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIKBKeyView.h"

@class UIImageView, UITableView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiPicker : UIKBKeyView <UITableViewDelegate, UITableViewDataSource> {
@private
	UIImageView* _container;
	UITableView* _picker;
	UIImageView* _innerShadow;
}
@property(readonly, assign) UITableView* picker;	// @synthesize=_picker
-(id)initWithFrame:(CGRect)frame;
-(id)container;
-(id)containerView;
-(void)dealloc;
-(id)defaultIndexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
// declared property getter: -(id)picker;
-(BOOL)shouldCache;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
@end
