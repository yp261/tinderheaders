//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "CrashlyticsDelegate-Protocol.h"
#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "TNDRAppServiceLevelDelegate-Protocol.h"
#import "TNDRAuthFlowCoordinatorDelegate-Protocol.h"
#import "TNDRUpdateManagerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSDate, NSString, NSURL, TNDRAppRater, TNDRAppServiceLevel, TNDRApplicationShortcutManager, TNDRAuthFlowCoordinator, TNDRCoreDataService, TNDRDataManager, TNDRDeepLinker, TNDREnvironmentHelper, TNDRErrorStateViewController, TNDRExperimentCoordinator, TNDRLeanplumTracker, TNDRLeanplumUserAttributeTracker, TNDRLocationManager, TNDRNotificationWindow, TNDRPaywallManager, TNDRProductsManager, TNDRSlidingPagedViewController, TNDRSpotifyAuthenticator, TNDRTimer, TNDRURLManager, UIViewController, UIWindow, _TtC6Tinder10AppContext, _TtC6Tinder14SessionContext, _TtC6Tinder15LeanplumService;
@protocol TNDRPerformanceTrackerProtocol;

@interface TNDRAppDelegate : UIResponder <TNDRUpdateManagerDelegate, TNDRAppServiceLevelDelegate, UNUserNotificationCenterDelegate, CrashlyticsDelegate, TNDRAuthFlowCoordinatorDelegate, UIApplicationDelegate, NSFetchedResultsControllerDelegate>
{
    _Bool _isAppResumed;
    UIViewController *_viewController;
    UIWindow *_window;
    NSDate *_appStartDate;
    _TtC6Tinder14SessionContext *_sessionContext;
    TNDRAuthFlowCoordinator *_authFlowCoordinator;
    CDUnknownBlockType _backgroundCompletionHandler;
    TNDRSlidingPagedViewController *_slidingPagedViewController;
    TNDRErrorStateViewController *_errorStateViewController;
    NSString *_shortcutSource;
    NSURL *_referralURL;
    NSDate *_activeSessionStartDate;
    NSString *_saveCurrentChatID;
}

