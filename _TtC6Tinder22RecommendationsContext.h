//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, TNDRCurrentUser, TNDRDataManager, TNDRNewMatchInteractor, UIViewController, _TtC6Tinder10AdsContext;
@protocol TNDRGamepadActionHandler;

@interface _TtC6Tinder22RecommendationsContext : NSObject
{
    // Error parsing type: , name: currentUser
    // Error parsing type: , name: dataManager.storage
    // Error parsing type: , name: defaults.storage
    // Error parsing type: , name: matchInteractor.storage
    // Error parsing type: , name: stackType
    // Error parsing type: , name: userRecommendationsContextDelegate
    // Error parsing type: , name: controller
    // Error parsing type: , name: interactionViewController
    // Error parsing type: , name: gamepadActionHandler
    // Error parsing type: , name: googleExperiment.storage
    // Error parsing type: , name: dataService.storage
    // Error parsing type: , name: adsContext
    // Error parsing type: , name: notificationCenter
    // Error parsing type: , name: sharedRecommendationInteractor
    // Error parsing type: , name: performanceTracker.storage
    // Error parsing type: , name: userContext.storage
    // Error parsing type: , name: groupContext.storage
    // Error parsing type: , name: loader.storage
    // Error parsing type: , name: analyticsService.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter;
@property(nonatomic, retain) _TtC6Tinder10AdsContext *adsContext; // @synthesize adsContext;
@property(nonatomic) __weak id <TNDRGamepadActionHandler> gamepadActionHandler; // @synthesize gamepadActionHandler;
@property(nonatomic) __weak UIViewController *interactionViewController; // @synthesize interactionViewController;
@property(nonatomic, readonly) long long source;
@property(nonatomic, readonly) long long stackType; // @synthesize stackType;
@property(nonatomic, retain) TNDRNewMatchInteractor *matchInteractor;
@property(nonatomic, retain) TNDRDataManager *dataManager;
@property(nonatomic, readonly) TNDRCurrentUser *currentUser; // @synthesize currentUser;

@end

