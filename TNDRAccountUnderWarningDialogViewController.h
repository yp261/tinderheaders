//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

@class TNDRAnalyticsTracker, TNDRCurrentUser, TNDRNotificationWindow, TNDRURLManager;

@interface TNDRAccountUnderWarningDialogViewController : TNDRDialogViewController
{
    // Error parsing type: , name: urlManager
    // Error parsing type: , name: analyticsTracker
    // Error parsing type: , name: currentUser
    // Error parsing type: , name: notificationWindow
    // Error parsing type: , name: warningType
    // Error parsing type: , name: didSendAnalyticsForCurrentSession
}

+ (id)viewControllerNavigationKey;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)preferredDialogViewControllerContainerWidth;
- (void)setupAccountWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithWarningType:(long long)arg1;
@property(nonatomic) _Bool didSendAnalyticsForCurrentSession; // @synthesize didSendAnalyticsForCurrentSession;
@property(nonatomic, readonly) long long warningType; // @synthesize warningType;
@property(nonatomic, readonly) TNDRNotificationWindow *notificationWindow; // @synthesize notificationWindow;
@property(nonatomic, readonly) TNDRCurrentUser *currentUser; // @synthesize currentUser;
@property(nonatomic, readonly) TNDRAnalyticsTracker *analyticsTracker; // @synthesize analyticsTracker;
@property(nonatomic, readonly) TNDRURLManager *urlManager; // @synthesize urlManager;

@end

