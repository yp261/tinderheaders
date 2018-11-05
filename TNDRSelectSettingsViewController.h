//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

@class NSNotificationCenter, NSString, TNDRAnalyticsTracker, TNDRHTTPClient, TNDRSelectSettingsViewModel, TNDRURLManager, UIView, _TtC6Tinder20NominationButtonView;

@interface TNDRSelectSettingsViewController : TNDRDialogViewController
{
    // Error parsing type: , name: httpClient
    // Error parsing type: , name: notificationCenter
    // Error parsing type: , name: analyticsTracker
    // Error parsing type: , name: urlManager
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: nominationView.storage
}

+ (id)viewControllerNavigationKey;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)refreshToken;
- (void)requestTokenIfNeeded;
@property(nonatomic, readonly) NSString *shareText;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)openShareSheet;
- (_Bool)shareViaSMS;
- (void)didTapNominationButton;
- (void)presentErrorView;
- (void)requestDismissal;
- (double)preferredDialogViewControllerContainerWidth;
- (void)hideNominationViewWithAnimated:(_Bool)arg1;
- (void)showNominationViewWithAnimated:(_Bool)arg1;
- (void)setupNominationView;
- (void)setupFooter;
- (void)setupHeader;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewModel:(id)arg1;
@property(nonatomic, retain) _TtC6Tinder20NominationButtonView *nominationView;
@property(nonatomic, retain) UIView *backgroundOverlay;
@property(nonatomic, retain) TNDRSelectSettingsViewModel *viewModel; // @synthesize viewModel;
@property(nonatomic, readonly) TNDRURLManager *urlManager; // @synthesize urlManager;
@property(nonatomic, readonly) TNDRAnalyticsTracker *analyticsTracker; // @synthesize analyticsTracker;
@property(nonatomic, readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter;
@property(nonatomic, readonly) TNDRHTTPClient *httpClient; // @synthesize httpClient;

@end

