/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MPAlternateTrack : XXUnknownSuperclass {
	int _trackID;
	NSString* _languageCode;
	NSString* _name;
}
+(id)copyOffTrack;
+(id)threeCharCodesForEncodedISO639_2_T:(id)encodedISO639_2_T;
-(id)initWithTrackID:(id)trackID languageCode:(id)code name:(id)name;
-(int)compare:(id)compare;
-(void)dealloc;
-(id)description;
-(id)humanReadableLanguage;
-(id)languageCode;
-(id)name;
-(void)setName:(id)name;
-(int)trackID;
@end

