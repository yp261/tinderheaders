//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TNDRMatch, TNDRMatchesGoingOutViewController;

@protocol TNDRMatchesGoingOutViewControllerDelegate <NSObject>
- (void)matchesGoingOutViewController:(TNDRMatchesGoingOutViewController *)arg1 didRequestStatusUpdate:(_Bool)arg2;
- (void)matchesGoingOutViewController:(TNDRMatchesGoingOutViewController *)arg1 didSelectMatch:(TNDRMatch *)arg2;
@end

