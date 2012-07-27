/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIFingerInfo : XXUnknownSuperclass {
@private
	CFDictionaryRef _fingers;
	int _activeFinger;
	BOOL _activeFingerLocked;
}
-(BOOL)chordChanged:(XXStruct_N9tTZA)changed withEvent:(GSEventRef)event adjustLocation:(BOOL)location;
-(void)dealloc;
-(BOOL)fingersMoved:(XXStruct_N9tTZA)moved withEvent:(GSEventRef)event adjustLocation:(BOOL)location;
-(BOOL)hasActiveFinger;
-(void)startTouch:(XXStruct_N9tTZA)touch withEvent:(GSEventRef)event adjustLocation:(BOOL)location;
@end

