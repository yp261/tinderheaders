//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;
@protocol _TtP6Tinder24HomeMerchandisingPaywall_;

@interface _TtC6Tinder37HomeMerchandisingCurrentUserViewModel : NSObject
{
    // Error parsing type: , name: currentUser
    // Error parsing type: , name: paywallDelegate
    // Error parsing type: , name: consumables
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic, copy) NSArray *consumables; // @synthesize consumables;
@property(nonatomic) __weak id <_TtP6Tinder24HomeMerchandisingPaywall_> paywallDelegate; // @synthesize paywallDelegate;
@property(nonatomic, readonly) long long gender;
@property(nonatomic, readonly) NSDate *rateLimitingLikesResetDate;
@property(nonatomic, readonly) _Bool isRateLimited;
@property(nonatomic, readonly) NSDate *boostAllocationResetsAt;
@property(nonatomic, readonly) NSDate *currentBoostSessionExpiresAt;
@property(nonatomic, readonly) _Bool isBoostCurrentlyActive;
@property(nonatomic, readonly) long long boostsRemaining;
@property(nonatomic, readonly) long long superLikesRemaining;
@property(nonatomic, readonly) _Bool isTinderPlusSubscriber;
@property(nonatomic, readonly) _Bool isTinderPlusFeatureEnabled;

@end
