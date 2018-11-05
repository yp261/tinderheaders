//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKFAccountKitEmailLoginDelegate-Protocol.h"

@class AKFAccountKit, NSString;
@protocol AKFAccessToken, AKFAccountKitEmailLoginDelegate;

@interface AKFEmailLoginFlowManager : NSObject <AKFAccountKitEmailLoginDelegate>
{
    AKFAccountKit *_accountKit;
    _Bool _valid;
    id <AKFAccountKitEmailLoginDelegate> _emailLoginDelegate;
}

@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) __weak id <AKFAccountKitEmailLoginDelegate> emailLoginDelegate; // @synthesize emailLoginDelegate=_emailLoginDelegate;
- (void).cxx_destruct;
- (id)appEventsLogger;
- (void)accountKitEmailLoginDidStart:(id)arg1;
- (void)accountKit:(id)arg1 emailLoginDidFailWithError:(id)arg2;
- (void)accountKit:(id)arg1 emailLoginDidCompleteWithAuthorizationCode:(id)arg2 state:(id)arg3;
- (void)accountKit:(id)arg1 emailLoginDidCompleteWithToken:(id)arg2 state:(id)arg3;
- (void)logInWithEmail:(id)arg1 state:(id)arg2;
- (void)cancel;
@property(readonly, nonatomic) id <AKFAccessToken> accessToken;
- (id)initWithAccountKit:(id)arg1 emailLoginDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

