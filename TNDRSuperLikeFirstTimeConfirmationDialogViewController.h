//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRSuperLikeDialogViewController.h"

@class NSString;
@protocol TNDRSuperLikeTutorialDelegate><TNDRDialogViewControllerDelegate;

@interface TNDRSuperLikeFirstTimeConfirmationDialogViewController : TNDRSuperLikeDialogViewController
{
    CDUnknownBlockType _introCompletion;
    unsigned long long _displayType;
    NSString *_name;
}

+ (id)viewControllerNavigationKey;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(copy, nonatomic) CDUnknownBlockType introCompletion; // @synthesize introCompletion=_introCompletion;
- (void).cxx_destruct;
- (double)bottomAccessoryViewXOffset;
- (void)requestDismissal;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapConfirmationButton:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)cancelString;
- (id)confirmationString;
- (id)marketingText;
- (id)detailText;
- (id)titleText;
- (id)initWithName:(id)arg1 displayType:(unsigned long long)arg2;

// Remaining properties
@property(nonatomic) __weak id <TNDRSuperLikeTutorialDelegate><TNDRDialogViewControllerDelegate> delegate; // @dynamic delegate;

@end

