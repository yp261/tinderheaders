//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NBAsYouTypeFormatter, NBMetadataHelper, NBPhoneNumber, NBPhoneNumberUtil, NSString;

@interface TNDRPhoneNumberValidator : NSObject
{
    NSString *_phoneNumberString;
    NSString *_regionCode;
    NBPhoneNumberUtil *_phoneNumberUtil;
    NBPhoneNumber *_phoneNumber;
    NBMetadataHelper *_metadataHelper;
    NBAsYouTypeFormatter *_asYouTypeFormatter;
}

@property(retain, nonatomic) NBAsYouTypeFormatter *asYouTypeFormatter; // @synthesize asYouTypeFormatter=_asYouTypeFormatter;
@property(retain, nonatomic) NBMetadataHelper *metadataHelper; // @synthesize metadataHelper=_metadataHelper;
@property(retain, nonatomic) NBPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NBPhoneNumberUtil *phoneNumberUtil; // @synthesize phoneNumberUtil=_phoneNumberUtil;
@property(copy, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
@property(copy, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString=_phoneNumberString;
- (void).cxx_destruct;
- (void)logError:(id)arg1;
- (id)updatePhoneNumber:(id)arg1;
- (id)updateRegionCode:(id)arg1;
@property(readonly, copy, nonatomic) NSString *logString;
@property(readonly, copy, nonatomic) NSString *internationalFormattedNumber;
@property(readonly, copy, nonatomic) NSString *e164FormattedNumber;
@property(readonly, copy, nonatomic) NSString *countryCodeFormatted;
@property(readonly, copy, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) _Bool isValidPhoneNumber;

@end
