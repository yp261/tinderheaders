//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageView, UILabel;

@interface TNDRTutorialToolTip : UIView
{
    struct CGPoint centerOfAnchorView;
    double containerWidth;
    double containerHeight;
    double anchorWidth;
    double anchorHeight;
    struct CGRect contentFrame;
    struct CGSize toolTipSize;
    long long arrowPosition;
    _Bool toolTipAdded;
    struct CGPoint zoomPoint;
    _Bool _hasShadow;
    UIView *_contentView;
    double _distanceFromAnchor;
    double _arrowOffsetPercentage;
    double _cornerRadius;
    UILabel *_titleLabel;
    double _arrowOffsetThresholdPercentage;
    long long _arrowDirection;
    double _arrowHeight;
    double _arrowWidth;
    UIColor *_tintColor;
    double _verticalPadding;
    double _horizPadding;
    UIImage *_leftImage;
    UIColor *_shadowColor;
    double _shadowOpacity;
    double _shadowRadius;
    UIColor *_backColor;
    UIView *_containerView;
    UIView *_anchorView;
    UIImageView *_arrowView;
    UIImageView *_leftIconImageView;
    struct CGSize _shadowOffset;
}

+ (struct CGSize)textSizeForSizeBounds:(struct CGSize)arg1 font:(id)arg2 text:(id)arg3;
@property(retain, nonatomic) UIImageView *leftIconImageView; // @synthesize leftIconImageView=_leftIconImageView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(nonatomic) __weak UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIColor *backColor; // @synthesize backColor=_backColor;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(retain, nonatomic) UIImage *leftImage; // @synthesize leftImage=_leftImage;
@property(nonatomic) double horizPadding; // @synthesize horizPadding=_horizPadding;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) double arrowWidth; // @synthesize arrowWidth=_arrowWidth;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) double arrowOffsetThresholdPercentage; // @synthesize arrowOffsetThresholdPercentage=_arrowOffsetThresholdPercentage;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double arrowOffsetPercentage; // @synthesize arrowOffsetPercentage=_arrowOffsetPercentage;
@property(nonatomic) double distanceFromAnchor; // @synthesize distanceFromAnchor=_distanceFromAnchor;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)getArrowForSize:(struct CGSize)arg1;
- (void)dismiss;
- (void)drawRect:(struct CGRect)arg1;
- (void)setup;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1 withPulse:(_Bool)arg2 numPulses:(long long)arg3;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1 withPulse:(_Bool)arg2;
- (void)showAndDismissAfterWithNumPulses:(long long)arg1;
- (void)showPulsateDismiss;
- (void)show;
- (id)initWithTitle:(id)arg1 inView:(id)arg2 toAnchorView:(id)arg3 additionalHorizPadding:(double)arg4 additionalVertPadding:(double)arg5;
- (id)initWithTitle:(id)arg1 inView:(id)arg2 toAnchorView:(id)arg3;
- (id)initWithAnchorView:(id)arg1 inView:(id)arg2 withSize:(struct CGSize)arg3;

@end

