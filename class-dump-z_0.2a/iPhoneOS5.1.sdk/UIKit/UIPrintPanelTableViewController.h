/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"
#import "UIPrintPanelTableViewController.h"

@class UIButton, UIPrintPanelViewController;

__attribute__((visibility("hidden")))
@interface UIPrintPanelTableViewController : UITableViewController {
@private
	UIPrintPanelViewController* _printPanelViewController;
	UIButton* _printButton;
	int _rangeRow;
	int _copiesRow;
	int _duplexRow;
	int _paperRow;
	BOOL _contactingPrinter;
}
-(id)initWithPrintPanelViewController:(id)printPanelViewController;
-(void)clearPrintPanelViewController;
-(void)dealloc;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)setShowContactingPrinter:(BOOL)printer;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)showCancelButton;
-(void)showContacting;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)updateCopies:(id)copies;
-(void)updateDuplex:(id)duplex;
-(void)updatePageRange:(NSRange)range;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)view;
@end

@interface UIPrintPanelTableViewController (Internal)
-(void)_setupPrintButtons;
-(void)_update:(BOOL)update;
-(void)_updateSize;
@end

