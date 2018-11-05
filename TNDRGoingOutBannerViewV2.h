//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TNDRAnalyticsTracker, TNDRMatchesGoingOutExperiment, UIButton, UIImageView, UILabel, UITapGestureRecognizer;
@protocol TNDRGoingOutBannerViewDelegate;

@interface TNDRGoingOutBannerViewV2 : UIView
{
    _Bool _expanded;
    _Bool _hasLocation;
    _Bool _isForProfile;
    id <TNDRGoingOutBannerViewDelegate> _delegate;
    UILabel *_statusLabel;
    UIView *_borderView;
    UIView *_contentView;
    UIImageView *_arrowView;
    UILabel *_statusTitleLabel;
    UIView *_locationContainerView;
    UILabel *_locationLabel;
    UIImageView *_locationPlacemarkView;
    UILabel *_statusMessageLabel;
    UIButton *_sendButton;
    UIView *_lineSeparatorView;
    UIImageView *_messageIconView;
    UILabel *_messageBannerTitleLabel;
    double _horizontalAdjustmentForAnimation;
    NSString *_generatedMessageText;
    NSString *_statusText;
    NSString *_statusTag;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool isForProfile; // @synthesize isForProfile=_isForProfile;
@property(nonatomic) _Bool hasLocation; // @synthesize hasLocation=_hasLocation;
@property(retain, nonatomic) NSString *statusTag; // @synthesize statusTag=_statusTag;
@property(retain, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(retain, nonatomic) NSString *generatedMessageText; // @synthesize generatedMessageText=_generatedMessageText;
@property(nonatomic) double horizontalAdjustmentForAnimation; // @synthesize horizontalAdjustmentForAnimation=_horizontalAdjustmentForAnimation;
@property(retain, nonatomic) UILabel *messageBannerTitleLabel; // @synthesize messageBannerTitleLabel=_messageBannerTitleLabel;
@property(retain, nonatomic) UIImageView *messageIconView; // @synthesize messageIconView=_messageIconView;
@property(retain, nonatomic) UIView *lineSeparatorView; // @synthesize lineSeparatorView=_lineSeparatorView;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UILabel *statusMessageLabel; // @synthesize statusMessageLabel=_statusMessageLabel;
@property(retain, nonatomic) UIImageView *locationPlacemarkView; // @synthesize locationPlacemarkView=_locationPlacemarkView;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UIView *locationContainerView; // @synthesize locationContainerView=_locationContainerView;
@property(retain, nonatomic) UILabel *statusTitleLabel; // @synthesize statusTitleLabel=_statusTitleLabel;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak id <TNDRGoingOutBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapSendButton;
- (void)didTapBannerView;
- (double)messageBannertitleWidth;
- (double)maxAvailableHorizontalSpaceForLocationText;
- (double)maxAvailableHorizontalSpaceForText;
- (double)locationTextWidth;
- (double)textWidth;
- (struct CGSize)contentSize;
- (void)layoutExpandedViews;
- (void)layoutLocationContainerView;
- (void)layoutStatusTitleLabel;
- (void)layoutStatusLabel;
- (void)layoutContentView;
- (void)layoutArrowView;
- (void)layoutCollapsed;
- (void)layoutExpanded;
- (void)layoutSubviews;
- (id)attributedTextForStatusText:(id)arg1;
- (double)collapsedBannerViewHeight;
- (void)setUpShadow;
- (void)setUpTapGestureOnContentView;
- (void)setUpLabelTextsWithEmojiText:(id)arg1 statusText:(id)arg2 locationText:(id)arg3 matchName:(id)arg4;
- (void)setUpViewHierarchy;
- (id)initWithStatusEmoji:(id)arg1 statusText:(id)arg2 locationText:(id)arg3 statusTag:(id)arg4 matchName:(id)arg5 isForProfile:(_Bool)arg6;
@property(readonly, nonatomic) TNDRMatchesGoingOutExperiment *matchesGoingOutExperiment;
@property(readonly, nonatomic) TNDRAnalyticsTracker *analyticsTracker;

@end
