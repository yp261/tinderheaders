//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNotificationCenter, TNDRCurrentUser, TNDRProductIDsModel, _TtC6Tinder14PurchasesModel;

@interface TNDRProductsManager : NSObject
{
    _Bool _paywallBeingShownToUser;
    _TtC6Tinder14PurchasesModel *_purchasesModel;
    TNDRProductIDsModel *_plusProductIDModel;
    TNDRProductIDsModel *_superlikeProductIDModel;
    TNDRProductIDsModel *_boostProductIDModel;
    TNDRProductIDsModel *_fastMatchProductIDModel;
    TNDRCurrentUser *_currentUser;
    NSNotificationCenter *_notificationCenter;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) TNDRCurrentUser *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) TNDRProductIDsModel *fastMatchProductIDModel; // @synthesize fastMatchProductIDModel=_fastMatchProductIDModel;
@property(retain, nonatomic) TNDRProductIDsModel *boostProductIDModel; // @synthesize boostProductIDModel=_boostProductIDModel;
@property(retain, nonatomic) TNDRProductIDsModel *superlikeProductIDModel; // @synthesize superlikeProductIDModel=_superlikeProductIDModel;
@property(retain, nonatomic) TNDRProductIDsModel *plusProductIDModel; // @synthesize plusProductIDModel=_plusProductIDModel;
@property(retain, nonatomic) _TtC6Tinder14PurchasesModel *purchasesModel; // @synthesize purchasesModel=_purchasesModel;
@property(nonatomic, getter=isPaywallBeingShownToUser) _Bool paywallBeingShownToUser; // @synthesize paywallBeingShownToUser=_paywallBeingShownToUser;
- (void).cxx_destruct;
- (void)reloadPurchases:(id)arg1;
- (void)requestPaywallViewModelOfType:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *activePurchasesProductIdentifiers;
@property(readonly, nonatomic) _Bool isFastMatchActive;
@property(readonly, nonatomic) _Bool isTinderPlusActive;
- (_Bool)areGoldProductsSameAs:(id)arg1;
- (void)userViewedDarkDiscountedPaywallViewModel:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setupPurchaseViewModel;
- (void)handleDiscountingPaywallAutoOpenForViewModel:(id)arg1;
- (void)requestPaywallInformation;
- (id)skusOfferedArray;
- (id)allProductIDs;
- (void)precacheProductsWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestFastMatchPaywallInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestSuperlikePaywallInformationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isDiscountActive;
- (void)showInAppDiscountReminder;
- (void)showPaywallForLastHourOfDiscountFromPush:(unsigned long long)arg1;
- (void)requestBoostPaywallInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestSubscriptionPaywallInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)createProductIDViewModels;
- (void)createPlusProductIDViewModelWithGraceMode:(_Bool)arg1;
- (void)clearPaywallInformation;
- (void)registerNotifications;
- (void)dealloc;
- (id)initWithCurrentUser:(id)arg1 notificationCenter:(id)arg2;

@end

