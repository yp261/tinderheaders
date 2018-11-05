//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, TNDRChatToProfileAnimationController, TNDRGroupProfileViewController;

@interface TNDRChatToProfileTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>
{
    TNDRGroupProfileViewController *_groupProfileVC;
    TNDRChatToProfileAnimationController *_animationController;
    struct CGRect _originalWindowFrameForMatchCell;
}

@property(retain, nonatomic) TNDRChatToProfileAnimationController *animationController; // @synthesize animationController=_animationController;
@property(retain, nonatomic) TNDRGroupProfileViewController *groupProfileVC; // @synthesize groupProfileVC=_groupProfileVC;
@property(nonatomic) struct CGRect originalWindowFrameForMatchCell; // @synthesize originalWindowFrameForMatchCell=_originalWindowFrameForMatchCell;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

