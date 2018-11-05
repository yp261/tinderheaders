//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, CLPlacemark, NSString;

@interface TNDRPlacemark : NSObject
{
    CLPlacemark *_placemark;
    NSString *_countryCode;
    NSString *_country;
    NSString *_state;
    NSString *_county;
    NSString *_city;
    NSString *_neighborhood;
    CLLocation *_location;
}

@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *neighborhood; // @synthesize neighborhood=_neighborhood;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *county; // @synthesize county=_county;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy) CLPlacemark *placemark; // @synthesize placemark=_placemark;
- (void).cxx_destruct;
- (id)initWithCountryCode:(id)arg1 country:(id)arg2 state:(id)arg3 county:(id)arg4 city:(id)arg5 neighborhood:(id)arg6;
- (id)initWithPlacemark:(id)arg1;

@end

