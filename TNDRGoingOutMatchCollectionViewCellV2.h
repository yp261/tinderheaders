//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, CAShapeLayer, TNDRGradientShapeLayer, TNDRLocationStatusView, TNDRMatchesGoingOutExperiment, TNDRTutorialToolTip, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface TNDRGoingOutMatchCollectionViewCellV2 : UICollectionViewCell
{
    _Bool _hasLocation;
    _Bool _shouldShowGoingOutPrompt;
    UIView *_imageViewContainer;
    UIImageView *_imageView;
    UILabel *_nameLabel;
    UILabel *_goingOutStatusLabel;
    TNDRLocationStatusView *_locationStatusView;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_addStatusImageViewV2;
    UILabel *_statusSubtitleLabelV2;
    UILabel *_goingOutStatusTitleLabelV2;
    UIView *_statusLabelContainerView;
    CAGradientLayer *_topGradientLayer;
    CAGradientLayer *_gradientForAddStatusIcon;
    TNDRGradientShapeLayer *_gradientShapeLayer;
    CAShapeLayer *_imageMaskLayer;
    CAGradientLayer *_gradientForAddStatusImageViewV2;
    TNDRTutorialToolTip *_toolTip;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) TNDRTutorialToolTip *toolTip; // @synthesize toolTip=_toolTip;
@property(nonatomic) _Bool shouldShowGoingOutPrompt; // @synthesize shouldShowGoingOutPrompt=_shouldShowGoingOutPrompt;
@property(nonatomic) _Bool hasLocation; // @synthesize hasLocation=_hasLocation;
@property(retain, nonatomic) CAGradientLayer *gradientForAddStatusImageViewV2; // @synthesize gradientForAddStatusImageViewV2=_gradientForAddStatusImageViewV2;
@property(retain, nonatomic) CAShapeLayer *imageMaskLayer; // @synthesize imageMaskLayer=_imageMaskLayer;
@property(retain, nonatomic) TNDRGradientShapeLayer *gradientShapeLayer; // @synthesize gradientShapeLayer=_gradientShapeLayer;
@property(retain, nonatomic) CAGradientLayer *gradientForAddStatusIcon; // @synthesize gradientForAddStatusIcon=_gradientForAddStatusIcon;
@property(retain, nonatomic) CAGradientLayer *topGradientLayer; // @synthesize topGradientLayer=_topGradientLayer;
@property(retain, nonatomic) UIView *statusLabelContainerView; // @synthesize statusLabelContainerView=_statusLabelContainerView;
@property(retain, nonatomic) UILabel *goingOutStatusTitleLabelV2; // @synthesize goingOutStatusTitleLabelV2=_goingOutStatusTitleLabelV2;
@property(retain, nonatomic) UILabel *statusSubtitleLabelV2; // @synthesize statusSubtitleLabelV2=_statusSubtitleLabelV2;
@property(retain, nonatomic) UIImageView *addStatusImageViewV2; // @synthesize addStatusImageViewV2=_addStatusImageViewV2;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) TNDRLocationStatusView *locationStatusView; // @synthesize locationStatusView=_locationStatusView;
@property(retain, nonatomic) UILabel *goingOutStatusLabel; // @synthesize goingOutStatusLabel=_goingOutStatusLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *imageViewContainer; // @synthesize imageViewContainer=_imageViewContainer;
- (void).cxx_destruct;
- (void)animateInChangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareForReuse;
- (void)setName:(id)arg1 status:(id)arg2 statusTitle:(id)arg3 locationStatus:(id)arg4 timeLeft:(double)arg5 shouldShowGoingOutPrompt:(_Bool)arg6 profileImageURL:(id)arg7 shouldShowEdit:(_Bool)arg8 shouldShowCaption:(_Bool)arg9;
- (void)layoutSubviews;
@property(readonly, nonatomic) TNDRMatchesGoingOutExperiment *goingOutExperiment;
- (id)initWithFrame:(struct CGRect)arg1;

@end

