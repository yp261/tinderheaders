//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SKProduct;

@interface _TtC6Tinder19PurchaseableProduct : NSObject
{
    // Error parsing type: , name: productID
    // Error parsing type: , name: isBase
    // Error parsing type: , name: isPrimary
    // Error parsing type: , name: discountPercentage
    // Error parsing type: , name: originalProduct
    // Error parsing type: , name: type
    // Error parsing type: , name: kind
    // Error parsing type: , name: skProduct
    // Error parsing type: , name: quantity
}

+ (id)priceStringFrom:(double)arg1 locale:(id)arg2;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWith:(id)arg1 originalProduct:(id)arg2;
@property(nonatomic, readonly) long long quantity; // @synthesize quantity;
@property(nonatomic, retain) SKProduct *skProduct; // @synthesize skProduct;
@property(nonatomic, readonly) long long kind; // @synthesize kind;
@property(nonatomic, readonly) long long type; // @synthesize type;
@property(nonatomic, readonly) _TtC6Tinder19PurchaseableProduct *originalProduct; // @synthesize originalProduct;
@property(nonatomic, readonly) NSNumber *discountPercentage; // @synthesize discountPercentage;
@property(nonatomic, readonly) _Bool isPrimary; // @synthesize isPrimary;
@property(nonatomic, readonly) _Bool isBase; // @synthesize isBase;
@property(nonatomic, readonly) NSString *productID; // @synthesize productID;
@property(nonatomic, readonly) NSString *perUnitPriceString;
@property(nonatomic, readonly) NSString *perUnitSuffix;

@end

