//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SKProductsRequest, TNDRAnalyticsTracker, TNDRCurrentUser, TNDRProductIDsModel, TNDRSKProductsRequester, _TtC6Tinder14PurchasesModel, _TtC6Tinder19PurchaseableProduct;

@interface TNDRPaywallViewModel : NSObject
{
    TNDRProductIDsModel *_productIDsModel;
    long long _productType;
    NSArray *_productsForComparing;
    _TtC6Tinder19PurchaseableProduct *_goldProduct;
    _TtC6Tinder19PurchaseableProduct *_goldReferenceProduct;
    SKProductsRequest *_currentProductRequest;
    TNDRSKProductsRequester *_productRequester;
    TNDRAnalyticsTracker *_analyticsTracker;
    TNDRCurrentUser *_currentUser;
    _TtC6Tinder14PurchasesModel *_purchasesModel;
    NSArray *_products;
}

+ (id)unitPluralString;
+ (id)unitSingularString;
@property(copy, nonatomic) NSArray *products; // @synthesize products=_products;
@property(retain, nonatomic) _TtC6Tinder14PurchasesModel *purchasesModel; // @synthesize purchasesModel=_purchasesModel;
@property(retain, nonatomic) TNDRCurrentUser *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) TNDRAnalyticsTracker *analyticsTracker; // @synthesize analyticsTracker=_analyticsTracker;
@property(retain, nonatomic) TNDRSKProductsRequester *productRequester; // @synthesize productRequester=_productRequester;
@property(retain, nonatomic) SKProductsRequest *currentProductRequest; // @synthesize currentProductRequest=_currentProductRequest;
@property(retain, nonatomic) _TtC6Tinder19PurchaseableProduct *goldReferenceProduct; // @synthesize goldReferenceProduct=_goldReferenceProduct;
@property(retain, nonatomic) _TtC6Tinder19PurchaseableProduct *goldProduct; // @synthesize goldProduct=_goldProduct;
@property(copy, nonatomic) NSArray *productsForComparing; // @synthesize productsForComparing=_productsForComparing;
@property(readonly, nonatomic) long long productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) TNDRProductIDsModel *productIDsModel; // @synthesize productIDsModel=_productIDsModel;
- (void).cxx_destruct;
- (id)productForBaseMultipler;
- (id)indexPathForPrimaryProduct;
- (void)attemptPurchaseForProduct:(id)arg1 from:(unsigned long long)arg2 incentives:(id)arg3 incentivesOrdering:(id)arg4 paywallGroup:(long long)arg5 featuresForAnalytics:(id)arg6 colorVariant:(long long)arg7 completion:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
- (void)requestProductsForProductIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)productMatchingIdentifier:(id)arg1 inProducts:(id)arg2;
- (id)productMatchingIdentifierInCurrentProducts:(id)arg1;
- (void)reloadProductsWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadGoldProducts;
- (void)updateWithDownloadedProducts:(id)arg1;
- (void)loadProductsWithCompletion:(CDUnknownBlockType)arg1;
- (long long)quantityForIndexPath:(id)arg1;
- (id)regularProductForIndexPath:(id)arg1;
- (id)productForIndexPath:(id)arg1;
@property(readonly, nonatomic) long long paywallVersion;
- (double)maxDiscount;
- (id)savingsForDiscountedProduct:(id)arg1 comparedToReferenceProduct:(id)arg2;
- (id)savingsStringForPrimaryProduct:(id)arg1 baseProduct:(id)arg2;
- (double)discountForDiscountedProduct:(id)arg1 comparedToReferenceProduct:(id)arg2;
- (id)savingsForProductAtIndexPath:(id)arg1;
- (id)comparisonProductPriceStringForIndexPath:(id)arg1;
- (id)productIdentifierForIndexPath:(id)arg1;
- (id)flavorTextForIndexPath:(id)arg1;
- (id)numberOfUnitsForIndexPath:(id)arg1 textColor:(id)arg2 style:(long long)arg3;
- (id)strikeThroughPriceForIndexPath:(id)arg1;
- (id)perUnitPriceForIndexPath:(id)arg1;
@property(readonly, nonatomic) NSString *goldSavingsText;
@property(readonly, nonatomic) NSString *goldRibbonText;
@property(readonly, nonatomic) NSString *goldUpgradeText;
@property(readonly, nonatomic) NSString *goldUpgradePerUnitPrice;
@property(readonly, nonatomic) NSString *goldPerUnitPrice;
- (id)savingsStringForIndexPath:(id)arg1;
- (id)productPriceForProduct:(id)arg1;
- (id)dictionaryWithAnalyticsTrackAllProductsPaywallInfo;
- (id)discountedBasePriceForAnalytics;
- (id)basePriceForAnalytics;
- (id)localeForAnalytics;
- (id)currentCurrencyForAnalytics;
- (id)skuArrayForAnalytics;
- (id)campaignVariant;
- (id)campaignName;
- (id)productsArrayForAnalytics;
- (id)indexPathForProductIdentifier:(id)arg1;
- (void)trackTinderPlusSKUsOffered;
- (void)trackUserRestoredProduct:(id)arg1 incentives:(id)arg2 incentivesOrdering:(id)arg3 featuresForAnalytics:(id)arg4 success:(_Bool)arg5;
- (void)trackUserRestoredProductFailed;
- (void)trackUserExitingPaywallWithFeatures:(id)arg1 encounteredFrom:(unsigned long long)arg2 incentives:(id)arg3 incentivesOrdering:(id)arg4 selectedProduct:(id)arg5 paywallGroup:(long long)arg6 paywallVersion:(long long)arg7;
- (void)trackUserWantsToMakePurchaseOfSelectedSKU:(id)arg1 encounteredFrom:(unsigned long long)arg2 incentives:(id)arg3 incentivesOrdering:(id)arg4 featuresForAnalytics:(id)arg5 paywallGroup:(long long)arg6 paywallVersion:(long long)arg7;
- (_Bool)showDiscountedPaywall;
@property(readonly, nonatomic) NSString *timeRemainingForDiscountExpiration;
- (id)currentDate;
- (long long)numberOfProducts;
- (id)combinedProductIdentifiers;
- (long long)currentSubscriptionTerms;
@property(readonly, nonatomic) _Bool shouldShowGoldProduct;
- (id)initWithProductIDModel:(id)arg1 productType:(long long)arg2;
- (id)baseProductID;
- (void)trackFastMatchSKUOffered;

@end
