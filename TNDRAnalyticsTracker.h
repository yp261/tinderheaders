//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPKTracker, TNDRCoreDataService, TNDRCurrentUser, TNDRDeepLinker, TNDRLeanplumTracker, TNDRLeanplumUserAttributeTracker, _TtC6Tinder9AppsFlyer;

@interface TNDRAnalyticsTracker : NSObject
{
}

+ (long long)purchaseCodeVersion;
+ (id)stringFromAdMethod:(unsigned long long)arg1;
+ (id)stringFromAdDetailsType:(unsigned long long)arg1;
+ (id)stringFromAdType:(unsigned long long)arg1;
+ (id)stringFromAdPresentingScene:(unsigned long long)arg1;
+ (id)stringFromAdFormat:(unsigned long long)arg1;
+ (id)sharedTracker;
- (id)sparksMethodForRatingSource:(long long)arg1 isSuperLike:(_Bool)arg2;
- (void)trackNotificationErrorModalAction:(_Bool)arg1;
- (void)trackNotificationErrorModalShown;
- (void)trackGoingOutQuickReplyEditWithStatusTag:(id)arg1;
- (void)trackGoingOutQuickReplyWithStatusTag:(id)arg1;
- (void)trackGoingOutStatusBubbleWithSource:(long long)arg1 statusTag:(id)arg2;
- (void)trackGoingOutCloseToolTip;
- (void)trackGoingOutCancelSelectLocationWithTimeSinceCreated:(long long)arg1 timeLeft:(long long)arg2;
- (void)trackGoingOutSelectLocationWithQuery:(id)arg1 position:(long long)arg2 location:(id)arg3 locationId:(id)arg4 locationSource:(id)arg5 numResultsSeen:(long long)arg6 numResultsRetrieved:(long long)arg7;
- (void)trackGoingOutSearchLocationWithQuery:(id)arg1 numResultsRetrieved:(long long)arg2;
- (void)trackGoingOutClearLocationWithTimeSinceCreated:(long long)arg1 timeLeft:(long long)arg2;
- (void)trackGoingOutSetLocationWithHasLocation:(_Bool)arg1 timeSinceCreated:(long long)arg2 timeLeft:(long long)arg3;
- (void)trackGoingOutChangeStatusCancelWithStatusChanged:(_Bool)arg1 locationChanged:(_Bool)arg2 timeSinceCreated:(long long)arg3 timeLeft:(long long)arg4;
- (void)trackGoingOutSetStatusCancelWithTimeSinceCreated:(long long)arg1 timeLeft:(long long)arg2 locationSet:(_Bool)arg3;
- (void)trackGoingOutExpireWithTimeSinceCreated:(long long)arg1 timeLeft:(long long)arg2;
- (void)trackGoingOutChangeStatusWithStatus:(id)arg1 position:(long long)arg2 location:(id)arg3 locationId:(id)arg4 locationSource:(id)arg5 numStatusesSeen:(long long)arg6 timeSinceCreated:(long long)arg7 timeLeft:(long long)arg8;
- (void)trackGoingOutSetStatusWithStatus:(id)arg1 position:(long long)arg2 location:(id)arg3 locationId:(id)arg4 locationSource:(id)arg5 numStatusesSeen:(long long)arg6;
- (void)trackGoingOutSelectionWithPosition:(long long)arg1 hasStatus:(_Bool)arg2 hasLocation:(_Bool)arg3 timeSinceCreated:(long long)arg4 timeLeft:(long long)arg5 matchesInGoingOutCount:(long long)arg6 source:(long long)arg7;
- (void)trackBoostPaywallPurchaseWithAnalyticsData:(id)arg1;
- (void)trackBoostPurchaseWithSavedAnalyticsData:(_Bool)arg1;
- (void)clearSavedAnalyticsDataForBoostSelectedPurchase;
- (id)analyticsDataForBoostSelectedPurchase;
- (void)saveAnalyticsDataForSelectedBoostPaywallPurchase:(id)arg1 hasPlus:(_Bool)arg2 price:(id)arg3 locale:(id)arg4 products:(id)arg5 amount:(long long)arg6 encounteredFrom:(unsigned long long)arg7 timeRemaining:(id)arg8 boostRemaining:(long long)arg9 basePrice:(id)arg10 isPrimary:(_Bool)arg11;
- (void)trackBoostPaywallSelectWithPlus:(_Bool)arg1 timeRemaining:(id)arg2 sku:(id)arg3 amount:(long long)arg4 from:(unsigned long long)arg5 price:(id)arg6 locale:(id)arg7 products:(id)arg8 boostRemaining:(long long)arg9 basePrice:(id)arg10 isPrimary:(_Bool)arg11;
- (void)trackBoostPaywallCanceWithPlus:(_Bool)arg1 timeRemaining:(id)arg2 products:(id)arg3 from:(unsigned long long)arg4 boostRemaining:(long long)arg5;
- (void)trackBoostPaywallViewWithPlus:(_Bool)arg1 timeRemaining:(id)arg2 products:(id)arg3 from:(unsigned long long)arg4 boostRemaining:(long long)arg5;
- (long long)boostPaywallVersion;
- (void)trackBoostSummaryViewWithPlus:(_Bool)arg1 boostID:(id)arg2 boostRemaining:(long long)arg3;
- (void)trackBoostTutorialViewWithPlus:(_Bool)arg1;
- (void)trackBoostInProgressViewWithJSON:(id)arg1 hasTinderPlus:(_Bool)arg2;
- (void)trackBoostStartWithJSON:(id)arg1 hasTinderPlus:(_Bool)arg2;
- (id)boostDictionaryFromJSON:(id)arg1;
- (void)trackBoostReminderViewWithPlus:(_Bool)arg1;
- (void)trackBoostIntroductionViewWithPlus:(_Bool)arg1;
- (void)trackDisconnectAnthem;
- (void)trackAnthemSelectionWithSongName:(id)arg1 artistName:(id)arg2 fromSearch:(_Bool)arg3;
- (void)trackAnthemConnectionWithSongName:(id)arg1 artistName:(id)arg2 fromSearch:(_Bool)arg3;
- (void)trackSpotifyDisconnected;
- (void)trackSpotifySettingWithSpotifyConnected:(_Bool)arg1 optedInThemeSong:(_Bool)arg2 trackName:(id)arg3 trackArtists:(id)arg4 numberOfTopArtists:(long long)arg5;
- (void)trackListenWithCurrentUserID:(id)arg1 profileID:(id)arg2 isThemeSong:(_Bool)arg3 trackName:(id)arg4 trackArtists:(id)arg5 isMatch:(_Bool)arg6;
- (void)trackSpotifyConnectWithMethod:(unsigned long long)arg1 connectionSuccess:(_Bool)arg2 isPremiumUser:(_Bool)arg3;
- (void)userViewedCRMModal:(unsigned long long)arg1 pushEnabled:(_Bool)arg2;
- (void)userTappedEditProfilePhotoCount:(long long)arg1 smartPhotosState:(unsigned long long)arg2 bio:(id)arg3 work:(id)arg4 school:(id)arg5 instagram:(_Bool)arg6 anthem:(id)arg7 spotify:(_Bool)arg8 gender:(long long)arg9 ageControl:(_Bool)arg10 distance:(_Bool)arg11;
- (void)userTappedCreateGroupMethod:(id)arg1;
- (void)userViewedWhatsNewPage:(id)arg1;
- (void)trackSettingsUserInteractionWithCategory:(long long)arg1 subcategory:(long long)arg2;
- (void)userTappedCreateGroupWithFriends;
- (void)userSelectedFirstFriendForGroup;
- (void)trackUserViewedHomeAdPanel:(unsigned long long)arg1 remainingSuperlikes:(long long)arg2 remainingBoosts:(long long)arg3;
- (void)userViewedProfile;
- (void)userViewedSettings;
- (void)trackUserDidToggleToStackType:(long long)arg1 method:(id)arg2 groupId:(id)arg3;
- (void)trackGoingOutTonightPopupDismissGoingOut;
- (void)trackGoingOutTonightPopupDismissCancel;
- (void)trackGoingOutTonightPopupDismissResponse:(id)arg1;
- (void)trackGoingOutTonightPopup;
- (void)trackJoinNotificationGroup:(id)arg1;
- (void)trackCreateGroupNumberOfFriends:(id)arg1;
- (void)trackGroupInviteFriendsFromWhere:(id)arg1;
- (void)trackGroup:(id)arg1 unmatch:(id)arg2 matchID:(id)arg3 reason:(id)arg4;
- (void)trackGroupsEnabled:(_Bool)arg1 method:(id)arg2;
- (void)trackGroupProfileOpen:(id)arg1 myGroup:(id)arg2 verified:(_Bool)arg3 didSuperLike:(_Bool)arg4;
- (void)trackGroupExtend:(id)arg1 expiration:(id)arg2;
- (void)trackGroupLeave:(id)arg1;
- (void)trackGroupChangeStatus:(id)arg1 groupID:(id)arg2;
- (void)trackGroupCreate:(id)arg1 owner:(id)arg2 members:(id)arg3 expiration:(id)arg4 from:(long long)arg5;
- (void)trackShowingGIFWithQuery:(id)arg1 GIFID:(id)arg2 GIFURLString:(id)arg3 inPosition:(long long)arg4;
- (void)trackSelectingGIFWithQuery:(id)arg1 GIFID:(id)arg2 GIFURLString:(id)arg3 inPosition:(long long)arg4;
- (void)trackGIFSearchWithQuery:(id)arg1 duration:(double)arg2 count:(unsigned long long)arg3;
- (void)trackGIFButtonTappedToShowGIFSearch:(_Bool)arg1;
- (void)trackLeanplumVariantsAdded:(id)arg1;
- (void)trackLeanplumVariantsRemoved:(id)arg1 andAdded:(id)arg2;
- (void)userPerformSchoolActionType:(unsigned long long)arg1;
- (void)userPerformJobActionType:(unsigned long long)arg1;
- (void)trackUsernameEventOfType:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)trackTinderPlusControlSettingChangeForSubcategory:(long long)arg1;
- (void)trackMerchandisingPageViewWithIncentivesOrdering:(id)arg1 hasPlus:(_Bool)arg2 currency:(id)arg3 locale:(id)arg4 from:(long long)arg5;
- (void)trackAppRaterCancelWithStarRating:(long long)arg1 cause:(id)arg2 mode:(id)arg3;
- (void)trackAppRaterReviewWithStarRating:(long long)arg1 cause:(id)arg2;
- (void)trackAppRaterSelectStarRating:(long long)arg1;
- (void)trackAppRaterFeedback:(id)arg1 stars:(long long)arg2 cause:(id)arg3;
- (void)trackAppRaterShowMode:(id)arg1 cause:(id)arg2;
- (void)trackChatInstagramUsernameTapped:(id)arg1 instagramName:(id)arg2 from:(unsigned long long)arg3;
- (void)trackChatInstagramPhotoViewerPage:(id)arg1 pageDirection:(unsigned long long)arg2 endOfPhotos:(_Bool)arg3 instagramName:(id)arg4;
- (void)trackChatInstagramPhotoSelected:(id)arg1 photoIndex:(long long)arg2 instagramName:(id)arg3;
- (void)trackChatProfileInstagramPage:(id)arg1 pageNumber:(long long)arg2 direction:(unsigned long long)arg3 endOfPhotos:(_Bool)arg4 instagramName:(id)arg5;
- (void)trackRecInstagramUsernameTapped:(id)arg1 instagramName:(id)arg2 from:(unsigned long long)arg3;
- (void)trackRecInstagramPhotoViewerPage:(id)arg1 pageDirection:(unsigned long long)arg2 endOfPhotos:(_Bool)arg3 instagramName:(id)arg4;
- (void)trackRecsInstagramPhotoSelected:(id)arg1 photoIndex:(long long)arg2 instagramName:(id)arg3;
- (void)trackRecsProfileInstagramPage:(id)arg1 pageNumber:(long long)arg2 direction:(unsigned long long)arg3 endOfPhotos:(_Bool)arg4 instagramName:(id)arg5;
- (void)trackAccountInstagramLogoutFail;
- (void)trackAccountInstagramLogoutSuccess;
- (void)trackAccountInstagramDisconnectAttempt:(unsigned long long)arg1;
- (void)trackAccountInstagramLoginFailed;
- (void)trackAccountInstagramLoginSuccess;
- (void)trackAccountInstagramConnectAttempt:(unsigned long long)arg1;
- (void)trackUserLogoutFromAccountWarningDialog:(long long)arg1 warningType:(long long)arg2;
- (void)trackUserLogoutFromAccountUnderReviewDialog:(long long)arg1;
- (void)trackUserAcknowledgedAccountWarningDialog:(long long)arg1 warningType:(long long)arg2;
- (void)trackUserViewedAccountWarningDialog:(long long)arg1 warningType:(long long)arg2;
- (void)trackUserViewedAccountUnderReviewDialog:(long long)arg1;
- (void)trackRecommendationsUndoNoRewindableUserShownPaywall:(_Bool)arg1 isUserTraveling:(_Bool)arg2;
- (void)trackRecommendationsGroupUndoPreviouslyLiked:(_Bool)arg1 otherGroupID:(id)arg2 paywall:(_Bool)arg3 didSuperLikeCurrentGroup:(_Bool)arg4 currentUserSuperLiked:(_Bool)arg5;
- (void)trackRecommendationsUndoPreviouslyLiked:(_Bool)arg1 otherID:(id)arg2 paywall:(_Bool)arg3 isUserTraveling:(_Bool)arg4 isRecTraveling:(_Bool)arg5 didSuperLikeCurrentUser:(_Bool)arg6 currentUserSuperLiked:(_Bool)arg7;
- (id)skuTrueDictionaryForProducts:(id)arg1;
- (void)clearSavedAnalyticsDataForSelectedSuperLikePaywallPurchase;
- (id)analyticsDataForSelectedSuperLikePaywallPurchase;
- (void)saveAnalyticsDataForSelectedSuperLikePaywallPurchase:(id)arg1 price:(id)arg2 locale:(id)arg3 products:(id)arg4 encounteredFrom:(unsigned long long)arg5 version:(double)arg6 secondsRemaining:(long long)arg7 colorVariant:(long long)arg8 superLikesRemaining:(long long)arg9;
- (void)trackSuperLikePaywallPurchaseWithAnalyticsData:(id)arg1;
- (void)trackSuperLikePaywallPurchaseWithSavedAnalyticsData:(_Bool)arg1;
- (void)trackSuperLikePaywallCancel:(id)arg1 encounteredFrom:(unsigned long long)arg2 version:(double)arg3 otherID:(id)arg4 secondsRemaining:(long long)arg5 colorVariant:(long long)arg6 superLikesRemaining:(long long)arg7;
- (void)trackSuperLikePaywallSelect:(id)arg1 price:(id)arg2 locale:(id)arg3 products:(id)arg4 encounteredFrom:(unsigned long long)arg5 version:(double)arg6 otherID:(id)arg7 secondsRemaining:(long long)arg8 colorVariant:(long long)arg9 superLikesRemaining:(long long)arg10;
- (void)trackSuperLikePaywallView:(id)arg1 encounteredFrom:(unsigned long long)arg2 version:(double)arg3 otherID:(id)arg4 secondsRemaining:(long long)arg5 colorVariant:(long long)arg6 superLikesRemaining:(long long)arg7;
- (void)trackSuperLikeTutorialSelect:(id)arg1 action:(unsigned long long)arg2 from:(unsigned long long)arg3;
- (void)trackSuperLikeTutorialView:(id)arg1 from:(unsigned long long)arg2;
- (void)trackSuperLikeIntroductionView:(id)arg1;
- (void)trackTinderPlusPaywallFeatureView:(id)arg1 products:(id)arg2 features:(id)arg3 position:(long long)arg4 direction:(long long)arg5 superLikesRemaining:(long long)arg6 encounteredFrom:(unsigned long long)arg7 incentives:(id)arg8 incentivesOrdering:(id)arg9;
- (void)trackTinderPlusExitPaywallCancelWithProductInfo:(id)arg1 percentLikesLeft:(double)arg2 locale:(id)arg3 basePrice:(id)arg4 discountedPrice:(id)arg5 discountCampaign:(id)arg6 discountedTestGroup:(id)arg7 features:(id)arg8 superLikesRemaining:(long long)arg9 encounteredFrom:(unsigned long long)arg10 incentives:(id)arg11 incentivesOrdering:(id)arg12 term:(long long)arg13 paywallGroup:(long long)arg14 paywallVersion:(long long)arg15;
- (void)trackTinderPlusRestore:(id)arg1 currency:(id)arg2 price:(id)arg3 success:(_Bool)arg4 term:(long long)arg5 basePrice:(id)arg6 discountedPrice:(id)arg7 discountCampaign:(id)arg8 discountedTestGroup:(id)arg9 features:(id)arg10 incentives:(id)arg11 incentivesOrdering:(id)arg12 superLikesRemaining:(long long)arg13 paywallVersion:(long long)arg14;
- (void)clearSavedPurchaseAnalytics;
- (void)clearSavedAnalyticsDataForTinderPlusSelectedPurchase;
- (id)analyticsDataForTinderPlusSelectedPurchase;
- (void)saveAnalyticsDataForTinderPlusSelectedPurchase:(id)arg1 withPrice:(id)arg2 andLocale:(id)arg3 from:(unsigned long long)arg4 incentives:(id)arg5 incentivesOrdering:(id)arg6 percentLikesLeft:(double)arg7 products:(id)arg8 term:(long long)arg9 basePrice:(id)arg10 discountedPrice:(id)arg11 discountCampaign:(id)arg12 discountedTestGroup:(id)arg13 features:(id)arg14 superLikesRemaining:(long long)arg15 paywallGroup:(long long)arg16 paywallVersion:(long long)arg17;
- (void)trackTinderPlusPurchaseWithAnalyticsData:(id)arg1;
- (void)trackTinderPlusPurchaseWithSavedAnalyticsData:(_Bool)arg1;
- (void)trackAllPurchasesWithSavedAnalyticsData:(_Bool)arg1;
- (void)trackTinderPlusSelectPurchaseOption:(id)arg1 encounteredFrom:(unsigned long long)arg2 incentives:(id)arg3 incentivesOrdering:(id)arg4 withPrice:(id)arg5 andLocale:(id)arg6 percentLikesLeft:(double)arg7 products:(id)arg8 term:(long long)arg9 basePrice:(id)arg10 discountedPrice:(id)arg11 discountCampaign:(id)arg12 discountedTestGroup:(id)arg13 features:(id)arg14 superLikesRemaining:(long long)arg15 paywallGroup:(long long)arg16 paywallVersion:(long long)arg17;
- (void)trackTinderPlusSkuOffered:(id)arg1 basePrice:(id)arg2 discountedPrice:(id)arg3 discountCampaign:(id)arg4 discountedTestGroup:(id)arg5 paywallVersion:(long long)arg6 locale:(id)arg7;
- (id)skuDictionaryFromSKUArray:(id)arg1;
- (id)leanPlumEventForPaywallVersion:(long long)arg1 recentlyExpired:(_Bool)arg2;
- (void)trackTinderPlusPaywallViewAllProducts:(id)arg1 encounteredFrom:(unsigned long long)arg2 incentives:(id)arg3 incentivesOrdering:(id)arg4 percentLikesLeft:(double)arg5 skus:(id)arg6 currency:(id)arg7 locale:(id)arg8 basePrice:(id)arg9 discountedPrice:(id)arg10 discountCampaign:(id)arg11 discountedTestGroup:(id)arg12 features:(id)arg13 paywallGroup:(long long)arg14 paywallVersion:(long long)arg15 didTinderPlusRecentlyExpire:(_Bool)arg16;
- (void)trackPassportLaunchFromView:(id)arg1 andPassportID:(id)arg2;
- (void)trackPassportDismissView:(id)arg1 andPassportID:(id)arg2;
- (void)trackPassportProfileView:(id)arg1 andPassportID:(id)arg2;
- (void)trackPassportAcceptLocationWithNewLat:(double)arg1 andLong:(double)arg2;
- (void)trackPassportMoveMap;
- (void)trackPassportMapPinDroppedWithLat:(double)arg1 andLong:(double)arg2 isCurrentLocation:(_Bool)arg3;
- (void)trackPassportSelectMyLocation:(unsigned long long)arg1;
- (void)trackPassportMapSearch:(id)arg1 withMethod:(id)arg2 isPopular:(_Bool)arg3;
- (void)trackPassportMapOpen:(unsigned long long)arg1;
- (void)trackPassportChooseLocationWithLat:(double)arg1 andLong:(double)arg2;
- (void)trackPassportMenuClosed;
- (void)trackPassportStartRecsExhausted:(_Bool)arg1 from:(unsigned long long)arg2;
- (void)trackAppCloseEvent:(int)arg1;
- (void)trackAppOpenEventWithResumed:(_Bool)arg1 referralURL:(id)arg2 shortcut:(id)arg3 from:(id)arg4 pushEnabled:(_Bool)arg5;
- (void)trackUserChangedSchoolName:(id)arg1 from:(id)arg2;
- (void)trackUserChangedEmployer:(id)arg1 from:(id)arg2;
- (void)trackUserChangedJobTitle:(id)arg1 from:(id)arg2;
- (void)trackUserChangedBio:(id)arg1;
- (void)trackUserOnProfileEditWhenProfilePhotoProcessing;
- (void)trackProfileChangePhotoOrder:(id)arg1 fromIndex:(id)arg2 toIndex:(id)arg3;
- (void)trackProfileDeletePhoto:(id)arg1;
- (void)trackProfileAddPhoto:(id)arg1 from:(long long)arg2;
- (void)trackProfileEdit;
- (void)trackMyProfileView;
- (void)trackContactOpen;
- (void)trackAccountEventWithName:(id)arg1 properties:(id)arg2;
- (void)trackAccountDelete;
- (void)trackAccountStackInfoWithLocalParticipantID:(id)arg1 stackCount:(long long)arg2;
- (void)trackPushReceive:(id)arg1 additionalProperties:(id)arg2;
- (void)trackPushReceive:(id)arg1;
- (void)trackPushMarketingCampaign:(id)arg1;
- (void)trackPushMessage:(id)arg1;
- (void)trackPushMatch:(id)arg1;
- (void)trackMatchSearchSelected:(id)arg1 andMatch:(id)arg2 from:(id)arg3;
- (void)trackMatchSearchPerformed:(id)arg1;
- (void)trackMatchSearchEnded:(id)arg1;
- (void)trackMatchStartSearch:(id)arg1;
- (void)trackMatchListViewed:(id)arg1;
- (void)trackMatchInviteFriends:(id)arg1 didSuperLikeCurrentUser:(_Bool)arg2 currentUserSuperLiked:(_Bool)arg3;
- (void)trackMatchOpenChat:(id)arg1 didSuperLikeCurrentUser:(_Bool)arg2 currentUserSuperLiked:(_Bool)arg3;
- (void)trackMatchKeepPlaying:(id)arg1 didSuperLikeCurrentUser:(_Bool)arg2 currentUserSuperLiked:(_Bool)arg3;
- (void)trackMatchNewGroupMatch:(id)arg1 myGroupID:(id)arg2 otherGroupID:(id)arg3 matchSuperLikedCurrentGroup:(_Bool)arg4 currentGroupSuperLikedMatch:(_Bool)arg5 fromPush:(_Bool)arg6 badgeType:(id)arg7 source:(id)arg8 groupSize:(id)arg9 otherGroupSize:(id)arg10;
- (void)trackMatchNewMatch:(id)arg1 otherID:(id)arg2 matchSuperLikedCurrentUser:(_Bool)arg3 currentUserSuperLikedMatch:(_Bool)arg4 fromPush:(_Bool)arg5 referralURL:(id)arg6 badgeType:(id)arg7 source:(id)arg8 teaser1Type:(id)arg9 teaser1Value:(id)arg10 teaser2Type:(id)arg11 teaser2Value:(id)arg12 firstDegrees:(long long)arg13 secondDegrees:(long long)arg14 isBoostMatch:(_Bool)arg15;
- (void)trackAdReplayForProvider:(id)arg1 campaignOrderID:(id)arg2 creativeID:(id)arg3 mute:(_Bool)arg4 format:(unsigned long long)arg5 otherId:(id)arg6;
- (void)trackAdCompleteForProvider:(id)arg1 campaignOrderID:(id)arg2 creativeID:(id)arg3 mute:(_Bool)arg4 format:(unsigned long long)arg5 otherId:(id)arg6;
- (void)trackAdCloseForProvider:(id)arg1 campaignOrderID:(id)arg2 creativeID:(id)arg3 presentingScene:(unsigned long long)arg4 like:(_Bool)arg5 mute:(_Bool)arg6 paused:(_Bool)arg7 percentWatched:(unsigned long long)arg8 method:(unsigned long long)arg9 timeViewed:(double)arg10 otherId:(id)arg11;
- (void)trackAdDetailsOpenForProvider:(id)arg1 campaignOrderID:(id)arg2 creativeID:(id)arg3 type:(unsigned long long)arg4 presentingScene:(unsigned long long)arg5 otherId:(id)arg6;
- (void)trackAdSelectForProvider:(id)arg1 campaignOrderID:(id)arg2 creativeID:(id)arg3 mute:(_Bool)arg4 format:(unsigned long long)arg5 percentWatched:(unsigned long long)arg6 type:(unsigned long long)arg7 presentingScene:(unsigned long long)arg8 paused:(_Bool)arg9 timeViewed:(double)arg10 method:(unsigned long long)arg11 otherId:(id)arg12;
- (void)trackAdProgressForProvider:(id)arg1 campaignOrderID:(id)arg2 creativeID:(id)arg3 mute:(_Bool)arg4 format:(unsigned long long)arg5 percentWatched:(unsigned long long)arg6 otherId:(id)arg7;
- (void)trackAdPlayForProvider:(id)arg1 campaignOrderID:(id)arg2 creativeID:(id)arg3 mute:(_Bool)arg4 format:(unsigned long long)arg5 percentWatched:(unsigned long long)arg6 otherId:(id)arg7;
- (void)trackAdToggleAudioForProvider:(id)arg1 campaignOrderID:(id)arg2 creativeID:(id)arg3 mute:(_Bool)arg4 format:(unsigned long long)arg5 otherId:(id)arg6;
- (void)trackAdViewForProvider:(id)arg1 campaignOrderID:(id)arg2 creativeID:(id)arg3 mute:(_Bool)arg4 format:(unsigned long long)arg5 type:(unsigned long long)arg6 presentingScene:(unsigned long long)arg7 otherID:(id)arg8 thirdPartyTrackingURL:(id)arg9;
- (void)trackAdBufferFailWithCreativeID:(id)arg1;
- (void)trackAdLoadFail;
- (void)trackAdLoadWithCreativeID:(id)arg1;
- (void)trackAdRequest;
- (void)trackPhotoPreviewTutorialActionForUser:(id)arg1;
- (void)trackPhotoPreviewTutorialDiscoveryForUser:(id)arg1;
- (void)trackPhotoPreviewForUser:(id)arg1 andPhoto:(id)arg2 from:(id)arg3 didSuperLikeCurrentUser:(_Bool)arg4 photoIndex:(long long)arg5 hasSeenTutorial:(_Bool)arg6;
- (void)trackChatPeekMenuSelect:(id)arg1 matchID:(id)arg2 userID:(id)arg3 didSuperLikeCurrentUser:(_Bool)arg4 currentUserSuperLiked:(_Bool)arg5;
- (void)trackChatPeekMenuOpenForMatchID:(id)arg1 userID:(id)arg2 didSuperLikeCurrentUser:(_Bool)arg3 currentUserSuperLiked:(_Bool)arg4 actions:(id)arg5;
- (void)trackChatPopForMatchID:(id)arg1 userID:(id)arg2 didSuperLikeCurrentUser:(_Bool)arg3 currentUserSuperLiked:(_Bool)arg4;
- (void)trackChatPeekForMatchID:(id)arg1 userID:(id)arg2 didSuperLikeCurrentUser:(_Bool)arg3 currentUserSuperLiked:(_Bool)arg4 actions:(id)arg5;
- (void)trackChatLinkTappedWithMatchID:(id)arg1 fromUserID:(id)arg2 message:(id)arg3 url:(id)arg4 timeSinceMessageSent:(double)arg5;
- (void)trackReportRecommendation:(id)arg1 reason:(id)arg2 otherExplanation:(id)arg3 withBadgeType:(id)arg4 from:(id)arg5 referralURL:(id)arg6;
- (void)trackChatLikeWithMatchID:(id)arg1 userID:(id)arg2 messageType:(id)arg3 messageIndex:(id)arg4 matchUserID:(id)arg5;
- (void)trackChatReportMatch:(id)arg1 userID:(id)arg2 reason:(id)arg3 otherExplanation:(id)arg4 blocked:(_Bool)arg5;
- (void)trackChatBlockMatch:(id)arg1 userID:(id)arg2 reason:(id)arg3;
- (void)trackGroupChatMuted:(_Bool)arg1 matchID:(id)arg2 groupID:(id)arg3 otherGroupID:(id)arg4;
- (void)trackChatMuted:(_Bool)arg1 matchID:(id)arg2 userID:(id)arg3;
- (void)trackChatOpenProfileForMatch:(id)arg1 userID:(id)arg2 locationInfoType:(unsigned long long)arg3 instagramPhotoTotal:(long long)arg4 instagramName:(id)arg5 didSuperLikeCurrentUser:(_Bool)arg6 currentUserSuperLiked:(_Bool)arg7;
- (void)trackChatSendMessageDeleteToMatch:(id)arg1 userID:(id)arg2 message:(id)arg3 didSuperLikeCurrentUser:(_Bool)arg4 currentUserSuperLiked:(_Bool)arg5 pushType:(id)arg6;
- (void)trackGroupChatSendMessageFailedToMatch:(id)arg1 userID:(id)arg2 groupID:(id)arg3 otherGroupID:(id)arg4 message:(id)arg5;
- (void)trackChatSendMessageFailedToMatch:(id)arg1 userID:(id)arg2 message:(id)arg3 didSuperLikeCurrentUser:(_Bool)arg4 currentUserSuperLiked:(_Bool)arg5;
- (void)trackGroupChatSendMessageToMatch:(id)arg1 userID:(id)arg2 groupID:(id)arg3 otherGroupID:(id)arg4 message:(id)arg5 messageType:(id)arg6 messageIndex:(id)arg7 contentID:(id)arg8;
- (void)trackChatSendMessageToMatch:(id)arg1 userID:(id)arg2 message:(id)arg3 didSuperLikeCurrentUser:(_Bool)arg4 currentUserSuperLiked:(_Bool)arg5 from:(id)arg6 shortcut:(id)arg7 messageType:(id)arg8 contentID:(id)arg9 messageIndex:(id)arg10 retry:(_Bool)arg11 fromPush:(_Bool)arg12 hasStatus:(_Bool)arg13 hasLocation:(_Bool)arg14 timeSinceStatusCreation:(double)arg15 timeUntilStatusExpiration:(double)arg16;
- (void)trackChatOpenForMatchID:(id)arg1 userID:(id)arg2 didSuperLikeCurrentUser:(_Bool)arg3 currentUserSuperLiked:(_Bool)arg4 from:(id)arg5 shortcut:(id)arg6 withBadgeType:(id)arg7 referralURL:(id)arg8 pushType:(id)arg9 source:(unsigned long long)arg10;
- (void)trackChatOpenForMatchID:(id)arg1 userID:(id)arg2 didSuperLikeCurrentUser:(_Bool)arg3 currentUserSuperLiked:(_Bool)arg4 from:(id)arg5 shortcut:(id)arg6 withBadgeType:(id)arg7 referralURL:(id)arg8 source:(unsigned long long)arg9;
- (id)findMatchIDFromUserID:(id)arg1;
- (id)detectDataAndAddPropertiesTo:(id)arg1 forMessage:(id)arg2;
- (id)dictionaryChatAnalyticsForMatchID:(id)arg1;
- (id)addNewChatPropertiesTo:(id)arg1 forMatchID:(id)arg2;
- (void)trackPhotoPreviewForUser:(id)arg1 andPhoto:(id)arg2 from:(id)arg3 didSuperLikeCurrentUser:(_Bool)arg4 photoIndex:(unsigned long long)arg5 totalNumberOfPhotos:(unsigned long long)arg6 hasSeenTutorial:(_Bool)arg7;
- (id)stringFromRecShareALinkAnalyticsMethod:(unsigned long long)arg1;
- (void)trackRecsShareUser:(id)arg1 isUserTraveling:(_Bool)arg2 isRecTraveling:(_Bool)arg3 didSuperLike:(_Bool)arg4 blend:(long long)arg5 firstDegrees:(long long)arg6 secondDegrees:(long long)arg7 method:(unsigned long long)arg8;
- (id)deeplinkFromWithUserID:(id)arg1;
- (void)trackRecsCleared:(id)arg1;
- (void)trackRecsExhaustedGroupID:(id)arg1;
- (void)trackRecsExhausted;
- (void)trackRecsInviteFriends;
- (void)trackRecsEnd;
- (void)trackRecsRateGroup:(id)arg1 method:(id)arg2 fromMore:(_Bool)arg3 liked:(_Bool)arg4 recSuperLikedCurrentGroup:(_Bool)arg5 superLiked:(_Bool)arg6 blend:(long long)arg7 badgeType:(id)arg8 from:(id)arg9 inGroup:(id)arg10;
- (void)trackRecsRateUser:(id)arg1 method:(id)arg2 fromMore:(_Bool)arg3 liked:(_Bool)arg4 isUserTraveling:(_Bool)arg5 isRecTraveling:(_Bool)arg6 recSuperLikedCurrentUser:(_Bool)arg7 superLiked:(_Bool)arg8 teaser1Type:(id)arg9 teaser1Value:(id)arg10 teaser2Type:(id)arg11 teaser2Value:(id)arg12 blend:(long long)arg13 firstDegrees:(long long)arg14 secondDegrees:(long long)arg15 withBadgeType:(id)arg16 from:(id)arg17 referralURL:(id)arg18 playedTrack:(_Bool)arg19 hasSpotifyConnected:(_Bool)arg20 hasAnthem:(_Bool)arg21 isBoosting:(_Bool)arg22 sNumber:(id)arg23 isUserSelectOn:(_Bool)arg24 isRecSelect:(_Bool)arg25 profileOpenMethod:(unsigned long long)arg26;
- (void)trackRecsProfileCloseForGroup:(id)arg1 myGroup:(id)arg2 verified:(_Bool)arg3 didSuperLikeCurrentGroup:(_Bool)arg4;
- (void)trackRecsProfileCloseForUser:(id)arg1 exitMethod:(unsigned long long)arg2 didSuperLikeCurrentUser:(_Bool)arg3;
- (void)trackRecsProfileOpenForUser:(id)arg1 locationInfoType:(unsigned long long)arg2 instagramPhotoTotal:(long long)arg3 instagramName:(id)arg4 didSuperLikeCurrentUser:(_Bool)arg5 teaser1Type:(id)arg6 teaser1Value:(id)arg7 teaser2Type:(id)arg8 teaser2Value:(id)arg9 blend:(long long)arg10 from:(id)arg11 isUserSelectOn:(_Bool)arg12 isRecSelect:(_Bool)arg13 profileOpenMethod:(unsigned long long)arg14;
- (void)trackRecsPhotoViewForUser:(id)arg1 andPhoto:(id)arg2 from:(id)arg3 didSuperLikeCurrentUser:(_Bool)arg4;
- (void)trackGroupExpired:(id)arg1;
- (void)trackGroupRecsView:(id)arg1 withBadgeType:(id)arg2 didSuperLike:(_Bool)arg3 from:(id)arg4 blend:(long long)arg5 inContext:(id)arg6;
- (void)trackClientEventRecsView:(id)arg1 withBadgeType:(id)arg2 didSuperLike:(_Bool)arg3 from:(id)arg4 teaser1Type:(id)arg5 teaser1Value:(id)arg6 teaser2Type:(id)arg7 teaser2Value:(id)arg8 referralURL:(id)arg9 blend:(long long)arg10 isSelectMemeber:(_Bool)arg11;
- (void)trackRecsView:(id)arg1 withBadgeType:(id)arg2 didSuperLike:(_Bool)arg3 from:(id)arg4 teaser1Type:(id)arg5 teaser1Value:(id)arg6 teaser2Type:(id)arg7 teaser2Value:(id)arg8 referralURL:(id)arg9 blend:(long long)arg10;
- (void)trackRecsStart;
- (void)trackRecsDiscoveryToggled:(_Bool)arg1;
- (void)trackMailSentEventWithTargetType:(id)arg1;
- (void)trackMenuFaqSelected;
- (void)trackMenuContactTinderSelected;
- (void)trackMenuShareSelected;
- (void)trackMenuProfileSelected;
- (void)trackMenuAppSettingsSelected;
- (void)trackMenuDiscoverySettingsSelected;
- (void)trackMenuRecommendationsSelected;
- (void)trackNetworkStatusChangedTo:(id)arg1;
- (void)trackTIIWithLocalRecs:(double)arg1;
- (void)trackTTI:(double)arg1;
- (id)analyticsStringForStackType:(long long)arg1;
- (void)trackRecommendationsRequestFinished:(double)arg1 stackType:(long long)arg2 totalTime:(double)arg3 requestIndex:(long long)arg4;
- (void)trackRecommendationsRequestStarted:(double)arg1 stackType:(long long)arg2 requestIndex:(long long)arg3;
- (void)trackAuthInterval:(double)arg1;
- (void)trackExistingUserAuthInterval:(double)arg1;
- (void)trackApplicationBecameActive:(double)arg1;
- (void)trackClientEventWithPathElements:(id)arg1 withParameters:(id)arg2 target:(long long)arg3;
- (void)trackClientEventWithPathElements:(id)arg1 withParameters:(id)arg2;
- (void)trackClientEventProperties:(id)arg1;
- (id)englishStringFromLocalized:(id)arg1;
- (void)trackSparks:(id)arg1 properties:(id)arg2;
- (void)trackAllAnalyticsForEvent:(id)arg1 properties:(id)arg2;
- (void)trackSparksEvent:(id)arg1 properties:(id)arg2;
@property(readonly, nonatomic) SPKTracker *sparksTracker;
@property(readonly, nonatomic) TNDRLeanplumUserAttributeTracker *leanplumAttributeTracker;
@property(readonly, nonatomic) TNDRCoreDataService *dataService;
@property(readonly, nonatomic) _TtC6Tinder9AppsFlyer *appsFlyer;
@property(readonly, nonatomic) TNDRLeanplumTracker *leanplumTracker;
@property(readonly, nonatomic) TNDRCurrentUser *currentUser;
@property(readonly, nonatomic) TNDRDeepLinker *sharedDeepLinker;
- (void)trackViewedEditGenderPage;
- (void)trackGenderVisibilitySettingChangedWithShowGenderOnProfile:(_Bool)arg1;
- (void)trackCustomGenderSettingsChangedWithGender:(id)arg1 showGenderOnProfile:(_Bool)arg2 includeInSearchesFor:(long long)arg3;
- (id)addErrorProperties:(id)arg1 toDictionary:(id)arg2;
- (id)addTransactionProperties:(id)arg1 toDictionary:(id)arg2;
- (id)addEventName:(id)arg1 asPropertyOfDictionary:(id)arg2;
- (void)trackPurchaseLogEvent:(id)arg1 transactions:(id)arg2 properties:(id)arg3;
- (void)trackPurchaseLogEvent:(id)arg1 transaction:(id)arg2 properties:(id)arg3;
- (void)trackPurchaseLogEvent:(id)arg1 error:(id)arg2 properties:(id)arg3;
- (void)trackPurchaseLogEvent:(id)arg1 properties:(id)arg2;
- (void)trackPermissionGrantWithDevicePermissionType:(long long)arg1 isGranted:(_Bool)arg2;
- (void)trackPermissionPromptViewWithDevicePermissionType:(long long)arg1;
- (void)trackAccountTOSView:(_Bool)arg1;
- (void)trackAccountPrivacyPolicyView:(_Bool)arg1;
- (void)trackAccountIntroFeatureView:(unsigned long long)arg1;
- (void)trackAccountViewIntro;
- (void)trackLogoutSuccessAndIsAuthV2:(_Bool)arg1;
- (void)trackLogoutStartWithMethodType:(long long)arg1 isAuthV2:(_Bool)arg2;
- (void)trackAppSessionEnd;
- (void)trackAppSessionStart;
- (id)stringFromErrorViewType:(long long)arg1;
- (void)trackErrorViewWithType:(long long)arg1 isAuthV2:(_Bool)arg2;
- (void)trackAgeGenderVerificationView;
- (void)trackSMSValidationCancel;
- (void)trackSMSValidationThankYouView;
- (void)trackSMSValidationEnterCodeView;
- (void)trackSMSValidationEnterPhoneNumberView;
- (void)trackSMSValidationClientEventWithProperties:(id)arg1;
- (id)stringFromAuthMethodType:(long long)arg1;
- (void)trackAuthSuccessWithMethodType:(long long)arg1 isNewUser:(_Bool)arg2 isAuthV2:(_Bool)arg3;
- (void)trackLoginErrorWithCode:(long long)arg1 methodType:(long long)arg2 isAuthV2:(_Bool)arg3;
- (void)trackLoginErrorWithCode:(long long)arg1 hasCachedAuthToken:(_Bool)arg2 methodType:(long long)arg3 isAuthV2:(_Bool)arg4;
- (void)trackLoginSuccessWithTimeElapsed:(double)arg1 isNewUser:(_Bool)arg2 methodType:(long long)arg3 isAuthV2:(_Bool)arg4;
- (void)trackOnboardingErrorWithProperties:(id)arg1;
- (void)trackOnboardingEventWithProperties:(id)arg1;
- (void)trackAccountKitViewWithEventCode:(unsigned long long)arg1;
- (void)trackLoginStartWithMethodType:(long long)arg1 isAuthV2:(_Bool)arg2;
- (void)trackOAuthPermissionsWithMethodType:(long long)arg1 deniedPermissions:(id)arg2;
- (void)trackOAuthCancelWithMethodType:(long long)arg1 isAuthV2:(_Bool)arg2;
- (void)trackOAuthErrorWithCode:(long long)arg1 methodType:(long long)arg2 isAuthV2:(_Bool)arg3;
- (void)trackOAuthSuccessWithMethodType:(long long)arg1 isAuthV2:(_Bool)arg2;
- (void)trackOAuthPresentUIWithMethodType:(long long)arg1 isAuthV2:(_Bool)arg2;
- (void)trackAuthStartWithMethodType:(long long)arg1 authFrom:(long long)arg2 isAuthV2:(_Bool)arg3;
- (void)trackAuthExperimentWithVariant:(id)arg1;
- (void)trackFacebookPolicyButtonTapEvent;
- (void)trackAccountKitButtonTapEvent;
- (void)trackFacebookButtonTapEventWithAccountKitButtonVisible:(_Bool)arg1;
- (void)trackAuthEvent:(id)arg1 properties:(id)arg2;
- (void)trackPhotoOptimizerSawTopPhoto;
- (void)trackPhotoOptimizerPushReceived:(id)arg1;
- (void)trackPhotoOptimizerEnabledFromProfile:(_Bool)arg1;
- (void)trackClientMatchEventWithMatchSection:(id)arg1 matchAction:(id)arg2 otherID:(id)arg3 groupID:(id)arg4 matchPosition:(id)arg5 matchType:(id)arg6 button:(id)arg7 reason:(id)arg8 position:(id)arg9;
- (void)trackClientProfileEventWithProfileSection:(id)arg1 profileElement:(id)arg2 profileAction:(id)arg3 otherID:(id)arg4 numPhotosSeen:(id)arg5 hasBio:(_Bool)arg6 isMatch:(_Bool)arg7 spotifyAnthemSeen:(_Bool)arg8 spotifyAnthemPlayed:(_Bool)arg9 numSpotifyArtistsSeen:(id)arg10 numSpotifyArtistsPlayed:(id)arg11 numInstagramThumbnailsSeen:(id)arg12 numInstagramPhotosSeen:(id)arg13 reason:(id)arg14 button:(id)arg15 position:(id)arg16;
- (void)sendEventToServer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)trackClientMessageStandardsEventFor:(id)arg1 genderVersion:(id)arg2 position:(id)arg3;
- (void)trackClientChatEventWithChatSection:(id)arg1 chatElement:(id)arg2 chatAction:(id)arg3 matchID:(id)arg4 otherID:(id)arg5 groupID:(id)arg6 numMessagesMe:(id)arg7 numMessagesOther:(id)arg8 lastMessageFrom:(id)arg9 hasUnsentMessage:(_Bool)arg10 matchType:(id)arg11 userSuperlikedMatch:(_Bool)arg12 matchSuperlikedUser:(_Bool)arg13 reason:(id)arg14 button:(id)arg15 position:(id)arg16;
- (void)trackUserDidReturnFromSMSWith:(id)arg1;
- (void)trackUserDidTapInviteFriendSelectWith:(long long)arg1;
- (void)trackUserDidToggleSelectRecsOn:(_Bool)arg1;
- (void)trackUserDidOpenSelectSettings;
- (void)trackUserDidDismissSelectWelcomeView;
- (void)trackUserDidSeeSelectWelcomeView;
- (void)trackClientDialogEventWithPage:(id)arg1 action:(id)arg2;
- (void)trackClientSettingsEventWithSettings:(id)arg1;

@end

