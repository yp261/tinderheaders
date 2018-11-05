//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRBasePaywallViewController.h"

@class NSString, UIColor;

@interface TNDRSuperLikePaywallV2ViewController : TNDRBasePaywallViewController
{
    // Error parsing type: , name: superLikePaywallStyleForAnalytics
    // Error parsing type: , name: userID
}

+ (id)viewControllerNavigationKey;
+ (double)paywallVersion;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)superLikeButton;
- (void)trackPaywallDismiss;
- (void)trackPaywallSelectAtIndexPath:(id)arg1;
@property(nonatomic, readonly) long long colorVariant;
@property(nonatomic, readonly) long long paywallStyle;
@property(nonatomic, readonly) UIColor *tintColor;
- (id)carouselItems;
@property(nonatomic, readonly) unsigned long long paywallType;
@property(nonatomic, readonly) NSString *getTinderPlusSubtitle;
@property(nonatomic, readonly) NSString *purchaseConsumableTitle;
- (void)trackPaywallView;
- (void)animateIfNeededWithHeader:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaywallViewModel:(id)arg1 encounteredFrom:(unsigned long long)arg2 featureAdvertised:(long long)arg3 parameters:(id)arg4 currentUser:(id)arg5;
@property(nonatomic, readonly) NSString *outOfConsumablesKey;
@property(nonatomic, readonly) _Bool useBlueStyle;
@property(nonatomic, readonly) NSString *userID; // @synthesize userID;
@property(nonatomic, readonly) long long superLikePaywallStyleForAnalytics; // @synthesize superLikePaywallStyleForAnalytics;

@end

