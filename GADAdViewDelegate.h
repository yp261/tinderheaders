//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdViewDelegate-Protocol.h"

@class GADOpener, NSMutableArray, NSString;

@interface GADAdViewDelegate : NSObject <GADAdViewDelegate>
{
    NSMutableArray *_GMSGHandlers;
    _Bool _contentRendered;
    _Bool _hasLoadedAtLeastOnce;
    GADOpener *_opener;
}

@property(readonly, nonatomic) _Bool hasLoadedAtLeastOnce; // @synthesize hasLoadedAtLeastOnce=_hasLoadedAtLeastOnce;
@property(readonly, nonatomic) GADOpener *opener; // @synthesize opener=_opener;
- (void).cxx_destruct;
- (id)CSIForGMSGHandler:(id)arg1;
- (void)adViewWillLoadContent:(id)arg1;
- (void)adView:(id)arg1 didMoveToPlacement:(id)arg2;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)handlesClicks;
- (void)addGMSGHandler:(id)arg1;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)adViewDidStartLoad:(id)arg1;
- (_Bool)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)adViewDelegateAdView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)shouldTreatNavigationTypeAsClick:(long long)arg1;
- (void)handleDeeplinkPlusURL:(id)arg1;
- (void)handleGMSGURL:(id)arg1 adView:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

