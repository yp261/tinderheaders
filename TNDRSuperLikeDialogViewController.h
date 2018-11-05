//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

#import "TNDRButtonViewSwappingOverlayAnimationControllerDestinationViewController-Protocol.h"

@class NSAttributedString, NSString, UIImage, UIView;

@interface TNDRSuperLikeDialogViewController : TNDRDialogViewController <TNDRButtonViewSwappingOverlayAnimationControllerDestinationViewController>
{
    _Bool _marketingEnabled;
    NSAttributedString *_titleText;
    NSAttributedString *_detailText;
    NSString *_confirmationString;
    NSString *_cancelString;
    NSAttributedString *_marketingText;
    UIImage *_marketingImage;
    unsigned long long _footerType;
}

@property(nonatomic) unsigned long long footerType; // @synthesize footerType=_footerType;
@property(nonatomic, getter=isMarketingEnabled) _Bool marketingEnabled; // @synthesize marketingEnabled=_marketingEnabled;
@property(readonly, nonatomic) UIImage *marketingImage; // @synthesize marketingImage=_marketingImage;
@property(readonly, nonatomic) NSAttributedString *marketingText; // @synthesize marketingText=_marketingText;
@property(readonly, nonatomic) NSString *cancelString; // @synthesize cancelString=_cancelString;
@property(readonly, nonatomic) NSString *confirmationString; // @synthesize confirmationString=_confirmationString;
@property(readonly, nonatomic) NSAttributedString *detailText; // @synthesize detailText=_detailText;
@property(readonly, nonatomic) NSAttributedString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (double)preferredDialogViewControllerContainerWidth;
@property(readonly, nonatomic) UIView *outerContainerView;
- (id)animationController;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapConfirmationButton:(id)arg1;
- (void)viewDidLoad;
- (id)marketingBanner;
@property(readonly, nonatomic) UIImage *constellationBanner;

@end
