//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol TNDRHomeProfileViewDelegate <NSObject>
- (void)didRequestToOpenSelectSettingsWithAvatarImage:(UIImage *)arg1;
- (void)didRequestToOpenSettings;
- (void)didRequestToOpenPassportSettings;
- (void)didRequestToEditProfile;
- (void)didUpdateCurrentUserAvatarLastViewedPhoto:(UIImage *)arg1;
- (void)didRequestToOpenUserProfileWithFullSizeAvatar:(UIImage *)arg1 andFrame:(struct CGRect)arg2;
@end
