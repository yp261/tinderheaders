//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADActiveViewGMSGHandlerDelegate-Protocol.h"
#import "GADAdViewDelegate-Protocol.h"

@class GADActiveViewGMSGHandler, GADAdView, GADAdViewDelegate, GADCSI, GADSDKCoreGMSGHandler, NSMapTable, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface GADSDKCoreWebView : NSObject <GADActiveViewGMSGHandlerDelegate, GADAdViewDelegate>
{
    long long _state;
    _Bool _hasSDKCoreLoadedAtLeastOnce;
    NSMutableArray *_pendingJSCommands;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_commandQueue;
    NSMutableSet *_SDKCoreObservers;
    GADAdViewDelegate *_adViewDelegate;
    GADAdView *_adView;
    GADActiveViewGMSGHandler *_activeViewGMSGHandler;
    NSMapTable *_activeViewObservers;
    NSMutableSet *_runningActiveViewObserverIdentifiers;
    GADCSI *_CSI;
    GADSDKCoreGMSGHandler *_SDKCoreGMSGHandler;
}

@property(retain, nonatomic) GADSDKCoreGMSGHandler *SDKCoreGMSGHandler; // @synthesize SDKCoreGMSGHandler=_SDKCoreGMSGHandler;
- (void).cxx_destruct;
- (_Bool)isActiveViewRunning;
- (void)clearAllActiveViewInstances;
- (void)removeActiveViewObserverForActiveViewID:(unsigned long long)arg1;
- (void)setActiveViewObserver:(id)arg1 forActiveViewID:(unsigned long long)arg2;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)CSIForGMSGHandler:(id)arg1;
- (void)willRefreshSDKCore;
- (void)postJSNotification:(id)arg1 userInfo:(id)arg2;
- (void)dispatchPendingJavaScriptCommands;
- (void)enqueueJavaScriptCommand:(id)arg1;
@property _Bool hasSDKCoreLoadedAtLeastOnce;
@property long long state;
- (void)notifyAllObserversOnlyOnceThatSDKCoreRequestIsFinished;
- (void)refreshSDKCoreAndNotifyObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserverForOneTimeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (void)activeViewGMSGHandler:(id)arg1 didReceiveVisibilityNotification:(_Bool)arg2 forActiveViewID:(unsigned long long)arg3;
- (void)activeViewGMSGHandler:(id)arg1 didReceiveUntrackNotificationForActiveViewID:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

