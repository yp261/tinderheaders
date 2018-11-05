//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, CAShapeLayer, TNDRGradientShapeLayer, TNDRLocationStatusView, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface TNDRGoingOutMatchCollectionViewCell : UICollectionViewCell
{
    UIView *_imageViewContainer;
    UIImageView *_imageView;
    UILabel *_nameLabel;
    CAGradientLayer *_topGradientLayer;
    UILabel *_goingOutStatusLabel;
    CAGradientLayer *_gradientForPlusIcon;
    TNDRLocationStatusView *_locationStatusView;
    UILabel *_creationLabel;
    TNDRGradientShapeLayer *_gradientShapeLayer;
    CAShapeLayer *_imageMaskLayer;
    UIActivityIndicatorView *_activityIndicator;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) CAShapeLayer *imageMaskLayer; // @synthesize imageMaskLayer=_imageMaskLayer;
@property(retain, nonatomic) TNDRGradientShapeLayer *gradientShapeLayer; // @synthesize gradientShapeLayer=_gradientShapeLayer;
@property(retain, nonatomic) UILabel *creationLabel; // @synthesize creationLabel=_creationLabel;
@property(retain, nonatomic) TNDRLocationStatusView *locationStatusView; // @synthesize locationStatusView=_locationStatusView;
@property(retain, nonatomic) CAGradientLayer *gradientForPlusIcon; // @synthesize gradientForPlusIcon=_gradientForPlusIcon;
@property(retain, nonatomic) UILabel *goingOutStatusLabel; // @synthesize goingOutStatusLabel=_goingOutStatusLabel;
@property(retain, nonatomic) CAGradientLayer *topGradientLayer; // @synthesize topGradientLayer=_topGradientLayer;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *imageViewContainer; // @synthesize imageViewContainer=_imageViewContainer;
- (void).cxx_destruct;
- (void)animateInChangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)formattedTimeLeftStringFromTimeLeft:(double)arg1;
- (void)prepareForReuse;
- (void)setName:(id)arg1 status:(id)arg2 locationStatus:(id)arg3 timeLeft:(double)arg4 showShouldGoOutPrompt:(_Bool)arg5 profileImageURL:(id)arg6 shouldShowEdit:(_Bool)arg7;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool hasLocation;
- (id)initWithFrame:(struct CGRect)arg1;

@end
