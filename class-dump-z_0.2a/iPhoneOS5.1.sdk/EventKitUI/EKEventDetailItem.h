/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKEditItemViewControllerDelegate.h"
#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EKEventStore, UIViewController, EKEvent;
@protocol EKEventDetailItemDelegate, EKEditItemViewControllerProtocol;

__attribute__((visibility("hidden")))
@interface EKEventDetailItem : XXUnknownSuperclass <EKEditItemViewControllerDelegate> {
@private
	EKEventStore* _store;
	EKEvent* _event;
	id<EKEventDetailItemDelegate> _delegate;
	UIViewController<EKEditItemViewControllerProtocol>* _viewController;
	BOOL _allowsEditing;
	int _cellPosition;
}
@property(assign, nonatomic) BOOL allowsEditing;	// @synthesize=_allowsEditing
@property(assign, nonatomic) int cellPosition;	// @synthesize=_cellPosition
@property(assign, nonatomic) id<EKEventDetailItemDelegate> delegate;	// @synthesize=_delegate
// declared property getter: -(BOOL)allowsEditing;
-(id)cellForSubitemAtIndex:(int)index;
// declared property getter: -(int)cellPosition;
-(BOOL)configureWithCalendar:(id)calendar preview:(BOOL)preview;
-(void)dealloc;
-(float)defaultCellHeightForSubitemAtIndex:(int)index forWidth:(float)width;
// declared property getter: -(id)delegate;
-(id)detailViewControllerWithFrame:(CGRect)frame forSubitemAtIndex:(int)index;
-(void)editItemViewController:(id)controller didCompleteWithAction:(int)action;
-(BOOL)editItemViewControllerCommit:(id)commit;
-(void)eventViewController:(id)controller didSelectSubitem:(int)subitem;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned)index;
-(void)layoutCellsForWidth:(float)width position:(int)position;
-(void)notifyDidEndEditing;
-(void)notifyDidStartEditing;
-(void)notifySubitemDidCommit:(int)notifySubitem;
-(int)numberOfSubitems;
-(void)reset;
-(BOOL)saveAndDismissWithForce:(BOOL)force;
// declared property setter: -(void)setAllowsEditing:(BOOL)editing;
// declared property setter: -(void)setCellPosition:(int)position;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setEvent:(id)event store:(id)store;
@end

