//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRAsyncOperation.h"

@class NSString, TNDRCoreDataService;

@interface TNDRUserReferrerMergeOperation : TNDRAsyncOperation
{
    NSString *_userID;
    NSString *_referrerID;
}

@property(copy, nonatomic) NSString *referrerID; // @synthesize referrerID=_referrerID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)executeAsyncTask;
- (id)initWithUserID:(id)arg1 referrerID:(id)arg2;
@property(readonly, nonatomic) TNDRCoreDataService *dataService;

@end

