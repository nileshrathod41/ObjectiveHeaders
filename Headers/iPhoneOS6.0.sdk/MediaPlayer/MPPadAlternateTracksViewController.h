/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "MPAbstractAlternateTracksViewController.h"

@class UITableView;

@interface MPPadAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
@private
	UITableView* _tableView;
}
-(id)init;
-(id)initWithPlayer:(id)player;
-(void)dealloc;
-(void)loadView;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)reloadData;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
@end

