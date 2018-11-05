//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdSafariViewControllerDelegate-Protocol.h"
#import "FBInterstitialAdInternalDelegate-Protocol.h"
#import "FBStoreProductViewControllerDelegate-Protocol.h"

@class FBAdDataModel, FBInterstitialDisplayAdInternal, FBStoreProductViewController, NSDate, NSString;
@protocol FBAdCommandProcessorDelegate;

@interface FBAdCommandProcessor : NSObject <FBStoreProductViewControllerDelegate, FBAdSafariViewControllerDelegate, FBInterstitialAdInternalDelegate>
{
    id <FBAdCommandProcessorDelegate> _delegate;
    FBAdDataModel *_adDataModel;
    CDUnknownBlockType _completionHandler;
    FBInterstitialDisplayAdInternal *_interstitialAd;
    NSDate *_lastActionStartTime;
    long long _lastAdAction;
    FBStoreProductViewController *_productViewController;
}

+ (void)sendBouncebackInfo:(id)arg1 withAdAction:(long long)arg2 withRequestId:(id)arg3;
+ (_Bool)shouldInvalidate:(id)arg1;
@property(nonatomic) __weak FBStoreProductViewController *productViewController; // @synthesize productViewController=_productViewController;
@property(nonatomic) long long lastAdAction; // @synthesize lastAdAction=_lastAdAction;
@property(retain, nonatomic) NSDate *lastActionStartTime; // @synthesize lastActionStartTime=_lastActionStartTime;
@property(retain, nonatomic) FBInterstitialDisplayAdInternal *interstitialAd; // @synthesize interstitialAd=_interstitialAd;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) FBAdDataModel *adDataModel; // @synthesize adDataModel=_adDataModel;
@property(nonatomic) __weak id <FBAdCommandProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)interstitialAdDidClose:(id)arg1;
- (void)viewControllerDismissed:(id)arg1;
- (void)viewControllerCompleted:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (_Bool)isValidViewController:(id)arg1;
- (void)doneCommandProcessing;
- (void)callCompletionHandlerForCommand:(long long)arg1 withAdAction:(long long)arg2;
- (_Bool)launchURLOutOfApp:(id)arg1 withAdAction:(long long)arg2;
- (_Bool)openLinkInApp:(id)arg1;
- (_Bool)preloadProductViewControllerIfAvailable:(id)arg1;
- (_Bool)launchAppForEngagement:(id)arg1;
- (_Bool)processCommand:(id)arg1 withExtraData:(id)arg2 adDataModel:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)processCommand:(id)arg1 adDataModel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

