//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, TNDRMatchesGoingOutViewModel;

@protocol TNDRMatchesGoingOutViewModelDelegate <NSObject>
- (void)matchesGoingOutViewModel:(TNDRMatchesGoingOutViewModel *)arg1 didRefreshWithMatchesWithStatuses:(long long)arg2 userHasStatus:(_Bool)arg3;
- (void)matchesGoingOutViewModel:(TNDRMatchesGoingOutViewModel *)arg1 didChangeYesterdayStatusIndexPathTo:(NSIndexPath *)arg2;
@end
