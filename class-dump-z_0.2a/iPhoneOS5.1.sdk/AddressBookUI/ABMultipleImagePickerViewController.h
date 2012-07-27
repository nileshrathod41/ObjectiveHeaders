/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;
@protocol ABMultipleSourceImagePickerDelegate;

@interface ABMultipleImagePickerViewController : XXUnknownSuperclass {
	NSMutableArray* _imageCellData;
	unsigned _selectedImageIndex;
	id<ABMultipleSourceImagePickerDelegate> _delegate;
}
@property(assign, nonatomic) id<ABMultipleSourceImagePickerDelegate> delegate;	// @synthesize=_delegate
-(id)initWithStyle:(int)style;
-(void)addImageData:(id)data title:(id)title isSelectedImage:(BOOL)image person:(void*)person;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(int)numberOfSectionsInTableView:(id)tableView;
// declared property setter: -(void)setDelegate:(id)delegate;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)viewDidLoad;
@end

