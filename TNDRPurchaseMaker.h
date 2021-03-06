//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SKPaymentQueue, TNDRCurrentUser;
@protocol TNDRPurchaseVerifier;

@interface TNDRPurchaseMaker : NSObject <SKPaymentTransactionObserver>
{
    _Bool _needsToBecomeSKPaymentObserver;
    id <TNDRPurchaseVerifier> _purchaseVerifier;
    NSMutableDictionary *_completionBlocks;
    NSMutableArray *_queuedTransactions;
    TNDRCurrentUser *_currentUser;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TNDRCurrentUser *currentUser; // @synthesize currentUser=_currentUser;
@property(nonatomic) _Bool needsToBecomeSKPaymentObserver; // @synthesize needsToBecomeSKPaymentObserver=_needsToBecomeSKPaymentObserver;
@property(retain, nonatomic) NSMutableArray *queuedTransactions; // @synthesize queuedTransactions=_queuedTransactions;
@property(retain, nonatomic) NSMutableDictionary *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(nonatomic) __weak id <TNDRPurchaseVerifier> purchaseVerifier; // @synthesize purchaseVerifier=_purchaseVerifier;
- (void).cxx_destruct;
- (void)performAutomaticTransactionRedeem;
- (_Bool)hasPurchaseReceipt;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)becomeSKPaymentObserver;
- (void)dealloc;
- (void)purchaseProduct:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPaymentForProduct:(id)arg1;
- (id)init;
- (id)purchaseLogger;
@property(readonly, nonatomic) SKPaymentQueue *defaultQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

