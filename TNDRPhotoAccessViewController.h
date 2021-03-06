//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TNDRActionDialogViewControllerDelegate-Protocol.h"
#import "TNDRDialogViewControllerDelegate-Protocol.h"
#import "TNDRImagePickerPhotoCropperDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, TNDRImagePickerController, TNDRImagePickerPhotoCropperViewController, TNDRNeedPhotoAccessDialogViewController, TNDRNeedPhotoAccessiOS7DialogViewController, TNDRPhotoAccessIntroDialogViewController, UITapGestureRecognizer;
@protocol TNDRPhotoAccessViewControllerDelegate;

@interface TNDRPhotoAccessViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIViewControllerPreviewingDelegate, TNDRImagePickerPhotoCropperDelegate, TNDRDialogViewControllerDelegate, TNDRActionDialogViewControllerDelegate, UIViewControllerTransitioningDelegate>
{
    _Bool _hasRequestedCamerRollPhoto;
    _Bool _waitingForUserAuthorization;
    id <TNDRPhotoAccessViewControllerDelegate> _photoAccessDelegate;
    TNDRImagePickerController *_imagePicker;
    TNDRImagePickerPhotoCropperViewController *_photoCropper;
    TNDRPhotoAccessIntroDialogViewController *_photoAccessIntroDialogViewController;
    TNDRNeedPhotoAccessDialogViewController *_needPhotoAccessDialogViewController;
    TNDRNeedPhotoAccessiOS7DialogViewController *_needPhotoAccessiOS7DialogViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController *_imagePickerController;
}

@property(retain, nonatomic) UIViewController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool waitingForUserAuthorization; // @synthesize waitingForUserAuthorization=_waitingForUserAuthorization;
@property(nonatomic) _Bool hasRequestedCamerRollPhoto; // @synthesize hasRequestedCamerRollPhoto=_hasRequestedCamerRollPhoto;
@property(retain, nonatomic) TNDRNeedPhotoAccessiOS7DialogViewController *needPhotoAccessiOS7DialogViewController; // @synthesize needPhotoAccessiOS7DialogViewController=_needPhotoAccessiOS7DialogViewController;
@property(retain, nonatomic) TNDRNeedPhotoAccessDialogViewController *needPhotoAccessDialogViewController; // @synthesize needPhotoAccessDialogViewController=_needPhotoAccessDialogViewController;
@property(retain, nonatomic) TNDRPhotoAccessIntroDialogViewController *photoAccessIntroDialogViewController; // @synthesize photoAccessIntroDialogViewController=_photoAccessIntroDialogViewController;
@property(retain, nonatomic) TNDRImagePickerPhotoCropperViewController *photoCropper; // @synthesize photoCropper=_photoCropper;
@property(retain, nonatomic) TNDRImagePickerController *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(nonatomic) __weak id <TNDRPhotoAccessViewControllerDelegate> photoAccessDelegate; // @synthesize photoAccessDelegate=_photoAccessDelegate;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)photoCropperDidCancel:(id)arg1;
- (void)photoCropper:(id)arg1 didCropPhoto:(id)arg2;
- (void)navigateToPhotoCropper:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)dialogViewControllerDidTapCancelButton:(id)arg1;
- (void)dialogViewControllerDidTapActionButton:(id)arg1;
- (void)showImagePicker;
- (void)showNeedPhotoAccessDialogToUser;
- (void)requestCameraRollPhoto;
- (void)setupOriginalNavigationBarBackButtonAppearance;
- (void)setupImagePicker;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

