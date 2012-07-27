/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABMultiCellContentView_Rows.h"

@class UILabel, NSString;

@interface ABMultiCellContentView_DisplayAlternate : ABMultiCellContentView_Rows {
	UILabel* _displayLabel;
}
@property(readonly, assign, nonatomic) NSString* displayText;
+(id)displayLabelForReuse;
+(CGRect)displayLabelFrameForValueViewFrame:(CGRect)valueViewFrame styleProvider:(id)provider whenEditing:(BOOL)editing;
+(CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;
+(CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing includeRows:(BOOL)rows;
+(void)numberOfLines:(int*)lines lineBreakMode:(int*)mode forDisplayLabelWithPropertyGroup:(id)propertyGroup styleProvider:(id)provider;
+(void)setupDisplayLabel:(id)label withPropertyGroup:(id)propertyGroup styleProvider:(id)provider;
// declared property getter: -(id)displayText;
-(void)reload;
-(void)reloadDisplayText;
-(void)reloadFromModel;
-(void)reloadFromModelIncludingRows:(BOOL)modelIncludingRows;
-(void)reloadIncludingRows:(BOOL)rows includingDisplayView:(BOOL)view;
-(void)setAbCellStyle:(int)style;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;
-(CGRect)valueTextRect;
@end

