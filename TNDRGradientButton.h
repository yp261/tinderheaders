//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, CAShapeLayer, UIColor;

@interface TNDRGradientButton : UIButton
{
    _Bool _hasFullRoundedCorners;
    _Bool _hasShadow;
    _Bool _clipsTitleToBounds;
    long long _gradientType;
    double _cornerRadius;
    double _borderWidth;
    UIColor *_borderColor;
    UIColor *_titleColor;
    CALayer *_backingLayer;
    CAShapeLayer *_maskLayer;
    UIColor *_leftColor;
    UIColor *_rightColor;
}

@property(retain, nonatomic) UIColor *rightColor; // @synthesize rightColor=_rightColor;
@property(retain, nonatomic) UIColor *leftColor; // @synthesize leftColor=_leftColor;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CALayer *backingLayer; // @synthesize backingLayer=_backingLayer;
@property(nonatomic) _Bool clipsTitleToBounds; // @synthesize clipsTitleToBounds=_clipsTitleToBounds;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool hasFullRoundedCorners; // @synthesize hasFullRoundedCorners=_hasFullRoundedCorners;
@property(nonatomic) long long gradientType; // @synthesize gradientType=_gradientType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateStatus:(_Bool)arg1;
- (void)updateLeftColor:(id)arg1 andRightColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

