//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface TNDRFacebookImagePickerController : UINavigationController
{
    _Bool _isPickingForMainPhoto;
    id _photoPickerDelegate;
}

@property(nonatomic) _Bool isPickingForMainPhoto; // @synthesize isPickingForMainPhoto=_isPickingForMainPhoto;
@property(nonatomic) __weak id photoPickerDelegate; // @synthesize photoPickerDelegate=_photoPickerDelegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupOriginalNavigationBarBackButtonAppearance;
- (void)viewDidLoad;

@end

