/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABPasteboardControl.h"
#import "AddressBookUI-Structs.h"

@class UILabel, NSString, UIFont, ABStyleProvider, UIView, ABNamePropertyGroup;

@interface ABPersonNameDisplayView : ABPasteboardControl {
@private
	ABNamePropertyGroup* _namePropertyGroup;
	int _primaryProperty;
	NSString* _primaryPropertyFormattingCountryCode;
	float _minimumHeight;
	BOOL _alignOnBottom;
	UILabel* _headlineLabel;
	UILabel* _tagLineLabel;
	UILabel* _messageLabel;
	UILabel* _messageDetailLabel;
	UIFont* _messageFont;
	UIFont* _messageDetailFont;
	ABStyleProvider* _styleProvider;
	NSString* _customHeadline;
	NSString* _customTagLine;
	NSString* _customMessage;
	NSString* _customMessageDetail;
	UIView* _customMessageView;
}
@property(assign, nonatomic) BOOL alignOnBottom;	// @synthesize=_alignOnBottom
@property(retain, nonatomic) UIView* customMessageView;	// @synthesize=_customMessageView
@property(copy, nonatomic) NSString* headline;	// @synthesize=_customHeadline
@property(copy, nonatomic) NSString* message;	// @synthesize=_customMessage
@property(copy, nonatomic) NSString* messageDetail;	// @synthesize=_customMessageDetail
@property(retain, nonatomic) UIFont* messageDetailFont;	// @synthesize=_messageDetailFont
@property(retain, nonatomic) UIFont* messageFont;	// @synthesize=_messageFont
@property(assign, nonatomic) float minimumHeight;	// @synthesize=_minimumHeight
@property(retain, nonatomic) ABNamePropertyGroup* namePropertyGroup;	// @synthesize=_namePropertyGroup
@property(assign, nonatomic) int primaryProperty;	// @synthesize=_primaryProperty
@property(copy, nonatomic) NSString* primaryPropertyFormattingCountryCode;	// @synthesize=_primaryPropertyFormattingCountryCode
@property(retain, nonatomic) ABStyleProvider* styleProvider;	// @synthesize=_styleProvider
@property(copy, nonatomic) NSString* tagLine;	// @synthesize=_customTagLine
-(id)initWithFrame:(CGRect)frame;
-(void)_adjustLabelTextColorForPasteboardSelection:(BOOL)pasteboardSelection;
-(void)_appendString:(id)string withFormatKey:(id)formatKey toTagLine:(id)tagLine;
-(id)_copyPrimaryValue;
-(id)_copyTagLine;
-(float)_heightForLabelsForWidth:(float)width;
-(id)_newLabelWithFont:(id)font numberOfLines:(unsigned)lines;
-(void)_setFont:(id)font isDetail:(BOOL)detail;
-(void)_setLabel:(id)label highlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)_setMessageText:(id)text isDetail:(BOOL)detail;
-(void)_setSubviewsHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)_updateHeadlineText;
-(void)_updateTagLineText;
-(void)abMenuControllerWillHide;
-(void)abMenuControllerWillShow:(id)abMenuController;
-(BOOL)abShouldShowMenu;
// declared property getter: -(BOOL)alignOnBottom;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)copy:(id)copy;
// declared property getter: -(id)customMessageView;
-(void)dealloc;
// declared property getter: -(id)headline;
-(void)initializeHeadlineAndTaglineIfNeeded;
-(void)layoutSubviews;
// declared property getter: -(id)message;
// declared property getter: -(id)messageDetail;
// declared property getter: -(id)messageDetailFont;
// declared property getter: -(id)messageFont;
// declared property getter: -(float)minimumHeight;
-(CGSize)multilineLabel:(id)label sizeThatFits:(CGSize)fits;
// declared property getter: -(id)namePropertyGroup;
// declared property getter: -(int)primaryProperty;
// declared property getter: -(id)primaryPropertyFormattingCountryCode;
-(void)reloadNameDataAnimated:(BOOL)animated;
// declared property setter: -(void)setAlignOnBottom:(BOOL)bottom;
// declared property setter: -(void)setCustomMessageView:(id)view;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setHeadline:(id)headline;
// declared property setter: -(void)setMessage:(id)message;
// declared property setter: -(void)setMessageDetail:(id)detail;
// declared property setter: -(void)setMessageDetailFont:(id)font;
// declared property setter: -(void)setMessageFont:(id)font;
// declared property setter: -(void)setMinimumHeight:(float)height;
// declared property setter: -(void)setNamePropertyGroup:(id)group;
// declared property setter: -(void)setPrimaryProperty:(int)property;
// declared property setter: -(void)setPrimaryPropertyFormattingCountryCode:(id)code;
// declared property setter: -(void)setStyleProvider:(id)provider;
// declared property setter: -(void)setTagLine:(id)line;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(id)styleProvider;
// declared property getter: -(id)tagLine;
@end

