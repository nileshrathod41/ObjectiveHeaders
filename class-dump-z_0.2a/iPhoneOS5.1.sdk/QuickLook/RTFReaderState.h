/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "QuickLook-Structs.h"

@class NSMutableData, NSMutableArray, NSArray, NSMutableDictionary, RTFTextTable;

__attribute__((visibility("hidden")))
@interface RTFReaderState : XXUnknownSuperclass {
@private
	id _delegate;
	unsigned _defaultToUniCharEncoding;
	NSMutableDictionary* _documentInfoDictionary;
	CGSize _paperSize;
	float _lMargin;
	float _rMargin;
	float _bMargin;
	float _tMargin;
	CGSize _viewSize;
	int _viewScale;
	int _viewKind;
	NSMutableArray* _attributesStack;
	NSMutableDictionary* _curAttributes;
	unsigned _level;
	NSAttributeInfo _attributeInfo;
	NSMutableData* _attributeInfoStack;
	int _tableNestingLevel;
	BOOL _isRTLDocument;
	NSArray* _textBlocks;
	NSMutableArray* _nestedTables;
	RTFTextTable* _currentTable;
	RTFTextTable* _previousTable;
	NSMutableArray* _currentRowArray;
	NSMutableArray* _previousRowArray;
	int _currentRow;
	int _currentColumn;
	int _currentDefinitionColumn;
	BOOL _currentRowIsLast;
	BOOL _setTableCells;
	unsigned _currentBorderEdge;
	BOOL _currentBorderIsTable;
	NSMutableDictionary* _listDefinitions;
	int _currentListNumber;
	int _currentListLevel;
}
-(id)initWithDelegate:(id)delegate;
-(void)_beginTableRow;
-(void)_clearTableCells;
-(BOOL)_currentTableCellIsPlaceholder;
-(void)_ensureTableCells;
-(void)_notifyEndParagraph;
-(void)_notifyEndTable;
-(void)_notifyEndTableCellWithCell:(id)cell;
-(void)_notifyEndTableRow;
-(void)_notifyProcessString:(id)string;
-(void)_notifyStartParagraph;
-(void)_notifyStartTable;
-(void)_notifyStartTableCell;
-(void)_notifyStartTableRow;
-(void)_paragraphInTable;
-(void)_popTableState;
-(void)_pushTableState;
-(void)_setCurrentBorderEdge:(unsigned)edge isTable:(BOOL)table;
-(void)_setTableCells;
-(void)_updateAttributes;
-(void)addListDefinition:(id)definition forKey:(int)key;
-(void)addOverride:(int)override forKey:(int)key;
-(id)attributeForKey:(id)key;
-(int)baseWritingDirection;
-(BOOL)bold;
-(float)bottomMargin;
-(unsigned long)codePageEncoding;
-(id)currentAttributes;
-(unsigned)currentBorderEdge;
-(BOOL)currentBorderIsTable;
-(int)currentListLevel;
-(int)currentListNumber;
-(id)currentParagraphStyle;
-(id)currentTable;
-(id)currentTableCell;
-(BOOL)currentTableCellIsPlaceholder;
-(void)dealloc;
-(id)defaultParagraphStyle;
-(unsigned long)defaultToUniCharEncoding;
-(id)documentInfoDictionary;
-(void)endParagraph;
-(void)endTableCell;
-(void)endTableCellDefinition;
-(void)endTableRow;
-(id)font;
-(float)fontSize;
-(BOOL)hasWritingDirectionAttribute;
-(BOOL)isLastTableRow;
-(BOOL)italic;
-(void)lastTableRow;
-(float)leftMargin;
-(unsigned)level;
-(id)listDefinitions;
-(void)mergeTableCellsHorizontally;
-(void)mergeTableCellsVertically;
-(BOOL)multiByteEncoding;
-(id)mutableAttributes;
-(id)mutableParagraphStyle;
-(CGSize)paperSize;
-(void)paragraphInTable;
-(void)popState;
-(void)processString:(id)string;
-(void)pushState;
-(void)removeAttributeForKey:(id)key;
-(float)rightMargin;
-(void)setAttribute:(id)attribute forKey:(id)key;
-(void)setBaseWritingDirection:(int)direction;
-(void)setBold:(BOOL)bold;
-(void)setBottomMargin:(float)margin;
-(void)setCodePageEncoding:(unsigned long)encoding;
-(void)setCurrentBorderEdge:(unsigned)edge isTable:(BOOL)table;
-(void)setCurrentListLevel:(int)level;
-(void)setCurrentListNumber:(int)number;
-(void)setDefaultToUniCharEncoding:(unsigned long)uniCharEncoding;
-(void)setFont:(id)font;
-(void)setFontIsValid:(BOOL)valid;
-(void)setFontSize:(float)size;
-(void)setHasWritingDirectionAttribute:(BOOL)attribute;
-(void)setItalic:(BOOL)italic;
-(void)setLeftMargin:(float)margin;
-(void)setMultiByteEncoding:(BOOL)encoding;
-(void)setPaperSize:(CGSize)size;
-(void)setRightMargin:(float)margin;
-(void)setTableFlags:(unsigned)flags;
-(void)setTableNestingLevel:(int)level;
-(void)setTextAlignment:(int)alignment;
-(void)setToUniCharEncoding:(unsigned long)uniCharEncoding;
-(void)setTopMargin:(float)margin;
-(void)setUnicodeAlternativeLength:(unsigned)length;
-(void)setViewKind:(int)kind;
-(void)setViewScale:(int)scale;
-(void)setViewSize:(CGSize)size;
-(void)startParagraph;
-(void)startTableRowDefinition;
-(unsigned long)toUniCharEncoding;
-(float)topMargin;
-(unsigned)unicodeAlternativeLength;
-(CGSize)viewSize;
@end

