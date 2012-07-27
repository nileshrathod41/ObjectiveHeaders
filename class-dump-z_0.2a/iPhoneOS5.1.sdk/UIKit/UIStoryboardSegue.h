/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface UIStoryboardSegue : XXUnknownSuperclass {
@private
	NSString* _identifier;
	id _sourceViewController;
	id _destinationViewController;
}
@property(readonly, assign, nonatomic) id destinationViewController;	// @synthesize=_destinationViewController
@property(readonly, assign, nonatomic) NSString* identifier;	// @synthesize=_identifier
@property(readonly, assign, nonatomic) id sourceViewController;	// @synthesize=_sourceViewController
-(id)initWithIdentifier:(id)identifier source:(id)source destination:(id)destination;
-(void)dealloc;
// declared property getter: -(id)destinationViewController;
// declared property getter: -(id)identifier;
-(void)perform;
// declared property getter: -(id)sourceViewController;
@end

