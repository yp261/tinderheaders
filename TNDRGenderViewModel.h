//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TNDRCurrentUser;

@interface TNDRGenderViewModel : NSObject
{
    _Bool _showGenderOnProfile;
    NSString *_customGender;
    long long _gender;
}

@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) _Bool showGenderOnProfile; // @synthesize showGenderOnProfile=_showGenderOnProfile;
@property(copy, nonatomic) NSString *customGender; // @synthesize customGender=_customGender;
- (void).cxx_destruct;
- (_Bool)hasCustomGender;
@property(readonly, copy, nonatomic) NSString *genderForDisplay;
- (void)configWithGender:(long long)arg1 customGender:(id)arg2 showGenderOnProfile:(_Bool)arg3;
@property(readonly, nonatomic) TNDRCurrentUser *currentUser;

@end

