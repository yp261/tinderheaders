//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBAdBridgeContainer.h"

#import "FBInterstitialAdDelegate-Protocol.h"

@class FBInterstitialAd, NSString;

@interface FBInterstitialAdBridgeContainer : FBAdBridgeContainer <FBInterstitialAdDelegate>
{
    FBInterstitialAd *_interstitialAd;
    CDUnknownFunctionPointerType _interstitialAdDidClickCallback;
    CDUnknownFunctionPointerType _interstitialAdDidCloseCallback;
    CDUnknownFunctionPointerType _interstitialAdWillCloseCallback;
    CDUnknownFunctionPointerType _interstitialAdDidLoadCallback;
    CDUnknownFunctionPointerType _interstitialAdDidFailWithErrorCallback;
    CDUnknownFunctionPointerType _interstitialAdWillLogImpressionCallback;
}

@property(nonatomic) CDUnknownFunctionPointerType interstitialAdWillLogImpressionCallback; // @synthesize interstitialAdWillLogImpressionCallback=_interstitialAdWillLogImpressionCallback;
@property(nonatomic) CDUnknownFunctionPointerType interstitialAdDidFailWithErrorCallback; // @synthesize interstitialAdDidFailWithErrorCallback=_interstitialAdDidFailWithErrorCallback;
@property(nonatomic) CDUnknownFunctionPointerType interstitialAdDidLoadCallback; // @synthesize interstitialAdDidLoadCallback=_interstitialAdDidLoadCallback;
@property(nonatomic) CDUnknownFunctionPointerType interstitialAdWillCloseCallback; // @synthesize interstitialAdWillCloseCallback=_interstitialAdWillCloseCallback;
@property(nonatomic) CDUnknownFunctionPointerType interstitialAdDidCloseCallback; // @synthesize interstitialAdDidCloseCallback=_interstitialAdDidCloseCallback;
@property(nonatomic) CDUnknownFunctionPointerType interstitialAdDidClickCallback; // @synthesize interstitialAdDidClickCallback=_interstitialAdDidClickCallback;
@property(retain, nonatomic) FBInterstitialAd *interstitialAd; // @synthesize interstitialAd=_interstitialAd;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dispose;
- (void)interstitialAdWillLogImpression:(id)arg1;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)interstitialAdWillClose:(id)arg1;
- (void)interstitialAdDidClose:(id)arg1;
- (void)interstitialAdDidClick:(id)arg1;
- (id)initWithInterstitialAd:(id)arg1 withUniqueId:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