@property(copy, nonatomic) NSString *saveCurrentChatID; // @synthesize saveCurrentChatID=_saveCurrentChatID;
@property(retain, nonatomic) NSDate *activeSessionStartDate; // @synthesize activeSessionStartDate=_activeSessionStartDate;
@property(retain, nonatomic) NSURL *referralURL; // @synthesize referralURL=_referralURL;
@property(nonatomic) _Bool isAppResumed; // @synthesize isAppResumed=_isAppResumed;
@property(copy, nonatomic) NSString *shortcutSource; // @synthesize shortcutSource=_shortcutSource;
@property(retain, nonatomic) TNDRErrorStateViewController *errorStateViewController; // @synthesize errorStateViewController=_errorStateViewController;
@property(retain, nonatomic) TNDRSlidingPagedViewController *slidingPagedViewController; // @synthesize slidingPagedViewController=_slidingPagedViewController;
@property(copy, nonatomic) CDUnknownBlockType backgroundCompletionHandler; // @synthesize backgroundCompletionHandler=_backgroundCompletionHandler;
@property(retain, nonatomic) TNDRAuthFlowCoordinator *authFlowCoordinator; // @synthesize authFlowCoordinator=_authFlowCoordinator;
@property(retain, nonatomic) _TtC6Tinder14SessionContext *sessionContext; // @synthesize sessionContext=_sessionContext;
@property(retain, nonatomic) NSDate *appStartDate; // @synthesize appStartDate=_appStartDate;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)sloth;
- (id)ds;
- (id)sd;
- (void)trackAppClosedEvent;
- (void)notifyWithPaywallBanner:(id)arg1;
- (void)restoreKeyWindow;
- (void)didUpdateUnviewedCounts;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)performNavigationForNewTopPhotoPushType;
- (void)performNavigationForSquadPushType:(id)arg1 group:(id)arg2;
- (void)performNavigationIfPossibleWithPushData:(id)arg1;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)trackPushNotificationFromData:(id)arg1;
- (void)handlePushNotificationsWithNotificationData:(id)arg1;
- (void)handlePushWithRemoteNotification:(id)arg1 fetchCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)sendPushNotificationSettingsToAPIWithDeviceToken:(id)arg1;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (id)presentingViewControllerForAuthFlowCoordinator:(id)arg1;
- (void)hideLocationAlertView;
- (void)showLocationAlertView;
- (void)didReceiveLocationServicesUnauthorizedNotification:(id)arg1;
- (void)didReceiveLocationServicesAuthorizedNotification:(id)arg1;
- (void)networkDidBecomeReachable;
- (void)removeAuthNotifications;
- (void)didReceiveShouldReauthenticateNotification:(id)arg1;
- (void)didReceiveShouldLogoutNotification:(id)arg1;
- (void)didReceiveUserLogoutNotification:(id)arg1;
- (void)registerForUserLogoutNotification;
- (void)authFlowCoordinatorDidLogoutForUITests:(id)arg1;
- (void)authFlowCoordinatorDidLogout:(id)arg1;
- (void)authFlowCoordinatorWillLogout:(id)arg1;
- (void)authFlowCoordinatorDidLogin:(id)arg1;
- (void)authFlowCoordinatorWillLogin:(id)arg1;
- (_Bool)shouldShowLastActiveOnNormalProfiles;
- (void)setupGlobalNavigationBarBackButtonAppearance;
- (void)handleBGUpdateDone:(id)arg1;
- (void)setupBackgroundUpdateNotifications;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)checkAndUpdateApplicationVersioning;
@property(readonly, nonatomic) _Bool isFreshInstall;
- (void)userAuthenticatedAppRaterCheck:(id)arg1;
- (void)setupAppRatingFramework;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadTinderGUI;
- (void)loadGUIServicesWithOptions:(id)arg1;
- (void)loadAPIServicesWithOptions:(id)arg1;
- (void)loadNetworkServicesWithOptions:(id)arg1;
- (void)loadBasicServicesWithOptions:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
@property(readonly, nonatomic) _TtC6Tinder10AppContext *appContext;
@property(readonly, nonatomic) TNDRNotificationWindow *notificationWindow;
@property(readonly, nonatomic) TNDRExperimentCoordinator *experimentCoordinator;
@property(readonly, nonatomic) TNDRLocationManager *locationManager;
@property(readonly, nonatomic) TNDRTimer *timer;
@property(readonly, nonatomic) TNDRPaywallManager *paywallManager;
@property(readonly, nonatomic) TNDRProductsManager *productsManager;
@property(readonly, nonatomic) TNDRAppRater *appRater;
@property(readonly, nonatomic) TNDREnvironmentHelper *environmentHelper;
@property(readonly, nonatomic) TNDRLeanplumUserAttributeTracker *leanplumUserAttributeTracker;
@property(readonly, nonatomic) TNDRLeanplumTracker *leanplumTracker;
@property(readonly, nonatomic) _TtC6Tinder15LeanplumService *leanplumService;
@property(readonly, nonatomic) TNDRSpotifyAuthenticator *spotifyAuthenticator;
- (id)currentUser;
@property(readonly, nonatomic) TNDRDeepLinker *deepLinker;
@property(readonly, nonatomic) id <TNDRPerformanceTrackerProtocol> performanceTracker;
- (id)analyticsTracker;
@property(readonly, nonatomic) TNDRApplicationShortcutManager *shortcutManager;
@property(readonly, nonatomic) TNDRAppServiceLevel *appServiceLevel;
@property(readonly, nonatomic) TNDRDataManager *dataManager;
@property(readonly, nonatomic) TNDRCoreDataService *dataService;
- (id)notificationCenter;
@property(readonly, nonatomic) TNDRURLManager *urlManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

