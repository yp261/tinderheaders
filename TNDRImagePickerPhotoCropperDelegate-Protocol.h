//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TNDRImagePickerPhotoCropperViewController, UIImage;

@protocol TNDRImagePickerPhotoCropperDelegate <NSObject>
- (void)photoCropperDidCancel:(TNDRImagePickerPhotoCropperViewController *)arg1;
- (void)photoCropper:(TNDRImagePickerPhotoCropperViewController *)arg1 didCropPhoto:(UIImage *)arg2;
@end
