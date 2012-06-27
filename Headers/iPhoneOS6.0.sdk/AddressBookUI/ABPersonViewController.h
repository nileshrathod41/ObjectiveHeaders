/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AFContextProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AddressBookUI-Structs.h"
#import "UIViewControllerRestoration.h"

@class ABPersonViewControllerHelper, ABPersonTableViewActionsDelegate, NSTimer, AFContextManager, ABPersonTableViewSharingDelegate, NSString, ABPersonTableViewDataSource, NSArray, UIFont, UIImage, UIView;
@protocol ABPersonViewControllerDelegate, ABStyleProvider, ABPersonEditDelegate;

@interface ABPersonViewController : XXUnknownSuperclass <AFContextProvider, UIViewControllerRestoration> {
@private
	id<ABPersonViewControllerDelegate> _personViewDelegate;
	id _helper;
	id _internal;
	BOOL _internal2;
	NSTimer* _editAnimationTimer;
	ABPersonTableViewDataSource* _dataSource;
	ABPersonTableViewActionsDelegate* _actionsDelegate;
	ABPersonTableViewSharingDelegate* _sharingDelegate;
}
@property(readonly, assign, nonatomic) ABPersonTableViewActionsDelegate* actionsDelegate;	// @synthesize=_actionsDelegate
@property(assign, nonatomic) void* addressBook;
@property(assign, nonatomic) BOOL allowsActions;
@property(assign, nonatomic) BOOL allowsAddToFavorites;
@property(assign, nonatomic) BOOL allowsCancel;
@property(assign, nonatomic) BOOL allowsConferencing;
@property(assign, nonatomic) BOOL allowsDeletion;
@property(assign, nonatomic) BOOL allowsEditing;
@property(assign, nonatomic) BOOL allowsSettingAsPreferredCardForName;
@property(assign, nonatomic) BOOL allowsSharing;
@property(assign, nonatomic) BOOL allowsSounds;
@property(assign, nonatomic) BOOL allowsVibrations;
@property(assign, nonatomic) BOOL appearsInLinkingPeoplePicker;
@property(copy, nonatomic) NSString* attribution;
@property(assign, nonatomic) BOOL badgeEmailPropertiesForMailVIP;
@property(readonly, assign, nonatomic) AFContextManager* contextManager;
@property(retain, nonatomic) UIView* customFooterView;
@property(retain, nonatomic) UIView* customHeaderView;
@property(retain, nonatomic) UIView* customMessageView;
@property(readonly, assign, nonatomic) ABPersonTableViewDataSource* dataSource;	// @synthesize=_dataSource
@property(assign, nonatomic) void* displayedPerson;
@property(copy, nonatomic) NSArray* displayedProperties;
@property(assign, nonatomic) id<ABPersonEditDelegate> editDelegate;
@property(readonly, assign, nonatomic) ABPersonViewControllerHelper* helper;
@property(copy, nonatomic) NSString* message;
@property(copy, nonatomic) NSString* messageDetail;
@property(retain, nonatomic) UIFont* messageDetailFont;
@property(retain, nonatomic) UIFont* messageFont;
@property(assign, nonatomic) BOOL observesExternalChanges;
@property(retain, nonatomic) UIView* personHeaderView;
@property(assign, nonatomic) id<ABPersonViewControllerDelegate> personViewDelegate;
@property(retain, nonatomic) UIImage* shareLocationSnapshotImage;
@property(copy, nonatomic) NSString* shareLocationURL;
@property(copy, nonatomic) NSString* shareMessageBody;
@property(assign, nonatomic) BOOL shareMessageBodyIsHTML;
@property(copy, nonatomic) NSString* shareMessageSubject;
@property(readonly, assign, nonatomic) ABPersonTableViewSharingDelegate* sharingDelegate;	// @synthesize=_sharingDelegate
@property(assign, nonatomic) BOOL shouldAlignPersonHeaderViewToImage;
@property(assign, nonatomic) BOOL shouldShowLinkedPeople;
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;
@property(readonly, assign, nonatomic) UIView* tableHeaderView;
@property(copy, nonatomic) id willTweetLocationCallback;
@property(copy, nonatomic) id willWeiboLocationCallback;
+(id)viewControllerWithRestorationIdentifierPath:(id)restorationIdentifierPath coder:(id)coder;
-(id)init;
-(id)initWithAddressBook:(void*)addressBook;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)initWithNibName:(id)nibName bundle:(id)bundle addressBook:(void*)book;
-(id)initWithNibName:(id)nibName bundle:(id)bundle addressBook:(void*)book style:(int)style;
-(id)initWithStyle:(int)style;
-(BOOL)_allowsAutorotation;
-(void)_editAnimationTimerFired:(id)fired;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(void)_handleLocalChange:(CFDictionaryRef)change;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(void)_removeContextProviderOnMainThread;
-(BOOL)_updateAllDataForExternalChange;
-(BOOL)_updatePeopleDataForExternalChange;
-(void)_updateTableDataForExternalChange;
-(int)abViewControllerType;
-(float)ab_heightToFitForViewInPopoverView;
// declared property getter: -(id)actionsDelegate;
-(void)addActionWithTitle:(id)title content:(id)content target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(void)addActionWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(void)addActionWithTitle:(id)title target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
// declared property getter: -(void*)addressBook;
-(void)addressBookChangedLocally:(CFDictionaryRef)locally;
-(BOOL)allowContextProvider:(id)provider;
// declared property getter: -(BOOL)allowsActions;
// declared property getter: -(BOOL)allowsAddToFavorites;
// declared property getter: -(BOOL)allowsCancel;
// declared property getter: -(BOOL)allowsConferencing;
// declared property getter: -(BOOL)allowsDeletion;
// declared property getter: -(BOOL)allowsEditing;
// declared property getter: -(BOOL)allowsSettingAsPreferredCardForName;
// declared property getter: -(BOOL)allowsSharing;
// declared property getter: -(BOOL)allowsSounds;
// declared property getter: -(BOOL)allowsVibrations;
// declared property getter: -(BOOL)appearsInLinkingPeoplePicker;
-(void)applicationDidResume;
-(void)applicationWillSuspend;
-(void)applicationWillTerminate:(id)application;
// declared property getter: -(id)attribution;
// declared property getter: -(BOOL)badgeEmailPropertiesForMailVIP;
-(BOOL)canHandleSnapbackIdentifier:(id)identifier animated:(BOOL)animated;
-(void)cancelEditing:(BOOL)editing;
// declared property getter: -(id)contextManager;
// declared property getter: -(id)customFooterView;
// declared property getter: -(id)customHeaderView;
// declared property getter: -(id)customMessageView;
// declared property getter: -(id)dataSource;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)coder;
-(void)dismissModalViewControllerAnimated:(BOOL)animated;
// declared property getter: -(void*)displayedPerson;
// declared property getter: -(id)displayedProperties;
-(void)editCancel:(id)cancel;
// declared property getter: -(id)editDelegate;
-(void)encodeRestorableStateWithCoder:(id)coder;
-(void)forceUseLinkedInfos:(id)infos currentIndexInLinkedInfos:(int)linkedInfos;
-(id)getCurrentContext;
-(BOOL)handleExternalChange;
// declared property getter: -(id)helper;
-(void)helper:(id)helper didToggleEditingWhileInViewMode:(BOOL)viewMode;
-(void)helperDidReloadAfterChangingDisplayedPeople:(id)helper;
-(BOOL)isDelayingChangeNotifications;
-(BOOL)isReadonly;
-(void)loadView;
-(BOOL)makeFirstFieldBecomeFirstResponder;
-(BOOL)manuallyLinkPerson:(void*)person;
// declared property getter: -(id)message;
// declared property getter: -(id)messageDetail;
// declared property getter: -(id)messageDetailFont;
// declared property getter: -(id)messageFont;
-(id)newActionButton;
// declared property getter: -(BOOL)observesExternalChanges;
-(void)peoplePickerLinkButtonTapped;
// declared property getter: -(id)personHeaderView;
// declared property getter: -(id)personViewDelegate;
-(void)pickerCancel:(id)cancel;
-(id)prepareViewWithPerson:(void*)person;
-(void)removeActionWithSelector:(SEL)selector target:(id)target forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;
-(void)saveChanges;
-(void)setActionShouldPickHighlightedItem:(BOOL)pickHighlightedItem;
// declared property setter: -(void)setAddressBook:(void*)book;
// declared property setter: -(void)setAllowsActions:(BOOL)actions;
// declared property setter: -(void)setAllowsAddToFavorites:(BOOL)favorites;
// declared property setter: -(void)setAllowsCancel:(BOOL)cancel;
// declared property setter: -(void)setAllowsConferencing:(BOOL)conferencing;
// declared property setter: -(void)setAllowsDeletion:(BOOL)deletion;
// declared property setter: -(void)setAllowsEditing:(BOOL)editing;
// declared property setter: -(void)setAllowsSettingAsPreferredCardForName:(BOOL)name;
// declared property setter: -(void)setAllowsSharing:(BOOL)sharing;
// declared property setter: -(void)setAllowsSounds:(BOOL)sounds;
// declared property setter: -(void)setAllowsVibrations:(BOOL)vibrations;
// declared property setter: -(void)setAppearsInLinkingPeoplePicker:(BOOL)linkingPeoplePicker;
// declared property setter: -(void)setAttribution:(id)attribution;
-(void)setAttribution:(id)attribution target:(id)target selector:(SEL)selector;
// declared property setter: -(void)setBadgeEmailPropertiesForMailVIP:(BOOL)mailVIP;
-(void)setCardContentProvider:(id)provider;
-(void)setCustomAppearanceProvider:(id)provider;
// declared property setter: -(void)setCustomFooterView:(id)view;
// declared property setter: -(void)setCustomHeaderView:(id)view;
// declared property setter: -(void)setCustomMessageView:(id)view;
// declared property setter: -(void)setDisplayedPerson:(void*)person;
// declared property setter: -(void)setDisplayedProperties:(id)properties;
// declared property setter: -(void)setEditDelegate:(id)delegate;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)setEditing:(BOOL)editing saveChanges:(BOOL)changes animated:(BOOL)animated;
-(void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier;
-(void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier important:(BOOL)important;
-(void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void*)person;
-(void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void*)person important:(BOOL)important;
// declared property setter: -(void)setMessage:(id)message;
// declared property setter: -(void)setMessageDetail:(id)detail;
// declared property setter: -(void)setMessageDetailFont:(id)font;
// declared property setter: -(void)setMessageFont:(id)font;
// declared property setter: -(void)setObservesExternalChanges:(BOOL)changes;
// declared property setter: -(void)setPersonHeaderView:(id)view;
// declared property setter: -(void)setPersonViewDelegate:(id)delegate;
// declared property setter: -(void)setShareLocationSnapshotImage:(id)image;
// declared property setter: -(void)setShareLocationURL:(id)url;
// declared property setter: -(void)setShareMessageBody:(id)body;
// declared property setter: -(void)setShareMessageBodyIsHTML:(BOOL)html;
// declared property setter: -(void)setShareMessageSubject:(id)subject;
// declared property setter: -(void)setShouldAlignPersonHeaderViewToImage:(BOOL)alignPersonHeaderViewToImage;
// declared property setter: -(void)setShouldShowLinkedPeople:(BOOL)showLinkedPeople;
-(void)setShouldShowLinkingUIOnCard:(BOOL)showLinkingUIOnCard;
// declared property setter: -(void)setStyleProvider:(id)provider;
// declared property setter: -(void)setWillTweetLocationCallback:(id)tweetLocationCallback;
// declared property setter: -(void)setWillWeiboLocationCallback:(id)weiboLocationCallback;
-(void)shareContactByEmail:(id)email;
// declared property getter: -(id)shareLocationSnapshotImage;
// declared property getter: -(id)shareLocationURL;
// declared property getter: -(id)shareMessageBody;
// declared property getter: -(BOOL)shareMessageBodyIsHTML;
// declared property getter: -(id)shareMessageSubject;
// declared property getter: -(id)sharingDelegate;
// declared property getter: -(BOOL)shouldAlignPersonHeaderViewToImage;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
// declared property getter: -(BOOL)shouldShowLinkedPeople;
-(BOOL)shouldShowLinkingUIOnCard;
-(void)startDelayingChangeNotifications;
-(void)stopDelayingChangeNotificationsAndDeliverNow:(BOOL)now;
// declared property getter: -(id)styleProvider;
// declared property getter: -(id)tableHeaderView;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(void)updateNavigationButtons;
-(void)updateNavigationButtonsAnimated:(BOOL)animated;
-(void)updateRecord;
-(void)updateTitle;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
// declared property getter: -(id)willTweetLocationCallback;
// declared property getter: -(id)willWeiboLocationCallback;
@end

