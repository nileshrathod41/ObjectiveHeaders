/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UITableView, UITableHeaderFooterViewLabel, UILabel, UIImage;

@interface UITableHeaderFooterView : UIView {
	UITableHeaderFooterViewLabel* _label;
	UITableHeaderFooterViewLabel* _detailLabel;
	UIImage* _backgroundImage;
	int _tableViewStyle;
	BOOL _sectionHeader;
	CGRect _frame;
	int _textAlignment;
	UITableView* _tableView;
	float _maxTitleWidth;
	BOOL _labelBackgroundColorNeedsUpdate;
	BOOL _detailLabelBackgroundColorNeedsUpdate;
}
@property(readonly, assign, nonatomic) UILabel* detailTextLabel;
@property(assign, nonatomic) float maxTitleWidth;	// @synthesize=_maxTitleWidth
@property(assign, nonatomic) BOOL sectionHeader;	// @synthesize=_sectionHeader
@property(assign, nonatomic) UITableView* tableView;	// @synthesize=_tableView
@property(assign, nonatomic) int tableViewStyle;	// @dynamic
@property(retain, nonatomic) NSString* text;
@property(assign, nonatomic) int textAlignment;
@property(readonly, assign, nonatomic) UILabel* textLabel;
+(id)_defaultFontForTableViewStyle:(int)tableViewStyle isSectionHeader:(BOOL)header;
-(id)initWithFrame:(CGRect)frame;
-(CGRect)_detailLabelFrame;
-(CGSize)_detailTextSizeForWidth:(float)width;
-(void)_invalidateDetailLabelBackgroundColor;
-(void)_invalidateLabelBackgroundColor;
-(id)_label:(BOOL)label;
-(CGRect)_labelFrame;
-(id)_scriptingInfo;
-(CGSize)_textSizeForWidth:(float)width;
-(void)_updateBackgroundImage;
-(void)_updateDetailLabelBackgroundColor;
-(void)_updateDetailLabelBackgroundColorIfNeeded;
-(void)_updateLabelBackgroundColor;
-(void)_updateLabelBackgroundColorIfNeeeded;
-(void)_updateLayerContents;
-(BOOL)_useDetailText;
-(void)dealloc;
// declared property getter: -(id)detailTextLabel;
-(CGRect)frame;
-(void)layoutSubviews;
// declared property getter: -(float)maxTitleWidth;
// declared property getter: -(BOOL)sectionHeader;
-(void)setBackgroundColor:(id)color;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setMaxTitleWidth:(float)width;
-(void)setOpaque:(BOOL)opaque;
// declared property setter: -(void)setSectionHeader:(BOOL)header;
// declared property setter: -(void)setTableView:(id)view;
// declared property setter: -(void)setTableViewStyle:(int)style;
// declared property setter: -(void)setText:(id)text;
// declared property setter: -(void)setTextAlignment:(int)alignment;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(id)tableView;
// declared property getter: -(id)text;
// declared property getter: -(int)textAlignment;
// declared property getter: -(id)textLabel;
@end

