//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL, TNDRCurrentUser, UIImage;

@interface TNDRSelectSettingsViewModel : NSObject
{
    // Error parsing type: , name: currentUser
    // Error parsing type: , name: profilePhoto
    // Error parsing type: , name: inviteURL
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithCurrentUser:(id)arg1 avatarImage:(id)arg2;
- (void)refreshData;
@property(nonatomic, copy) NSURL *inviteURL; // @synthesize inviteURL;
@property(nonatomic, retain) UIImage *profilePhoto; // @synthesize profilePhoto;
@property(nonatomic, readonly) NSDate *memberSince;
@property(nonatomic) _Bool isSelectActive;
@property(nonatomic, readonly) _Bool hasNominationsRemaining;
@property(nonatomic, readonly) long long nominationsRemaining;
@property(nonatomic, readonly) NSString *firstName;
@property(nonatomic, readonly) TNDRCurrentUser *currentUser; // @synthesize currentUser;

@end
