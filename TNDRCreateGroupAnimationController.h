//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;

@interface TNDRCreateGroupAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
}

@property(getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)handleDismissal:(id)arg1;
- (void)handlePresentation:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

