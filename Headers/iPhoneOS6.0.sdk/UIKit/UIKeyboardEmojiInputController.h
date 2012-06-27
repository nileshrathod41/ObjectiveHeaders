/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, UIKeyboardEmojiCategory, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiInputController : XXUnknownSuperclass {
@private
	int _currentSequence;
	NSMutableDictionary* _usageHistory;
	NSMutableArray* _recents;
	UIKeyboardEmojiCategory* _lastCategory;
}
@property(retain, nonatomic) UIKeyboardEmojiCategory* lastViewedCategory;	// @synthesize=_lastCategory
+(id)activeInputView;
+(Class)classForInputView;
+(void)writeEmojiDefaults;
+(void)writeEmojiDefaultsAndReleaseActiveInputView;
-(id)initWithInputView:(id)inputView;
-(void)clearAncientHistory;
-(void)dealloc;
-(id)defaultsDictionary;
-(void)emojiUsed:(id)used;
-(BOOL)isAncientSequence:(int)sequence;
// declared property getter: -(id)lastViewedCategory;
-(id)recents;
-(double)scoreForEmoji:(id)emoji;
-(double)scoreForSequence:(int)sequence;
// declared property setter: -(void)setLastViewedCategory:(id)category;
@end

