/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ABModel, NSMutableArray, ABBannerView;
@protocol ABMembersDataSourceDelegate, ABStyleProvider;

@interface ABMembersDataSource : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
@private
	id<ABMembersDataSourceDelegate> _delegate;
	id<ABStyleProvider> _styleProvider;
	void* _addressBook;
	ABModel* _model;
	NSMutableArray* _sectionIndexTitles;
	CFDictionaryRef _sectionHeaderToSortingIndex;
	CFDictionaryRef _displayableSectionHeaderToSectionHeader;
	CFDictionaryRef _sectionHeaderToDisplayableSectionHeader;
	CFDictionaryRef _displayableSectionIndexToSectionIndex;
	CFDictionaryRef _sectionIndexToDisplayableSectionIndex;
	ABBannerView* _bannerView;
}
@property(assign, nonatomic) void* addressBook;	// @synthesize=_addressBook
@property(assign, nonatomic) id<ABMembersDataSourceDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) ABModel* model;	// @synthesize=_model
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// @synthesize=_styleProvider
// declared property getter: -(void*)addressBook;
-(id)bannerView;
-(void)createAllDisplayableSectionIndexAndHeaderCaches;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(id)displayableSectionHeaderFromSectionHeader:(id)sectionHeader;
-(id)displayableSectionIndexFromSectionIndex:(id)sectionIndex;
-(unsigned)displayedMemberIndexForIndexPath:(id)indexPath inTableView:(id)tableView;
-(int)globalRowForBanner;
-(int)globalRowForDisplayedMemberIndex:(unsigned)displayedMemberIndex;
-(id)indexPathForDisplayedMemberIndex:(unsigned)displayedMemberIndex inTableView:(id)tableView;
// declared property getter: -(id)model;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(CFDictionaryRef)sectionHeaderSortingIndices;
-(id)sectionIndexFromDisplayableSectionIndex:(id)displayableSectionIndex;
-(id)sectionIndexTitlesForTableView:(id)tableView;
// declared property setter: -(void)setAddressBook:(void*)book;
-(void)setBannerView:(id)view inTableView:(id)tableView;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setModel:(id)model;
// declared property setter: -(void)setStyleProvider:(id)provider;
-(BOOL)shouldShowGroups;
// declared property getter: -(id)styleProvider;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(CGRect)tableView:(id)view frameForSectionIndexGivenProposedFrame:(CGRect)sectionIndexGivenProposedFrame;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)titleForHeaderInSection:(int)section;
@end

