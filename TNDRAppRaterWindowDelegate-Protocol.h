//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TNDRAppRaterWindowDelegate <NSObject>
- (long long)appRaterWindowRequestingCachedStarRating;
- (void)appRaterWindowRequestsSendingFeedbackText:(NSString *)arg1 andStarRating:(long long)arg2;
- (void)appRaterWindowSelectedStarRating:(long long)arg1;
- (void)appRaterWindowRequestedToClearCurrentRating;
- (void)appRaterWindowDidReviewPositively:(_Bool)arg1;
- (void)appRaterWindowDidRequestToReviewApp;
@end

