//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, TNDRAnalyticsTracker, TNDRNumericTextField, UIBarButtonItem, UIButton, UIImageView, UILabel;
@protocol TNDRSMSValidationEnterCodeViewControllerDelegate;

@interface TNDRSMSValidationEnterCodeViewController : UIViewController <UITextFieldDelegate>
{
    _Bool _shouldShowErrorState;
    id <TNDRSMSValidationEnterCodeViewControllerDelegate> _delegate;
    NSString *_phoneNumber;
    UIBarButtonItem *_logoutBarButtonItem;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    TNDRNumericTextField *_codeTextField;
    UIImageView *_spinner;
    UIImageView *_errorView;
    UIButton *_resendCodeButton;
    UIButton *_submitCodeButton;
}

@property(retain, nonatomic) UIButton *submitCodeButton; // @synthesize submitCodeButton=_submitCodeButton;
@property(retain, nonatomic) UIButton *resendCodeButton; // @synthesize resendCodeButton=_resendCodeButton;
@property(retain, nonatomic) UIImageView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIImageView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) TNDRNumericTextField *codeTextField; // @synthesize codeTextField=_codeTextField;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIBarButtonItem *logoutBarButtonItem; // @synthesize logoutBarButtonItem=_logoutBarButtonItem;
@property(nonatomic) _Bool shouldShowErrorState; // @synthesize shouldShowErrorState=_shouldShowErrorState;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) __weak id <TNDRSMSValidationEnterCodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)showSuccessState;
- (void)showErrorState;
- (void)hideSpinner;
- (void)showSpinner;
- (void)didTapLogoutBarButtonItem:(id)arg1;
- (void)didTapSubmitCodeButton:(id)arg1;
- (void)didTapResendCodeButton:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setupConstraints;
- (void)addSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) _Bool isShortScreen;
@property(readonly, nonatomic) TNDRAnalyticsTracker *analyticsTracker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

