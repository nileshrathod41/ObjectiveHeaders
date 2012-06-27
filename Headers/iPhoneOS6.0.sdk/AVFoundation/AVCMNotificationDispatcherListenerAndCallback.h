/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AVWeakReference;

@interface AVCMNotificationDispatcherListenerAndCallback : XXUnknownSuperclass {
@private
	AVWeakReference* _weakReferenceToListener;
	/*function-pointer*/ void* _callback;
}
@property(readonly, assign, nonatomic) /*function-pointer*/ void* callback;	// @synthesize=_callback
@property(readonly, assign, nonatomic) id listener;
-(id)initWithWeakReferenceToListener:(id)listener callback:(/*function-pointer*/ void*)callback;
// declared property getter: -(/*function-pointer*/ void*)callback;
-(void)dealloc;
// declared property getter: -(id)listener;
@end

