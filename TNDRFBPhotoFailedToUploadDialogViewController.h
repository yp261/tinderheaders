//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

@class NSAttributedString, NSString, UIView;
@protocol TNDRActionDialogViewControllerDelegate><TNDRDialogViewControllerDelegate;

@interface TNDRFBPhotoFailedToUploadDialogViewController : TNDRDialogViewController
{
    NSString *_confirmationString;
    UIView *_opaqueBackgroundView;
}

@property(retain, nonatomic) UIView *opaqueBackgroundView; // @synthesize opaqueBackgroundView=_opaqueBackgroundView;
@property(readonly, nonatomic) NSString *confirmationString; // @synthesize confirmationString=_confirmationString;
- (void).cxx_destruct;
- (double)preferredDialogViewControllerContainerWidth;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapConfirmationButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setOpaqueContent:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSAttributedString *detailText;
@property(readonly, nonatomic) NSAttributedString *titleText;

// Remaining properties
@property(nonatomic) __weak id <TNDRActionDialogViewControllerDelegate><TNDRDialogViewControllerDelegate> delegate; // @dynamic delegate;

@end

