//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

@class NSAttributedString, NSString, TNDRAnalyticsTracker, UIView;
@protocol TNDRActionDialogViewControllerDelegate><TNDRDialogViewControllerDelegate;

@interface TNDRUnderAgeDialogViewController : TNDRDialogViewController
{
    _Bool _shouldCollectEmail;
    NSAttributedString *_titleText;
    NSString *_email;
    UIView *_opaqueBackgroundView;
    TNDRAnalyticsTracker *_analyticsTracker;
}

+ (id)viewControllerNavigationKey;
@property(readonly, nonatomic) TNDRAnalyticsTracker *analyticsTracker; // @synthesize analyticsTracker=_analyticsTracker;
@property(retain, nonatomic) UIView *opaqueBackgroundView; // @synthesize opaqueBackgroundView=_opaqueBackgroundView;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) _Bool shouldCollectEmail; // @synthesize shouldCollectEmail=_shouldCollectEmail;
@property(readonly, copy, nonatomic) NSAttributedString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (double)preferredDialogViewControllerContainerWidth;
- (void)willHideKeyboard:(id)arg1;
- (void)willShowKeyboard:(id)arg1;
- (void)dealloc;
- (void)registerNotifications;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapConfirmationButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, copy, nonatomic) NSAttributedString *detailText;

// Remaining properties
@property(nonatomic) __weak id <TNDRActionDialogViewControllerDelegate><TNDRDialogViewControllerDelegate> delegate; // @dynamic delegate;

@end
