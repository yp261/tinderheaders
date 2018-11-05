//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString, TNDRMetaInstagram;

@interface TNDRMetaUser : NSObject
{
    _Bool _discoverIsEnabled;
    _Bool _groupsDiscoverable;
    _Bool _groupsOnly;
    _Bool _groupsEnabled;
    _Bool _isProcessingPhotos;
    _Bool _isTraveling;
    _Bool _hidesAds;
    _Bool _hidesAge;
    _Bool _hidesDistance;
    _Bool _photoOptimizerEnable;
    _Bool _photoOptimizerHasResult;
    NSString *_userID;
    NSNumber *_userNumber;
    NSString *_bio;
    double _distanceFilter;
    long long _genderFilterType;
    long long _ageFilterMin;
    long long _ageFilterMax;
    long long _genderType;
    NSDate *_birthdate;
    NSDate *_createDate;
    NSString *_facebookID;
    NSString *_home;
    NSString *_firstName;
    NSString *_blend;
    NSString *_tinderID;
    NSArray *_photos;
    NSNumber *_connectionCount;
    TNDRMetaInstagram *_instagram;
    NSDate *_instagramDisconnectedDate;
    NSArray *_interests;
    NSArray *_badges;
    NSString *_publicUserName;
    NSArray *_jobs;
    NSArray *_schools;
    NSString *_whoSeesMe;
}

@property(nonatomic) _Bool photoOptimizerHasResult; // @synthesize photoOptimizerHasResult=_photoOptimizerHasResult;
@property(nonatomic) _Bool photoOptimizerEnable; // @synthesize photoOptimizerEnable=_photoOptimizerEnable;
@property(copy, nonatomic) NSString *whoSeesMe; // @synthesize whoSeesMe=_whoSeesMe;
@property(nonatomic) _Bool hidesDistance; // @synthesize hidesDistance=_hidesDistance;
@property(nonatomic) _Bool hidesAge; // @synthesize hidesAge=_hidesAge;
@property(nonatomic) _Bool hidesAds; // @synthesize hidesAds=_hidesAds;
@property(copy, nonatomic) NSArray *schools; // @synthesize schools=_schools;
@property(copy, nonatomic) NSArray *jobs; // @synthesize jobs=_jobs;
@property(nonatomic) _Bool isTraveling; // @synthesize isTraveling=_isTraveling;
@property(copy, nonatomic) NSString *publicUserName; // @synthesize publicUserName=_publicUserName;
@property(copy, nonatomic) NSArray *badges; // @synthesize badges=_badges;
@property(copy, nonatomic) NSArray *interests; // @synthesize interests=_interests;
@property(retain, nonatomic) NSDate *instagramDisconnectedDate; // @synthesize instagramDisconnectedDate=_instagramDisconnectedDate;
@property(retain, nonatomic) TNDRMetaInstagram *instagram; // @synthesize instagram=_instagram;
@property(retain, nonatomic) NSNumber *connectionCount; // @synthesize connectionCount=_connectionCount;
@property(nonatomic) _Bool isProcessingPhotos; // @synthesize isProcessingPhotos=_isProcessingPhotos;
@property(copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(copy, nonatomic) NSString *tinderID; // @synthesize tinderID=_tinderID;
@property(nonatomic) _Bool groupsEnabled; // @synthesize groupsEnabled=_groupsEnabled;
@property(nonatomic) _Bool groupsOnly; // @synthesize groupsOnly=_groupsOnly;
@property(nonatomic) _Bool groupsDiscoverable; // @synthesize groupsDiscoverable=_groupsDiscoverable;
@property(copy, nonatomic) NSString *blend; // @synthesize blend=_blend;
@property(nonatomic) _Bool discoverIsEnabled; // @synthesize discoverIsEnabled=_discoverIsEnabled;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *home; // @synthesize home=_home;
@property(copy, nonatomic) NSString *facebookID; // @synthesize facebookID=_facebookID;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSDate *birthdate; // @synthesize birthdate=_birthdate;
@property(nonatomic) long long genderType; // @synthesize genderType=_genderType;
@property(nonatomic) long long ageFilterMax; // @synthesize ageFilterMax=_ageFilterMax;
@property(nonatomic) long long ageFilterMin; // @synthesize ageFilterMin=_ageFilterMin;
@property(nonatomic) long long genderFilterType; // @synthesize genderFilterType=_genderFilterType;
@property(nonatomic) double distanceFilter; // @synthesize distanceFilter=_distanceFilter;
@property(copy, nonatomic) NSString *bio; // @synthesize bio=_bio;
@property(retain, nonatomic) NSNumber *userNumber; // @synthesize userNumber=_userNumber;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

