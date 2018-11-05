//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSDate, NSString, TNDRGameToNewMatchAnimationController;

@interface TNDRNewMatchInteractor : NSObject <UIViewControllerTransitioningDelegate>
{
    NSDate *_timestampSuperLike;
    TNDRGameToNewMatchAnimationController *_gameToNewMatchTransitioning;
}

@property(retain, nonatomic) TNDRGameToNewMatchAnimationController *gameToNewMatchTransitioning; // @synthesize gameToNewMatchTransitioning=_gameToNewMatchTransitioning;
@property(retain, nonatomic) NSDate *timestampSuperLike; // @synthesize timestampSuperLike=_timestampSuperLike;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)presentNewMatch:(id)arg1 onViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
