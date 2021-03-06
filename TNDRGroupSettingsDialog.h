//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

@class NSNotificationCenter, NSString, TNDRAnalyticsTracker, TNDRCoreDataService, TNDRCurrentUser, TNDRDataManager, TNDRHTTPClient, TNDRLeaveDisbandGroupDialogVC, TNDRURLManager;

@interface TNDRGroupSettingsDialog : TNDRDialogViewController
{
    // Error parsing type: , name: dataService.storage
    // Error parsing type: , name: currentUser
    // Error parsing type: , name: urlManager
    // Error parsing type: , name: httpClient
    // Error parsing type: , name: analyticsTracker
    // Error parsing type: , name: notificationCenter
    // Error parsing type: , name: dataManager
    // Error parsing type: , name: leaveGroupDialog
    // Error parsing type: , name: titleText
}

+ (id)viewControllerNavigationKey;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dialogViewControllerDidTapCancelButton:(id)arg1;
- (void)dialogViewControllerDidTapActionButton:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)transitionTo:(id)arg1 viewController:(id)arg2 optionsDict:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)didPressCancelWithButton:(id)arg1;
- (void)didPressActionWithButton:(id)arg1;
- (void)setupFooter;
- (void)setupHeader;
- (void)viewDidLoad;
@property(nonatomic, readonly) NSString *titleText; // @synthesize titleText;
@property(nonatomic, retain) TNDRLeaveDisbandGroupDialogVC *leaveGroupDialog; // @synthesize leaveGroupDialog;
@property(nonatomic, readonly) TNDRDataManager *dataManager; // @synthesize dataManager;
@property(nonatomic, readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter;
@property(nonatomic, readonly) TNDRAnalyticsTracker *analyticsTracker; // @synthesize analyticsTracker;
@property(nonatomic, readonly) TNDRHTTPClient *httpClient; // @synthesize httpClient;
@property(nonatomic, readonly) TNDRURLManager *urlManager; // @synthesize urlManager;
@property(nonatomic, readonly) TNDRCurrentUser *currentUser; // @synthesize currentUser;
@property(nonatomic, retain) TNDRCoreDataService *dataService;

@end

