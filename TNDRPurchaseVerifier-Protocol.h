//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TNDRPurchaseVerifier <NSObject>
@property(readonly, nonatomic) _Bool isReceiptVerificationInProgress;
@property(readonly, nonatomic) _Bool hasAppStoreReceipt;
- (void)verifyReceiptWithCompletionBlock:(void (^)(NSError *, NSSet *))arg1;
@end
