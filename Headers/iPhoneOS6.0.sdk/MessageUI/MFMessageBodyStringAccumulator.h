/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MFMessageBodyStringAccumulator.h"
#import "MessageUI-Structs.h"
#import "NSObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableString;

@protocol MFMessageBodyStringAccumulator <NSObject>
-(id)accumulatedString;
-(void)appendCharacters:(const unsigned short*)characters length:(unsigned)length;
-(void)appendCustomEntityWithTag:(unsigned)tag stringRepresentation:(id)representation;
-(void)appendRange:(NSRange)range ofString:(id)string;
-(void)appendString:(id)string;
-(BOOL)isFull;
@end

@interface MFMessageBodyStringAccumulator : XXUnknownSuperclass <MFMessageBodyStringAccumulator> {
@private
	NSMutableString* _accumulatedString;
	unsigned _remainingLength;
	int _options;
	int _lastEntity;
	unsigned _lastCustomEntityTag;
	BOOL _isFull;
}
-(id)initWithOptions:(int)options lengthLimit:(unsigned)limit;
-(id)accumulatedString;
-(void)appendCharacters:(const unsigned short*)characters length:(unsigned)length;
-(void)appendCustomEntityWithTag:(unsigned)tag stringRepresentation:(id)representation;
-(void)appendRange:(NSRange)range ofString:(id)string;
-(void)appendString:(id)string;
-(void)dealloc;
-(BOOL)isFull;
@end

