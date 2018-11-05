//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADWebViewDelegate-Protocol.h"

@class GADScheduler, GADWebView, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface GADPinger : NSObject <GADWebViewDelegate>
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADScheduler *_scheduler;
    long long _maximumRetryURLCount;
    long long _URLRetryCount;
    NSMutableArray *_retryGroupKeys;
    NSMutableSet *_pingedURLs;
    NSMutableArray *_webViewPingQueue;
    GADWebView *_webView;
    _Bool _reloadRequired;
    _Bool _enableHTTPWebViewPings;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithTitle:(id)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)removeRetryURLString:(id)arg1 retryGroupKey:(id)arg2;
- (void)storeRetryURLString:(id)arg1 retryGroupKey:(id)arg2;
- (void)start;
- (void)pingWithRetryGroupKey:(id)arg1 URL:(id)arg2 retryURLString:(id)arg3;
- (void)pingRetryURLs;
- (void)loadFinishedWithSuccess:(_Bool)arg1;
- (void)sendNextWebViewPing;
- (void)sendPing:(id)arg1;
- (void)pingURLString:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

