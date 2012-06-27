/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MFMessageBodySubparser.h"

@class NSMutableArray;
@protocol MFMessageBodyElement_Private;

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser {
@private
	NSMutableArray* _lastTextElements;
	id<MFMessageBodyElement_Private> _lastNonWhitespaceTextElement;
	id _foundTextBlock;
	id _foundWhitespaceBlock;
	BOOL _foundText;
	BOOL _foundForwardSeparator;
}
-(void)_consumeAnyLastTextElementAsAttribution:(BOOL)attribution;
-(void)_consumeTextElement:(id)element isAttribution:(BOOL)attribution;
-(void)copyBlocks;
-(void)dealloc;
-(void)messageBodyParser:(id)parser foundMessageBodyElement:(id)element;
-(void)messageBodyParserDidFinishParsing:(id)messageBodyParser;
-(void)setFoundTextBlock:(id)block;
-(void)setFoundWhitespaceBlock:(id)block;
@end

