/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ABModel, NSArray;
@protocol ABStyleProvider, ABPeoplePickerNavigationControllerDelegate;

@interface ABPeoplePickerNavigationController : XXUnknownSuperclass {
@private
	void* _addressBook;
	id _peoplePickerDelegate;
	ABModel* _model;
	int _behavior;
	CFArrayRef _displayedProperties;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;
	NSArray* _defaultToolbarItems;
	id _insertionValue;
	int _insertionProperty;
	struct {
		unsigned allowsEditing : 1;
		unsigned allowsCancel : 1;
		unsigned allowsActions : 1;
		unsigned allowsConferencing : 1;
		unsigned allowsSounds : 1;
		unsigned allowsVibrations : 1;
		unsigned hidesSearchableSources : 1;
	} _flags;
	BOOL _navigationBarIsAnimating;
}
@property(retain, nonatomic, setter=ab_setDefaultToolbarItems:) NSArray* ab_defaultToolbarItems;	// @synthesize=_defaultToolbarItems
@property(assign, nonatomic) void* addressBook;
@property(copy, nonatomic) NSArray* displayedProperties;
@property(assign, nonatomic) id<ABPeoplePickerNavigationControllerDelegate> peoplePickerDelegate;	// @synthesize=_peoplePickerDelegate
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// @synthesize=_reserved4
+(void)notifyPreferencesChanged;
-(id)init;
-(id)initAsAddressBook:(BOOL)book;
-(id)initAsAddressBook:(BOOL)book withAddressBook:(void*)addressBook;
-(id)initAsAddressBook:(BOOL)book withAddressBook:(void*)addressBook withStyle:(int)style;
-(id)initAsAddressBook:(BOOL)book withStyle:(int)style;
-(id)initWithAddressBook:(void*)addressBook;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)initWithStyle:(int)style;
-(void)__loadDatabaseAtDirectory:(id)directory;
-(BOOL)_allowsAutorotation;
-(void)_applicationEnteringForeground;
-(void)_performCancel:(id)cancel;
-(void)_setPopoverController:(id)controller;
-(id)_setupAccountsAndGroupsController;
-(BOOL)_shouldPreventCancelButtonsFromShowing;
-(void)_updateViewControllerNavigationButtons;
-(void)ab_changeViewControllerToolbarItemsIfEmpty:(id)empty animated:(BOOL)animated;
-(void)ab_changeViewControllersToolbarItemsIfEmpty:(BOOL)empty;
// declared property getter: -(id)ab_defaultToolbarItems;
-(BOOL)ab_ownsViewControllerToolbarItems:(id)items;
-(void)ab_restoreViewControllerToolbarItems:(id)items animated:(BOOL)animated;
// declared property setter: -(void)ab_setDefaultToolbarItems:(id)items;
-(void)ab_setDefaultToolbarItems:(id)items animated:(BOOL)animated;
// declared property getter: -(void*)addressBook;
-(BOOL)allowsActions;
-(BOOL)allowsCancel;
-(BOOL)allowsCardEditing;
-(BOOL)allowsConferencing;
-(BOOL)allowsShowingPersonsCards;
-(id)bannerTitle;
-(id)bannerValue;
-(int)behavior;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)coder;
// declared property getter: -(id)displayedProperties;
-(void)encodeRestorableStateWithCoder:(id)coder;
-(void)finishNavigationBarAnimation;
-(void)groupsViewControllerDidFinish:(id)groupsViewController;
-(BOOL)hidesSearchableSources;
-(int)insertionProperty;
-(id)insertionValue;
-(BOOL)isDefaultViewControllerVisible;
-(void)loadState;
-(id)membersViewController;
-(id)model;
-(void)navigationBar:(id)bar didPopItem:(id)item;
-(void)navigationBar:(id)bar didPushItem:(id)item;
-(BOOL)navigationBar:(id)bar shouldPopItem:(id)item;
-(BOOL)navigationBar:(id)bar shouldPushItem:(id)item;
-(BOOL)navigationBarIsAnimating;
-(void)notePreferencesChanged;
// declared property getter: -(id)peoplePickerDelegate;
-(void)personViewController:(id)controller requestedLinkForPerson:(void*)person;
-(BOOL)personViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)personViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier withMemberCell:(id)memberCell;
-(void)popToDefaultViewController:(BOOL)defaultViewController;
-(void)presentGroupsViewController;
-(void)presentViewController:(id)controller animated:(BOOL)animated completion:(id)completion;
-(id)promptForViewControllerType:(int)viewControllerType;
-(void)pushViewController:(id)controller animated:(BOOL)animated;
-(void)removeChildViewController:(id)controller;
-(void)removeChildViewController:(id)controller notifyDidMove:(BOOL)notify;
-(void)safePopToRootViewControllerAnimated:(BOOL)rootViewControllerAnimated;
-(void)saveState;
-(void)searchCurrentContactsGroupUsingQuery:(id)query animated:(BOOL)animated;
// declared property setter: -(void)setAddressBook:(void*)book;
-(void)setAllowsCancel:(BOOL)cancel;
-(void)setAllowsCardEditing:(BOOL)editing;
-(void)setAllowsConferencing:(BOOL)conferencing;
-(void)setAllowsSounds:(BOOL)sounds;
-(void)setAllowsVibrations:(BOOL)vibrations;
-(void)setBannerTitle:(id)title value:(id)value;
-(void)setBehavior:(int)behavior;
-(void)setContentSizeForViewInPopover:(CGSize)popover;
// declared property setter: -(void)setDisplayedProperties:(id)properties;
-(void)setHidesSearchableSources:(BOOL)sources;
-(void)setInsertionValue:(id)value property:(int)property;
-(void)setParentViewController:(id)controller;
// declared property setter: -(void)setPeoplePickerDelegate:(id)delegate;
-(void)setPrompt:(id)prompt;
-(void)setPrompt:(id)prompt forViewControllerType:(int)viewControllerType;
-(void)setSearchCompletionDelegate:(id)delegate;
// declared property setter: -(void)setStyleProvider:(id)provider;
-(void)setupAsMePicker;
-(void)setupInitialStackAndLoadState:(BOOL)state;
-(BOOL)shouldContinueAfterSelectingPerson:(void*)person cell:(id)cell;
-(BOOL)shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier withMemberCell:(id)memberCell;
-(void)showCardForPerson:(void*)person;
-(BOOL)showCardForPerson:(void*)person withMemberCell:(id)memberCell animate:(BOOL)animate;
-(BOOL)showCardForPerson:(void*)person withMemberCell:(id)memberCell animate:(BOOL)animate forceDisableEditing:(BOOL)editing;
-(void)showMembersOfContactsFilter:(id)contactsFilter;
-(void)showMembersOfContactsFilter:(id)contactsFilter animate:(BOOL)animate loadState:(BOOL)state;
-(void)showUnifiedCardForPerson:(void*)person;
// declared property getter: -(id)styleProvider;
-(void)unknownPersonViewController:(id)controller didResolveToPerson:(void*)person;
-(BOOL)unknownPersonViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier withMemberCell:(id)memberCell;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)willShowViewController:(id)controller animated:(BOOL)animated;
@end

