/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AVWeakReference;

@interface AVWeakKeyValueObserverProxy : XXUnknownSuperclass {
@private
	AVWeakReference* _weakReferenceToObserver;
}
-(id)init;
-(id)initWithWeakReferenceToObserver:(id)observer;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
@end

