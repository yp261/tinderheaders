//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

@class _TtC6Tinder18ReportDialogHeader, _TtC6Tinder20OtherReasonsV2Footer;
@protocol TNDROtherReasonDialogDelegate;

@interface _TtC6Tinder33OtherReasonDialogV2ViewController : TNDRDialogViewController
{
    // Error parsing type: , name: isCompactScreen
    // Error parsing type: , name: notificationCenter.storage
    // Error parsing type: , name: reportingV2Experiment.storage
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: userName
    // Error parsing type: , name: unmatchAnalyticsClient
    // Error parsing type: , name: reportAnalyticsClient
    // Error parsing type: , name: otherReasonDelegate
    // Error parsing type: , name: dialogType
    // Error parsing type: , name: dialogHeaderView.storage
    // Error parsing type: , name: dialogFooterView.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didTapBackground;
- (void)didTapCancelButton;
- (void)didTapSubmitButton;
- (void)willHideKeyboardWithNotification:(id)arg1;
- (void)willShowKeyboardWithNotification:(id)arg1;
- (void)setupControls;
- (void)registerNotifications;
- (void)requestDismissal;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) _TtC6Tinder20OtherReasonsV2Footer *dialogFooterView;
@property(nonatomic, retain) _TtC6Tinder18ReportDialogHeader *dialogHeaderView;
@property(nonatomic) __weak id <TNDROtherReasonDialogDelegate> otherReasonDelegate; // @synthesize otherReasonDelegate;

@end
