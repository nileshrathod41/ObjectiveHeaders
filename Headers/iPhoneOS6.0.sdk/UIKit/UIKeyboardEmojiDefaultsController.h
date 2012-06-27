/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiDefaultsController : XXUnknownSuperclass {
@private
	NSMutableDictionary* _defaults;
}
+(id)sharedController;
-(id)init;
-(int)currentSequenceKey;
-(void)dealloc;
-(id)defaultsValueForKey:(id)key;
-(int)emojiCategoryDefaultsIndex:(id)index;
-(id)emptyDefaultsDictionary;
-(void)handleRead:(id)read;
-(void)handleWrite:(id)write;
-(void)readEmojiDefaults;
-(id)recentsKey;
-(void)setCurrentSequenceKey:(int)key;
-(void)setDefaultsValue:(id)value forKey:(id)key;
-(void)setEmojiCategoryDefaultsIndex:(int)index forCategory:(id)category;
-(void)setRecentsKey:(id)key;
-(void)setUsageHistoryKey:(id)key;
-(id)usageHistoryKey;
-(void)writeEmojiDefaults;
@end

