//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TNDRMyProfilePhotoData, TNDRPhotoAccessViewController;

@protocol TNDRPhotoAccessViewControllerDelegate <NSObject>
- (void)photoAccessManagerCancel:(TNDRPhotoAccessViewController *)arg1;
- (void)photoAccessManager:(TNDRPhotoAccessViewController *)arg1 selectedPhotoData:(TNDRMyProfilePhotoData *)arg2;
@end

