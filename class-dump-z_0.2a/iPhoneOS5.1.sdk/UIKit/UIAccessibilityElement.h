/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAccessibilityIdentification.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface UIAccessibilityElement : XXUnknownSuperclass <UIAccessibilityIdentification> {
@private
	id _storage;
}
@property(assign, nonatomic) id accessibilityContainer;	// @dynamic
@property(assign, nonatomic) CGRect accessibilityFrame;	// @dynamic
@property(retain, nonatomic) NSString* accessibilityHint;	// @dynamic
@property(copy, nonatomic) NSString* accessibilityIdentifier;	// @dynamic
@property(retain, nonatomic) NSString* accessibilityLabel;	// @dynamic
@property(assign, nonatomic) unsigned long long accessibilityTraits;	// @dynamic
@property(retain, nonatomic) NSString* accessibilityValue;	// @dynamic
@property(assign, nonatomic) BOOL isAccessibilityElement;	// @dynamic
-(id)initWithAccessibilityContainer:(id)accessibilityContainer;
@end

