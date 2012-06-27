/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>


@interface NSPortNameServer : NSObject {
}
+(id)defaultPortNameServer;
+(id)systemDefaultPortNameServer;
-(id)portForName:(id)name;
-(id)portForName:(id)name host:(id)host;
-(id)portForName:(id)name onHost:(id)host;
-(BOOL)registerPort:(id)port forName:(id)name;
-(BOOL)registerPort:(id)port name:(id)name;
-(BOOL)removePortForName:(id)name;
@end

