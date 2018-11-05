//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (TNDRPurchaseRequest)
+ (id)addJSON:(id)arg1 toDictionary:(id)arg2;
+ (id)tndr_purchaseErrorWithStackTraceForDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (id)productRequestInvalidProductsError:(id)arg1;
+ (id)verificationFailedDueToNoReceipt;
+ (id)purchaseVerificationRequestPurchaseExpiredError;
+ (id)purchaseVerificationRequestPurchaseCancelledError;
+ (id)tndr_newPurchaseRequestWhileOneInProgress;
+ (id)noProductError;
+ (id)errorForPurchaseVerificationRequestServerResponse:(id)arg1 NSURLError:(id)arg2 json:(id)arg3;
+ (id)purchaseVerificationRequestUnknownServerError:(id)arg1 response:(id)arg2 json:(id)arg3;
+ (id)purchaseVerificationRequestUnknownServerError:(id)arg1 json:(id)arg2;
+ (id)purchasesRequestServerTimeOutWithURLError:(id)arg1;
+ (id)transactionFailedWithoutError;
+ (id)purchaseVerificationRequestFailedUserPositionInvalid;
+ (id)purchaseVerificationRequestUnexpectedErrorWithProductID:(id)arg1 json:(id)arg2;
+ (id)purchaseVerificationRequestInvalidProductWithProductID:(id)arg1;
+ (id)purchaseVerificationRequestBadServerJSONData:(id)arg1;
+ (id)purchaseVerificationRequestCantAssignToCurrentUserWithProductID:(id)arg1;
+ (id)noTransactionAfterSuccessWithProductToPurchase:(id)arg1 productIDsSeen:(id)arg2;
+ (id)purchaseVerificationRequestDuplicatePurchaseWithProductID:(id)arg1;
+ (id)purchaseVerificationRequestIneligiblePurchaseWithProductID:(id)arg1;
+ (id)purchaseVerificationRequestInvalidPurchaseWithProductID:(id)arg1;
+ (id)purchasesRequestCancelledByClientTimeOut;
- (id)tndr_sparksDictionaryForError;
@end

