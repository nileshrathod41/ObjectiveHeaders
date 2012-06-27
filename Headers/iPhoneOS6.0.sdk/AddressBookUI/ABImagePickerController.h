/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABContentController.h"
#import "AddressBookUI-Structs.h"
#import "UIModalViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "ABMultipleSourceImagePickerDelegate.h"

@class NSArray, UIImagePickerController, NSDictionary, CAKeyframeAnimation, UIPopoverController;
@protocol ABPersonImageDataDelegate;

@interface ABImagePickerController : ABContentController <UIModalViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, ABMultipleSourceImagePickerDelegate> {
	BOOL _hasExistingPhoto;
	BOOL _allowsEditingExistingPhoto;
	BOOL _canChoosePhoto;
	BOOL _canChooseFromMultiplePhotos;
	BOOL _confirmingDelete;
	BOOL _applyImageChangesToAllPeople;
	UIImagePickerController* _imagePicker;
	NSArray* _people;
	NSArray* _writablePeople;
	NSDictionary* _animationContextDictionary;
	CAKeyframeAnimation* _bounceAnimation;
	UIPopoverController* _popoverPresenter;
	BOOL _editingImage;
	id<ABPersonImageDataDelegate> _imageDataDelegate;
}
@property(assign, nonatomic) id<ABPersonImageDataDelegate> imageDataDelegate;	// @synthesize=_imageDataDelegate
-(id)initWithContentControllerDelegate:(id)contentControllerDelegate addressBook:(void*)book;
-(id)_createImagePicker;
-(id)_createImagePickerForEditingImageData:(id)editingImageData shouldSaveFullSize:(BOOL)size cropRect:(CGRect)rect;
-(id)_formatStringForSource:(void*)source withSuffix:(BOOL)suffix useAbbreviatedStrings:(BOOL)strings;
-(BOOL)_hasMultipleWritablePeople;
-(id)_removePreviousSheet;
-(void)_showActionSheet:(id)sheet previousOwner:(id)owner;
-(void)_showImagePickerWithPriorConfirmation:(BOOL)priorConfirmation;
-(void)_tearDownImagePickerController;
-(id)ab_windowContentViewForView:(id)view;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)addButtonForSource:(BOOL)source suffix:(int)suffix name:(id)name indexInAllPeople:(int)allPeople toArray:(id)array;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)animationDidStopAfterDelay:(id)animation;
-(void)back:(BOOL)back save:(BOOL)save;
-(id)buttonTitlesAndIndicesForPickingPreferredPhoto;
-(void)cancelPicker;
-(void)chooseExisting;
-(void)choosePhoto;
-(id)contentView;
-(void)dealloc;
-(void)delayedPerform:(SEL)perform;
-(void)delayedPerform:(SEL)perform withObject:(id)object;
-(void)deletePhoto:(BOOL)photo;
-(void)deletePhotoNoConfirm;
-(void)doEditPhoto;
-(void)editPhoto;
-(BOOL)hasMultipleActions;
// declared property getter: -(id)imageDataDelegate;
-(void)imagePickerController:(id)controller didFinishPickingImage:(id)image editingInfo:(id)info;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)multipleSourcePicker:(id)picker didSelectPerson:(void*)person;
-(void)multipleSourcePickerDidSelectPhotoPicker:(id)multipleSourcePicker;
-(void)orderOut:(id)anOut;
-(id)popoverPresenterForViewController:(id)viewController;
-(void)releaseImagePicker;
-(void)reload;
-(void)resume;
// declared property setter: -(void)setImageDataDelegate:(id)delegate;
-(void)suspend;
-(void)takePhoto;
-(void)usePhotoFromPerson:(void*)person;
@end

