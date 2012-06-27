/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableData;

@interface ABVCardLexer : XXUnknownSuperclass {
	NSMutableData* _data;
	char* _bytes;
	unsigned _length;
	unsigned _peakedPoint;
	unsigned _cursor;
	BOOL _unicode;
	int _errorCount;
	NSArray* _activeTokenSets;
}
-(id)initWithData:(id)data;
-(void)_applyNextStringInEncoding:(unsigned)encoding quotedPrintable:(BOOL)printable stopTokens:(int)tokens trim:(BOOL)trim intoString:(id)string;
-(BOOL)advancePastEOL;
-(BOOL)advancePastEOLSingle;
-(BOOL)advancePastEOLUnicode;
-(BOOL)advanceToEOL;
-(BOOL)advanceToEOLSingle;
-(BOOL)advanceToEOLUnicode;
-(void)advanceToPeakPoint;
-(int)advanceToSingleByteString;
-(int)advanceToString;
-(BOOL)advanceToToken:(int)token throughTypes:(int)types;
-(int)advanceToUnicodeString;
-(BOOL)advancedPastToken:(int)token;
-(BOOL)atEOF;
-(unsigned)cursor;
-(void)dealloc;
-(int)errorCount;
-(void)finalize;
-(id)nextArraySeperatedByToken:(int)token stoppingAt:(int)at inEncoding:(unsigned)encoding;
-(id)nextBase64Data;
-(id)nextBase64Line:(BOOL*)line;
-(id)nextEscapedCharacter;
-(id)nextQuotedPrintableData;
-(id)nextSingleByteBase64Line:(BOOL*)line;
-(id)nextSingleByteStringInEncoding:(unsigned)encoding quotedPrintable:(BOOL)printable stopTokens:(int)tokens trim:(BOOL)trim;
-(id)nextStringInEncoding:(unsigned)encoding quotedPrintable:(BOOL)printable stopTokens:(int)tokens trim:(BOOL)trim;
-(int)nextTokenPeak:(BOOL)peak;
-(int)nextTokenPeakSingle:(BOOL)single length:(int)length;
-(int)nextTokenPeakUnicode:(BOOL)unicode length:(int)length;
-(id)nextUnicodeBase64Line:(BOOL*)line;
-(id)nextUnicodeStringStopTokens:(int)tokens quotedPrintable:(BOOL)printable trim:(BOOL)trim;
-(int)tokenAtCursor;
-(id)tokenName:(int)name;
-(id)tokenSetForLength:(int)length;
@end

