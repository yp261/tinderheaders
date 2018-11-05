//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADMediationAdRequest-Protocol.h"

@class GADAdReward, NSError;
@protocol GADMRewardBasedVideoAdNetworkAdapter;

@protocol GADMRewardBasedVideoAdNetworkConnector <GADMediationAdRequest>
- (void)adapter:(id <GADMRewardBasedVideoAdNetworkAdapter>)arg1 didFailToLoadRewardBasedVideoAdwithError:(NSError *)arg2;
- (void)adapterWillLeaveApplication:(id <GADMRewardBasedVideoAdNetworkAdapter>)arg1;
- (void)adapter:(id <GADMRewardBasedVideoAdNetworkAdapter>)arg1 didRewardUserWithReward:(GADAdReward *)arg2;
- (void)adapterDidCloseRewardBasedVideoAd:(id <GADMRewardBasedVideoAdNetworkAdapter>)arg1;
- (void)adapterDidStartPlayingRewardBasedVideoAd:(id <GADMRewardBasedVideoAdNetworkAdapter>)arg1;
- (void)adapterDidOpenRewardBasedVideoAd:(id <GADMRewardBasedVideoAdNetworkAdapter>)arg1;
- (void)adapterDidReceiveRewardBasedVideoAd:(id <GADMRewardBasedVideoAdNetworkAdapter>)arg1;
- (void)adapterDidGetAdClick:(id <GADMRewardBasedVideoAdNetworkAdapter>)arg1;
- (void)adapter:(id <GADMRewardBasedVideoAdNetworkAdapter>)arg1 didFailToSetUpRewardBasedVideoAdWithError:(NSError *)arg2;
- (void)adapterDidSetUpRewardBasedVideoAd:(id <GADMRewardBasedVideoAdNetworkAdapter>)arg1;
@end

