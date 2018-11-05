//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

#import "TNDRDialogViewControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, TNDRCoreDataService, TNDRErrorDialogVC, TNDRMatch, TNDRSuperLikeDialogFooter, TNDRTitleDialogHeader;
@protocol TNDRUnmatchReasonDialogViewControllerDelegate;

@interface TNDRUnmatchGroupConfirmationDialogVC : TNDRDialogViewController <TNDRDialogViewControllerDelegate, UIViewControllerTransitioningDelegate>
{
    TNDRMatch *_match;
    TNDRSuperLikeDialogFooter *_footer;
    TNDRTitleDialogHeader *_header;
    TNDRErrorDialogVC *_errorDialog;
    NSString *_errorTitleText;
    NSString *_errorDetailText;
    id <TNDRUnmatchReasonDialogViewControllerDelegate> _unmatchDelegate;
}

+ (id)viewControllerNavigationKey;
@property(nonatomic) __weak id <TNDRUnmatchReasonDialogViewControllerDelegate> unmatchDelegate; // @synthesize unmatchDelegate=_unmatchDelegate;
@property(readonly, nonatomic) NSString *errorDetailText; // @synthesize errorDetailText=_errorDetailText;
@property(readonly, nonatomic) NSString *errorTitleText; // @synthesize errorTitleText=_errorTitleText;
@property(retain, nonatomic) TNDRErrorDialogVC *errorDialog; // @synthesize errorDialog=_errorDialog;
@property(retain, nonatomic) TNDRTitleDialogHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) TNDRSuperLikeDialogFooter *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) TNDRMatch *match; // @synthesize match=_match;
- (void).cxx_destruct;
- (void)requestDismissal;
- (void)handleCancelButtonTap:(id)arg1;
- (void)handleUnmatchButtonTap:(id)arg1;
- (void)setupFooter;
- (void)setupHeader;
- (void)viewDidLoad;
- (id)initWithMatch:(id)arg1 delegate:(id)arg2;
- (id)initWithMatchID:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) TNDRCoreDataService *dataService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
