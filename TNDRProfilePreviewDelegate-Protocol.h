//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TNDRUser;

@protocol TNDRProfilePreviewDelegate <NSObject>
- (void)didTapProfileDoneButton;

@optional
- (void)didTapProfilePassButton;
- (void)didTapProfileSuperLikeButton;
- (void)didTapProfileLikeButton;
- (void)didTapReportButtonForUser:(TNDRUser *)arg1;
- (void)didBlockMatchFromProfile;
@end

