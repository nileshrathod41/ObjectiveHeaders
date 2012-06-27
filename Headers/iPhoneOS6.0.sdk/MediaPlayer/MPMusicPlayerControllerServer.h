/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MPAVController, MPMusicPlayerControllerServerInternal;

@interface MPMusicPlayerControllerServer : XXUnknownSuperclass {
@private
	MPMusicPlayerControllerServerInternal* _internal;
}
@property(readonly, assign, nonatomic) MPAVController* player;
+(void)initialize;
+(BOOL)isMusicPlayerControllerServerRunning;
+(id)sharedInstance;
+(void)startMusicPlayerControllerServerWithDelegate:(id)delegate;
-(id)initWithDelegate:(id)delegate;
-(void)_runMigServer;
-(void)dealloc;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
// declared property getter: -(id)player;
@end

