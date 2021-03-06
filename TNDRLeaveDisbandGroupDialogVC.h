//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

#import "TNDRDialogViewControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, TNDRErrorDialogVC;
@protocol TNDRActionDialogViewControllerDelegate;

@interface TNDRLeaveDisbandGroupDialogVC : TNDRDialogViewController <TNDRDialogViewControllerDelegate, UIViewControllerTransitioningDelegate>
{
    _Bool _currentUserIsOwner;
    NSString *_groupId;
    TNDRErrorDialogVC *_errorDialog;
    id <TNDRActionDialogViewControllerDelegate> _actionDelegate;
}

+ (id)viewControllerNavigationKey;
@property(nonatomic) __weak id <TNDRActionDialogViewControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) _Bool currentUserIsOwner; // @synthesize currentUserIsOwner=_currentUserIsOwner;
@property(retain, nonatomic) TNDRErrorDialogVC *errorDialog; // @synthesize errorDialog=_errorDialog;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dialogViewControllerRequestsDismissal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestDismissalOnError;
- (void)requestErrorDialog;
@property(readonly, nonatomic) NSString *errorDetailText;
@property(readonly, nonatomic) NSString *errorTitleText;
- (void)didTapCancel:(id)arg1;
- (void)requestDismissal;
- (void)didTapConfirmation:(id)arg1;
- (void)setupFooter;
- (void)setupHeader;
- (void)viewDidLoad;
- (id)initWithGroupId:(id)arg1 isOwner:(_Bool)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

