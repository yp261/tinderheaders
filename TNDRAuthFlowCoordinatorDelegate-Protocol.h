//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TNDRAuthFlowCoordinator, UIViewController;

@protocol TNDRAuthFlowCoordinatorDelegate <NSObject>
- (void)authFlowCoordinatorDidLogoutForUITests:(TNDRAuthFlowCoordinator *)arg1;
- (void)authFlowCoordinatorDidLogout:(TNDRAuthFlowCoordinator *)arg1;
- (void)authFlowCoordinatorWillLogout:(TNDRAuthFlowCoordinator *)arg1;
- (void)authFlowCoordinatorDidLogin:(TNDRAuthFlowCoordinator *)arg1;
- (void)authFlowCoordinatorWillLogin:(TNDRAuthFlowCoordinator *)arg1;

@optional
- (UIViewController *)presentingViewControllerForAuthFlowCoordinator:(TNDRAuthFlowCoordinator *)arg1;
@end

