/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EventKitUI-Structs.h"

@class EKEventOccurrenceListItem;

@interface CalendarOccurrenceCell : XXUnknownSuperclass {
	EKEventOccurrenceListItem* _view;
}
-(id)init;
-(id)initWithEvent:(id)event showColors:(BOOL)colors;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(id)_scriptingInfo;
-(void)dealloc;
-(unsigned)designator;
-(unsigned)isAllDay;
-(unsigned)isCancelled;
-(void)setIsAllDay:(BOOL)day;
-(void)setIsEndDate:(BOOL)date;
-(void)setStartDate:(XXStruct_lQVxyC)date;
-(BOOL)showDisclosure;
-(void)updateWithEvent:(id)event showColors:(BOOL)colors;
@end

