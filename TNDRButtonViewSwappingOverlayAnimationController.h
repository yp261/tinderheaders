//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TNDRViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView;

@interface TNDRButtonViewSwappingOverlayAnimationController : NSObject <UIViewControllerAnimatedTransitioning, TNDRViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    UIView *_buttonView;
    CDUnknownBlockType _presentationAnimationCompletion;
    CDUnknownBlockType _dismissalAnimationCompletion;
    UIView *_buttonViewOriginalSuperview;
    struct CGPoint _buttonViewOriginalCenter;
}

@property(nonatomic) struct CGPoint buttonViewOriginalCenter; // @synthesize buttonViewOriginalCenter=_buttonViewOriginalCenter;
@property(nonatomic) __weak UIView *buttonViewOriginalSuperview; // @synthesize buttonViewOriginalSuperview=_buttonViewOriginalSuperview;
@property(copy, nonatomic) CDUnknownBlockType dismissalAnimationCompletion; // @synthesize dismissalAnimationCompletion=_dismissalAnimationCompletion;
@property(copy, nonatomic) CDUnknownBlockType presentationAnimationCompletion; // @synthesize presentationAnimationCompletion=_presentationAnimationCompletion;
@property(nonatomic) __weak UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void).cxx_destruct;
- (void)executeDismissalAnimation:(id)arg1;
- (void)executePresentationAnimation:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

