//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, TNDRGenderLearnMoreLabel, TNDRGradientButton;

@interface TNDREditGenderTableViewFooter : UIView
{
    _Bool _shouldShowConfirmButton;
    _Bool _shouldShowLearnMoreTextLabel;
    TNDRGenderLearnMoreLabel *_footerTextLabel;
    TNDRGradientButton *_confirmButton;
    NSLayoutConstraint *_confirmButtonTopConstraint;
}

+ (double)suggestedHeightForWidth:(double)arg1 shouldShowConfirmButton:(_Bool)arg2 shouldShowLearnMoreTextLabel:(_Bool)arg3;
@property(retain, nonatomic) NSLayoutConstraint *confirmButtonTopConstraint; // @synthesize confirmButtonTopConstraint=_confirmButtonTopConstraint;
@property(retain, nonatomic) TNDRGradientButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) TNDRGenderLearnMoreLabel *footerTextLabel; // @synthesize footerTextLabel=_footerTextLabel;
@property(nonatomic) _Bool shouldShowLearnMoreTextLabel; // @synthesize shouldShowLearnMoreTextLabel=_shouldShowLearnMoreTextLabel;
@property(nonatomic) _Bool shouldShowConfirmButton; // @synthesize shouldShowConfirmButton=_shouldShowConfirmButton;
- (void).cxx_destruct;
- (void)didTapConfirmButton:(id)arg1;
- (void)layoutSubviews;
- (void)setupConstraints;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

