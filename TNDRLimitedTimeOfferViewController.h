//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

@class TNDRLimitedTimeOfferFooterView, TNDRLimitedTimeOfferHeaderView, TNDRPaywallViewModel;
@protocol TNDRSubscriptionPaywallViewControllerDelegate;

@interface TNDRLimitedTimeOfferViewController : TNDRDialogViewController
{
    id <TNDRSubscriptionPaywallViewControllerDelegate> _paywallDelegate;
    TNDRLimitedTimeOfferHeaderView *_discountHeaderView;
    TNDRLimitedTimeOfferFooterView *_discountFooterView;
    TNDRPaywallViewModel *_paywallViewModel;
}

+ (id)viewControllerNavigationKey;
@property(retain, nonatomic) TNDRPaywallViewModel *paywallViewModel; // @synthesize paywallViewModel=_paywallViewModel;
@property(retain, nonatomic) TNDRLimitedTimeOfferFooterView *discountFooterView; // @synthesize discountFooterView=_discountFooterView;
@property(retain, nonatomic) TNDRLimitedTimeOfferHeaderView *discountHeaderView; // @synthesize discountHeaderView=_discountHeaderView;
@property(nonatomic) __weak id <TNDRSubscriptionPaywallViewControllerDelegate> paywallDelegate; // @synthesize paywallDelegate=_paywallDelegate;
- (void).cxx_destruct;
- (void)handleGetDiscountButtonTapped:(id)arg1;
- (void)handleAcknowledgeButtonTapped:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithPaywallViewModel:(id)arg1;
- (id)currentUser;
- (id)urlManager;

@end

