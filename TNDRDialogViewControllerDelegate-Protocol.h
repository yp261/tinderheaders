//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TNDRDialogViewController;

@protocol TNDRDialogViewControllerDelegate <NSObject>

@optional
- (void)dialogViewControllerBackgroundTapped:(TNDRDialogViewController *)arg1;
- (void)dialogViewControllerRequestsCancel:(TNDRDialogViewController *)arg1;
- (void)dialogViewControllerRequestsDismissal:(TNDRDialogViewController *)arg1 completion:(void (^)(_Bool))arg2;
@end

