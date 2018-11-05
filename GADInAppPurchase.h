//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADViewController, NSArray, NSString;

@interface GADInAppPurchase : NSObject
{
    GADViewController *_adViewController;
    NSString *_productID;
    long long _quantity;
    NSArray *_reportingURLStringFormats;
    long long _purchaseStatus;
}

+ (id)stringForStatus:(long long)arg1;
+ (_Bool)quantityIsValid:(long long)arg1;
@property(nonatomic) long long purchaseStatus; // @synthesize purchaseStatus=_purchaseStatus;
@property(copy, nonatomic) NSArray *reportingURLStringFormats; // @synthesize reportingURLStringFormats=_reportingURLStringFormats;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void).cxx_destruct;
- (void)pingReportingURLStrings:(id)arg1;
- (id)expandedURLStringForURLStringFormat:(id)arg1;
- (void)reportPurchaseStatus:(long long)arg1;
- (id)description;
- (id)initWithViewController:(id)arg1;
- (id)init;

@end
