//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRAsyncOperation.h"

@class TNDRCoreDataService;

@interface TNDRDeleteOrphanedPhotosOperation : TNDRAsyncOperation
{
    _Bool _shouldCancel;
}

@property(nonatomic) _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
- (void)cancel;
- (void)executeAsyncTask;
@property(readonly, nonatomic) TNDRCoreDataService *dataService;

@end
