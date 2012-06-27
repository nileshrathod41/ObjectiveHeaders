/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import "NSObject.h"


@protocol NSXMLParserDelegate <NSObject>
@optional
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parser:(id)parser didEndMappingPrefix:(id)prefix;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)parser:(id)parser didStartMappingPrefix:(id)prefix toURI:(id)uri;
-(void)parser:(id)parser foundAttributeDeclarationWithName:(id)name forElement:(id)element type:(id)type defaultValue:(id)value;
-(void)parser:(id)parser foundCDATA:(id)cdata;
-(void)parser:(id)parser foundCharacters:(id)characters;
-(void)parser:(id)parser foundComment:(id)comment;
-(void)parser:(id)parser foundElementDeclarationWithName:(id)name model:(id)model;
-(void)parser:(id)parser foundExternalEntityDeclarationWithName:(id)name publicID:(id)anId systemID:(id)anId4;
-(void)parser:(id)parser foundIgnorableWhitespace:(id)whitespace;
-(void)parser:(id)parser foundInternalEntityDeclarationWithName:(id)name value:(id)value;
-(void)parser:(id)parser foundNotationDeclarationWithName:(id)name publicID:(id)anId systemID:(id)anId4;
-(void)parser:(id)parser foundProcessingInstructionWithTarget:(id)target data:(id)data;
-(void)parser:(id)parser foundUnparsedEntityDeclarationWithName:(id)name publicID:(id)anId systemID:(id)anId4 notationName:(id)name5;
-(void)parser:(id)parser parseErrorOccurred:(id)occurred;
-(id)parser:(id)parser resolveExternalEntityName:(id)name systemID:(id)anId;
-(void)parser:(id)parser validationErrorOccurred:(id)occurred;
-(void)parserDidEndDocument:(id)parser;
-(void)parserDidStartDocument:(id)parser;
@end

