//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDROnboardingCoordinator.h"

@interface TNDROnboardingCoordinator (Tinder)
- (void)dismissFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetLocalData;
- (void)resetServerDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetLocalDataThenCancelFlow;
- (void)cancelFlowWithShouldResetServerData:(_Bool)arg1;
- (void)promptToCancel;
@end

