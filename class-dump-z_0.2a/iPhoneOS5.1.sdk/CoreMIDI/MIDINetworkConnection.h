/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CoreMIDI-Structs.h"

@class MIDINetworkHost;

@interface MIDINetworkConnection : XXUnknownSuperclass {
@private
	MIDINetworkConnectionImpl* _impl;
}
@property(readonly, retain, nonatomic) MIDINetworkHost* host;
+(id)connectionWithHost:(id)host;
-(id)init;
-(void)dealloc;
// declared property getter: -(id)host;
@end

