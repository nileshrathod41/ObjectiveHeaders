/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "NSObject.h"


@protocol ABMembersControllerDelegate <NSObject>
-(BOOL)allowsShowingPersonsCards;
-(int)behavior;
-(void)membersController:(id)controller needsTitleUpdate:(id)update;
-(void)membersController:(id)controller needsTitleViewUpdate:(id)update;
-(BOOL)membersController:(id)controller shouldAllowSelectingPersonWithRecordID:(int)recordID;
-(void)membersControllerDidEndServerSearch:(id)membersController;
-(void)membersControllerWillEndSearching:(id)membersController;
-(void)membersControllerWillStartSearching:(id)membersController;
-(id)model;
-(void)personWasSelected:(void*)selected;
-(BOOL)showCardForPerson:(void*)person animate:(BOOL)animate;
-(BOOL)showCardForPerson:(void*)person withMemberCell:(id)memberCell animate:(BOOL)animate;
-(void)showInsertEditorForPerson:(void*)person animate:(BOOL)animate;
@end

