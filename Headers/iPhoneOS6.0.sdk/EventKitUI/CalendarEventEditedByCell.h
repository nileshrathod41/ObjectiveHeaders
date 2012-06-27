/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel;
@protocol EKCellShortener;

@interface CalendarEventEditedByCell : XXUnknownSuperclass {
	UILabel* _titleLabel2;
	UILabel* _valueLabel2;
	unsigned _valuePlaceholder : 2;
	id<EKCellShortener> _shortener;
}
@property(readonly, assign, nonatomic) UILabel* detailTextLabel2;
@property(assign, nonatomic) id<EKCellShortener> shortener;	// @synthesize=_shortener
@property(readonly, assign, nonatomic) UILabel* textLabel2;
-(void)_checkValueWidth;
-(void)_copyTextLabelAttributesFrom:(id)from to:(id)to;
-(void)dealloc;
-(BOOL)detailText2IsPlaceholder;
-(BOOL)detailTextIsPlaceholder;
// declared property getter: -(id)detailTextLabel2;
-(void)layoutSubviews;
-(void)setDetailText2IsPlaceholder:(BOOL)placeholder;
-(void)setDetailTextIsPlaceholder:(BOOL)placeholder;
// declared property setter: -(void)setShortener:(id)shortener;
// declared property getter: -(id)shortener;
// declared property getter: -(id)textLabel2;
@end

