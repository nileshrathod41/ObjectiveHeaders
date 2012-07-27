/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "Endpointer.h"
#import "SpeexEndpointer.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface SpeexEndpointer : XXUnknownSuperclass <Endpointer> {
	double mStartWaitTime;
	double mInterspeechWaitTime;
	double mEndWaitTime;
	int mEndpointMode;
	unsigned long mFrameRate;
	int mLastStatus;
@private
	void* _impl;
}
@property(assign) double endWaitTime;
@property(assign) int endpointMode;
@property(assign) double interspeechWaitTime;
@property(assign) double startWaitTime;
-(id)init;
-(BOOL)configureWithSampleRate:(double)sampleRate andFrameRate:(unsigned long)rate;
-(void)dealloc;
// declared property getter: -(double)endWaitTime;
// declared property getter: -(int)endpointMode;
-(int)getStatus:(AudioQueueBuffer*)status;
// declared property getter: -(double)interspeechWaitTime;
-(void)reset;
// declared property setter: -(void)setEndWaitTime:(double)time;
// declared property setter: -(void)setEndpointMode:(int)mode;
// declared property setter: -(void)setInterspeechWaitTime:(double)time;
// declared property setter: -(void)setStartWaitTime:(double)time;
// declared property getter: -(double)startWaitTime;
@end

@interface SpeexEndpointer (SpeexEndpointer_Priv)
-(int)getStatus:(float*)status count:(unsigned long)count;
@end

