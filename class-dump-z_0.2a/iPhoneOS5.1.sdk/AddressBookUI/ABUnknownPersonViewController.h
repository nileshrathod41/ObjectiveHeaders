/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABUnknownPersonViewController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIView;
@protocol ABUnknownPersonViewControllerDelegate;

@interface ABUnknownPersonViewController : XXUnknownSuperclass {
@private
	id _helper;
	id<ABUnknownPersonViewControllerDelegate> _unknownPersonViewDelegate;
	id _reserved;
}
@property(assign, nonatomic) void* addressBook;
@property(assign, nonatomic) BOOL allowsActions;
@property(assign, nonatomic) BOOL allowsAddingToAddressBook;
@property(assign, nonatomic) BOOL allowsConferencing;
@property(assign, nonatomic) BOOL allowsSendingTextMessage;
@property(assign, nonatomic) BOOL allowsSharing;
@property(copy, nonatomic) NSString* alternateName;
@property(copy, nonatomic) NSString* attribution;
@property(readonly, assign, nonatomic) BOOL canShareContact;
@property(assign, nonatomic) void* displayedPerson;
@property(assign, nonatomic) BOOL isLocation;
@property(copy, nonatomic) NSString* message;
@property(retain, nonatomic) UIView* personHeaderView;
@property(assign, nonatomic) BOOL savesNewContactOnSuspend;
@property(assign, nonatomic) BOOL shouldAlignPersonHeaderViewToImage;
@property(assign, nonatomic) id<ABUnknownPersonViewControllerDelegate> unknownPersonViewDelegate;	// @synthesize=_unknownPersonViewDelegate
+(id)defaultLabelsForProperty:(int)property person:(void*)person addressBook:(void*)book;
-(id)init;
-(id)initWithNibName:(id)nibName bundle:(id)bundle style:(int)style;
-(id)initWithStyle:(int)style;
-(id)initWithVCardData:(id)vcardData;
-(void)_addToExistingContacts;
-(void)_addUnmergedRecords;
-(id)_alertSheet;
-(BOOL)_allowsAutorotation;
-(void)_createNewContacts;
-(id)_findMatchingCardsForRecord:(void*)record;
-(id)_forwarder;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(void)_showCardViewerForIndex:(int)index;
-(void)_showUnmergedContactsAlert;
-(id)_unmergedAlertSheet;
-(id)_unmergedRecords;
-(void)_unselectTable;
-(id)_vCardProperties;
-(id)_vCardTable;
-(id)_vCards;
-(id)_viewControllerForCardAtIndex:(int)index;
-(int)abViewControllerType;
-(float)ab_heightToFitForViewInPopoverView;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
// declared property getter: -(void*)addressBook;
// declared property getter: -(BOOL)allowsActions;
// declared property getter: -(BOOL)allowsAddingToAddressBook;
// declared property getter: -(BOOL)allowsConferencing;
// declared property getter: -(BOOL)allowsSendingTextMessage;
// declared property getter: -(BOOL)allowsSharing;
// declared property getter: -(id)alternateName;
-(void)applicationDidResume;
// declared property getter: -(id)attribution;
// declared property getter: -(BOOL)canShareContact;
-(id)customFooterView;
-(id)customHeaderView;
-(id)customMessageView;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)animated;
// declared property getter: -(void*)displayedPerson;
-(id)displayedProperties;
-(id)helper;
// declared property getter: -(BOOL)isLocation;
-(void)loadView;
// declared property getter: -(id)message;
-(id)messageDetail;
-(id)messageDetailFont;
-(id)messageFont;
-(int)numberOfSectionsInTableView:(id)tableView;
// declared property getter: -(id)personHeaderView;
-(BOOL)personViewControllerHelper:(id)helper shouldContinueAfterSelectingPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup;
-(void)presentAddToContactsSheet;
-(void)presentNewContactViewControllerForAddToContacts;
-(void)presentPeoplePickerNavigationControllerForMergeToContact;
-(void)presentShareContactSheet;
-(void)reloadImageData;
// declared property getter: -(BOOL)savesNewContactOnSuspend;
// declared property setter: -(void)setAddressBook:(void*)book;
// declared property setter: -(void)setAllowsActions:(BOOL)actions;
// declared property setter: -(void)setAllowsAddingToAddressBook:(BOOL)addressBook;
// declared property setter: -(void)setAllowsConferencing:(BOOL)conferencing;
// declared property setter: -(void)setAllowsSendingTextMessage:(BOOL)message;
// declared property setter: -(void)setAllowsSharing:(BOOL)sharing;
// declared property setter: -(void)setAlternateName:(id)name;
// declared property setter: -(void)setAttribution:(id)attribution;
-(void)setAttribution:(id)attribution target:(id)target selector:(SEL)selector;
-(void)setCustomFooterView:(id)view;
-(void)setCustomHeaderView:(id)view;
-(void)setCustomMessageView:(id)view;
// declared property setter: -(void)setDisplayedPerson:(void*)person;
-(void)setDisplayedProperties:(id)properties;
-(void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier;
-(void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier important:(BOOL)important;
-(void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void*)person important:(BOOL)important;
// declared property setter: -(void)setIsLocation:(BOOL)location;
// declared property setter: -(void)setMessage:(id)message;
-(void)setMessageDetail:(id)detail;
-(void)setMessageDetailFont:(id)font;
-(void)setMessageFont:(id)font;
// declared property setter: -(void)setPersonHeaderView:(id)view;
-(void)setPrimaryProperty:(int)property;
-(void)setPrimaryProperty:(int)property countryCode:(id)code;
// declared property setter: -(void)setSavesNewContactOnSuspend:(BOOL)suspend;
-(void)setShareLocationSnapshotImage:(id)image;
-(void)setShareLocationURL:(id)url;
-(void)setShareMessageBody:(id)body;
-(void)setShareMessageBodyIsHTML:(BOOL)html;
-(void)setShareMessageSubject:(id)subject;
// declared property setter: -(void)setShouldAlignPersonHeaderViewToImage:(BOOL)alignPersonHeaderViewToImage;
-(void)setStringValue:(id)value forProperty:(int)property;
-(void)setStyleProvider:(id)provider;
// declared property setter: -(void)setUnknownPersonViewDelegate:(id)delegate;
-(void)setWillTweetLocationCallback:(id)tweetLocationCallback;
-(id)shareLocationSnapshotImage;
-(id)shareLocationURL;
-(id)shareMessageBody;
-(BOOL)shareMessageBodyIsHTML;
-(id)shareMessageSubject;
// declared property getter: -(BOOL)shouldAlignPersonHeaderViewToImage;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)styleProvider;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(void)tellHelperToShow:(BOOL)show actionWithSelector:(SEL)selector localizableTitle:(id)title property:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(void)tellHelperToShow:(BOOL)show actionWithSelector:(SEL)selector target:(id)target localizableTitle:(id)title property:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
// declared property getter: -(id)unknownPersonViewDelegate;
-(void)updateNavigationButtons;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(id)willTweetLocationCallback;
@end

@interface ABUnknownPersonViewController (ABPersonViewControllerActionsAdditions)
-(void)addActionWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(void)addActionWithTitle:(id)title target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(BOOL)hasActionWithTitle:(id)title target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;
-(id)newActionButton;
-(void)removeActionWithSelector:(SEL)selector target:(id)target forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(void)setActionShouldPickHighlightedItem:(BOOL)pickHighlightedItem;
@end

@interface ABUnknownPersonViewController (ABCustomAppearanceProvider)
-(void)setCustomAppearanceProvider:(id)provider;
@end

