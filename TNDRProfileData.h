//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface TNDRProfileData : NSObject
{
    long long _genderType;
    NSDate *_birthdate;
    NSDictionary *_dictionary;
}

@property(copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSDate *birthdate; // @synthesize birthdate=_birthdate;
@property(nonatomic) long long genderType; // @synthesize genderType=_genderType;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

