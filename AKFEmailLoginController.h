//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKFAccountKitEmailLoginDelegate-Protocol.h"
#import "AKFEmailCheckViewControllerDelegate-Protocol.h"
#import "AKFEmailLoginViewControllerDelegate-Protocol.h"
#import "AKFLoadingViewControllerDelegate-Protocol.h"
#import "AKFLoginController-Protocol.h"

@class AKFAccountKit, AKFAppEventsLogger, AKFEmailLoginFlowManager, AKFNavigationController, NSString;

@interface AKFEmailLoginController : NSObject <AKFAccountKitEmailLoginDelegate, AKFEmailCheckViewControllerDelegate, AKFEmailLoginViewControllerDelegate, AKFLoadingViewControllerDelegate, AKFLoginController>
{
    AKFAccountKit *_accountKit;
    AKFAppEventsLogger *_appEventsLogger;
    AKFEmailLoginFlowManager *_emailLoginFlowManager;
    NSString *_initialAuthState;
    AKFNavigationController *_navigationController;
}

- (void).cxx_destruct;
- (void)_resetEmailFlowManagerIfNecessary;
@property(readonly, nonatomic) unsigned long long loginType;
- (void)cancelLogin;
- (void)loadingViewControllerDidCancel:(id)arg1;
- (void)emailCheckViewControllerDidTapResendEmail:(id)arg1;
- (void)emailLoginViewController:(id)arg1 didCompleteWithEmail:(id)arg2;
- (id)appEventsLogger;
- (void)accountKitEmailLoginDidStart:(id)arg1;
- (void)accountKit:(id)arg1 emailLoginDidFailWithError:(id)arg2;
- (void)accountKit:(id)arg1 emailLoginDidCompleteWithAuthorizationCode:(id)arg2 state:(id)arg3;
- (void)accountKit:(id)arg1 emailLoginDidCompleteWithToken:(id)arg2 state:(id)arg3;
- (id)startWithEmail:(id)arg1 state:(id)arg2;
- (id)resumeWithEmail:(id)arg1;
- (id)initWithAccountKit:(id)arg1 loggerRef:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

