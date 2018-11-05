//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TNDRDiscoverOffViewDelegate-Protocol.h"
#import "TNDRSegmentedControlDelegate-Protocol.h"

@class NSDictionary, NSNotificationCenter, NSString, TNDRAnalyticsTracker, TNDRCoreDataService, TNDRCreateGroupBannerView, TNDRCurrentUser, TNDRDiscoverOffView, TNDRNoRecommendationsView, TNDRSegmentedControl, UIView;
@protocol TNDRPerformanceTrackerProtocol, TNDRRecommendationViewCoordinatorDelegate;

@interface TNDRRecommendationViewCoordinator : NSObject <TNDRDiscoverOffViewDelegate, TNDRSegmentedControlDelegate>
{
    _Bool _areRecsBeingDisplayed;
    _Bool _isFirstAppearance;
    id <TNDRRecommendationViewCoordinatorDelegate> _delegate;
    long long _visibleViewType;
    TNDRNoRecommendationsView *_noRecommendationsView;
    TNDRDiscoverOffView *_discoveryOffView;
    UIView *_view;
    long long _lastSelectedIndex;
    TNDRSegmentedControl *_cardStackSelectControl;
    NSDictionary *_createdViewsDict;
    TNDRCreateGroupBannerView *_bannerView;
}

@property(nonatomic) _Bool isFirstAppearance; // @synthesize isFirstAppearance=_isFirstAppearance;
@property(retain, nonatomic) TNDRCreateGroupBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) NSDictionary *createdViewsDict; // @synthesize createdViewsDict=_createdViewsDict;
@property(retain, nonatomic) TNDRSegmentedControl *cardStackSelectControl; // @synthesize cardStackSelectControl=_cardStackSelectControl;
@property(nonatomic) long long lastSelectedIndex; // @synthesize lastSelectedIndex=_lastSelectedIndex;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) TNDRDiscoverOffView *discoveryOffView; // @synthesize discoveryOffView=_discoveryOffView;
@property(retain, nonatomic) TNDRNoRecommendationsView *noRecommendationsView; // @synthesize noRecommendationsView=_noRecommendationsView;
@property(nonatomic) long long visibleViewType; // @synthesize visibleViewType=_visibleViewType;
@property(readonly, nonatomic) _Bool areRecsBeingDisplayed; // @synthesize areRecsBeingDisplayed=_areRecsBeingDisplayed;
@property(nonatomic) __weak id <TNDRRecommendationViewCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTinderSocialSwitchWithGroupDiscoveryEnabled:(_Bool)arg1 isInAGroup:(_Bool)arg2 showGroupStack:(_Bool)arg3 reloadCardStack:(_Bool)arg4 noGroupRecs:(_Bool)arg5;
- (void)handleTinderCoreViewSwitchWithDiscoveryEnabled:(_Bool)arg1 hasCardInStack:(_Bool)arg2 reloadCardStack:(_Bool)arg3;
- (void)preventQuickInteractionForControl:(id)arg1;
- (void)segmentedControl:(id)arg1 didSelectIndex:(long long)arg2;
- (void)checkViewsAreHiddenExceptView:(long long)arg1;
- (void)showView:(long long)arg1 shouldReloadCardStack:(_Bool)arg2;
- (void)hideView:(long long)arg1;
- (void)hideViewType:(long long)arg1 andShowViewType:(long long)arg2 shouldReloadCardStack:(_Bool)arg3;
- (void)hideCurrentViewAndShowView:(long long)arg1 shouldReloadCardStack:(_Bool)arg2;
- (void)updateDiscoverEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateOnCurrentUserDidClearDataNotification;
- (void)updateOnViewDidAppearOnlyOnFirstAppearance;
- (void)updateViewsWithHasCardsInStack:(_Bool)arg1 discoveryEnabled:(_Bool)arg2 groupDiscoveryEnabled:(_Bool)arg3 hasGroupCardsInStack:(_Bool)arg4 userIsInAGroup:(_Bool)arg5 shouldReloadCardStack:(_Bool)arg6;
- (void)updateViewsAndReloadCardStack:(_Bool)arg1;
- (void)discoverButtonTapped;
- (void)didTapCreateGroup:(id)arg1;
- (void)hideBannerView;
- (double)bannerHeight;
- (void)showCreateGroupBannerView;
- (void)showNoGroupRecommendationsViewHideGamepad:(_Bool)arg1;
- (struct CGRect)viewFrame;
- (void)hideNoRecommendationsViewAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)hideNoRecommendationsView;
- (void)createNoRecommendationViewIfNeed;
- (void)showNoRecommendationsView;
- (void)hideDiscoveryOffView;
- (void)showDiscoveryOffView;
@property(readonly, nonatomic) _Bool isNoRecommendationsViewVisible;
@property(readonly, nonatomic) _Bool isDiscoveryOffViewVisible;
- (void)dealloc;
- (id)initWithView:(id)arg1 cardStackSelectControl:(id)arg2;
@property(readonly) id <TNDRPerformanceTrackerProtocol> performanceTracker;
@property(readonly) NSNotificationCenter *notificationCenter;
@property(readonly) TNDRAnalyticsTracker *analyticsTracker;
@property(readonly) TNDRCurrentUser *currentUser;
@property(readonly) TNDRCoreDataService *dataService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

