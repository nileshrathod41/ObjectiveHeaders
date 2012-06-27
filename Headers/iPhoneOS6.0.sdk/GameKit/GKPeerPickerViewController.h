/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, UITableView, GKContentView, NSTimer, NSMutableArray, NSString, GKSession;

@interface GKPeerPickerViewController : XXUnknownSuperclass {
	id _delegate;
	NSMutableDictionary* _sessionMap;
	GKContentView* _btView;
	GKContentView* _listView;
	GKContentView* _statusView;
	GKContentView* _inviteView;
	GKContentView* _currentView;
	GKContentView* _connectTypeView;
	GKContentView* _noPeersView;
	UITableView* _peerTableView;
	unsigned _connectionTypesMask;
	NSString* _currentConnectionTypeKey;
	NSMutableArray* _menuQueue;
	BOOL _animating;
	BOOL _alertPresented;
	int _state;
	int _pendingState;
	BOOL _updating;
	NSTimer* _invitationWaitTimer;
	int _bluetoothStatus;
	NSString* _searchingForServicesString;
	NSMutableArray* _peers;
	NSString* _pendingPeer;
}
@property(assign, nonatomic) BOOL alertPresented;	// @synthesize=_alertPresented
@property(assign, nonatomic, getter=isAnimating) BOOL animating;	// @synthesize=_animating
@property(assign, nonatomic) int bluetoothStatus;	// @synthesize=_bluetoothStatus
@property(retain, nonatomic) GKContentView* btView;	// @synthesize=_btView
@property(retain, nonatomic) GKContentView* connectTypeView;	// @synthesize=_connectTypeView
@property(assign) unsigned connectionTypesMask;	// @synthesize=_connectionTypesMask
@property(assign, nonatomic) NSString* currentConnectionTypeKey;	// @synthesize=_currentConnectionTypeKey
@property(readonly, assign, nonatomic) GKSession* currentSession;	// @dynamic
@property(readonly, assign, nonatomic) GKContentView* currentView;	// @synthesize=_currentView
@property(assign) id delegate;	// @synthesize=_delegate
@property(retain, nonatomic) NSTimer* invitationWaitTimer;	// @synthesize=_invitationWaitTimer
@property(retain, nonatomic) GKContentView* inviteView;	// @synthesize=_inviteView
@property(retain, nonatomic) GKContentView* listView;	// @synthesize=_listView
@property(retain, nonatomic) NSMutableArray* menuQueue;	// @synthesize=_menuQueue
@property(retain, nonatomic) GKContentView* noPeersView;	// @synthesize=_noPeersView
@property(retain, nonatomic) UITableView* peerTableView;	// @synthesize=_peerTableView
@property(retain, nonatomic) NSMutableArray* peers;	// @synthesize=_peers
@property(assign, nonatomic) int pendingState;	// @synthesize=_pendingState
@property(copy, nonatomic) NSString* searchingForServicesString;	// @synthesize=_searchingForServicesString
@property(retain, nonatomic) NSMutableDictionary* sessionMap;	// @synthesize=_sessionMap
@property(assign, nonatomic) int state;	// @synthesize=_state
@property(retain, nonatomic) GKContentView* statusView;	// @synthesize=_statusView
@property(assign, nonatomic) BOOL updating;	// @synthesize=_updating
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// @dynamic
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)_acceptInvitation:(id)invitation;
-(void)_btPowerStateChanged:(id)changed;
-(void)_cancelButtonPressed:(id)pressed;
-(void)_changePanelAnimationDidEnd:(id)_changePanelAnimation;
-(void)_createBTViewIfNeeded;
-(void)_createConnectTypeViewIfNeeded;
-(void)_createInviteViewIfNeeded;
-(void)_createListViewIfNeeded;
-(void)_createNoPeersViewIfNeeded;
-(void)_createStatusViewIfNeeded;
-(void)_declineInvitation:(id)invitation;
-(int)_determineBluetoothStatus;
-(void)_nearbyButtonPressed:(id)pressed;
-(void)_onlineButtonPressed:(id)pressed;
-(void)_setSessionAvailabilityForState:(int)state;
-(void)_setupListView;
-(BOOL)_shouldShowConnectTypeView;
-(void)_showBluetoothErrorView:(BOOL)view;
-(void)_showConnectTypeView:(BOOL)view;
-(void)_showInviteViewWithName:(id)name animated:(BOOL)animated;
-(void)_showListView:(BOOL)view;
-(void)_showNoPeersView:(BOOL)view;
-(void)_showRequestBluetoothView:(BOOL)view;
-(void)_showStatusView:(int)view peerName:(id)name animated:(BOOL)animated;
-(void)_showView:(id)view animated:(BOOL)animated;
-(void)_sortAndUpdateTable;
-(void)_timedOutWaitingForInvitation:(id)invitation;
-(void)_turnBluetoothOn:(id)on;
-(BOOL)_updatePicker:(int)picker;
// declared property getter: -(BOOL)alertPresented;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
// declared property getter: -(int)bluetoothStatus;
// declared property getter: -(id)btView;
// declared property getter: -(id)connectTypeView;
// declared property getter: -(unsigned)connectionTypesMask;
// declared property getter: -(id)currentConnectionTypeKey;
// declared property getter: -(id)currentSession;
// declared property getter: -(id)currentView;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)didPresentAlertView:(id)view;
-(void)didReceiveMemoryWarning;
-(void)dismiss;
// declared property getter: -(id)invitationWaitTimer;
// declared property getter: -(id)inviteView;
// declared property getter: -(BOOL)isAnimating;
// declared property getter: -(BOOL)isVisible;
// declared property getter: -(id)listView;
-(void)loadInitialView;
-(void)loadView;
// declared property getter: -(id)menuQueue;
// declared property getter: -(id)noPeersView;
-(int)numberOfSectionsInTableView:(id)tableView;
// declared property getter: -(id)peerTableView;
// declared property getter: -(id)peers;
// declared property getter: -(int)pendingState;
// declared property getter: -(id)searchingForServicesString;
-(void)session:(id)session connectionWithPeerFailed:(id)peerFailed withError:(id)error;
-(void)session:(id)session didFailWithError:(id)error;
-(void)session:(id)session didReceiveConnectionRequestFromPeer:(id)peer;
-(void)session:(id)session peer:(id)peer didChangeState:(int)state;
-(void)session:(id)session peerDidBecomeBusy:(id)peer;
// declared property getter: -(id)sessionMap;
// declared property setter: -(void)setAlertPresented:(BOOL)presented;
// declared property setter: -(void)setAnimating:(BOOL)animating;
// declared property setter: -(void)setBluetoothStatus:(int)status;
// declared property setter: -(void)setBtView:(id)view;
// declared property setter: -(void)setConnectTypeView:(id)view;
// declared property setter: -(void)setConnectionTypesMask:(unsigned)mask;
// declared property setter: -(void)setCurrentConnectionTypeKey:(id)key;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setInvitationWaitTimer:(id)timer;
// declared property setter: -(void)setInviteView:(id)view;
// declared property setter: -(void)setListView:(id)view;
// declared property setter: -(void)setMenuQueue:(id)queue;
// declared property setter: -(void)setNoPeersView:(id)view;
// declared property setter: -(void)setPeerTableView:(id)view;
// declared property setter: -(void)setPeers:(id)peers;
// declared property setter: -(void)setPendingState:(int)state;
// declared property setter: -(void)setSearchingForServicesString:(id)servicesString;
// declared property setter: -(void)setSessionMap:(id)map;
// declared property setter: -(void)setState:(int)state;
// declared property setter: -(void)setStatusView:(id)view;
// declared property setter: -(void)setUpdating:(BOOL)updating;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)show;
// declared property getter: -(int)state;
// declared property getter: -(id)statusView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
// declared property getter: -(BOOL)updating;
@end
