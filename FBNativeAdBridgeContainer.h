//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBAdBridgeContainer.h"

@class FBNativeAd, NSString;

@interface FBNativeAdBridgeContainer : FBAdBridgeContainer
{
    FBNativeAd *_nativeAd;
    CDUnknownFunctionPointerType _nativeAdDidLoadCallback;
    CDUnknownFunctionPointerType _nativeAdDidClickCallback;
    CDUnknownFunctionPointerType _nativeAdDidFailWithErrorCallback;
    CDUnknownFunctionPointerType _nativeAdWillLogImpressionCallback;
    CDUnknownFunctionPointerType _nativeAdDidFinishHandlingClickCallback;
}

@property(nonatomic) CDUnknownFunctionPointerType nativeAdDidFinishHandlingClickCallback; // @synthesize nativeAdDidFinishHandlingClickCallback=_nativeAdDidFinishHandlingClickCallback;
@property(nonatomic) CDUnknownFunctionPointerType nativeAdWillLogImpressionCallback; // @synthesize nativeAdWillLogImpressionCallback=_nativeAdWillLogImpressionCallback;
@property(nonatomic) CDUnknownFunctionPointerType nativeAdDidFailWithErrorCallback; // @synthesize nativeAdDidFailWithErrorCallback=_nativeAdDidFailWithErrorCallback;
@property(nonatomic) CDUnknownFunctionPointerType nativeAdDidClickCallback; // @synthesize nativeAdDidClickCallback=_nativeAdDidClickCallback;
@property(nonatomic) CDUnknownFunctionPointerType nativeAdDidLoadCallback; // @synthesize nativeAdDidLoadCallback=_nativeAdDidLoadCallback;
@property(retain, nonatomic) FBNativeAd *nativeAd; // @synthesize nativeAd=_nativeAd;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dispose;
- (void)nativeAdDidFinishHandlingClick:(id)arg1;
- (void)nativeAdDidClick:(id)arg1;
- (void)nativeAd:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeAdWillLogImpression:(id)arg1;
- (void)nativeAdDidLoad:(id)arg1;
- (id)initWithNativeAd:(id)arg1 withUniqueId:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

