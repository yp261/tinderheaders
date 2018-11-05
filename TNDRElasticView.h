//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink;

@interface TNDRElasticView : UIView
{
    _Bool _animating;
    double _radiusFraction;
    UIView *_containerView;
    UIView *_controlPoint;
    CADisplayLink *_displayLink;
    UIView *_tipOfCircleView;
}

@property(retain, nonatomic) UIView *tipOfCircleView; // @synthesize tipOfCircleView=_tipOfCircleView;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIView *controlPoint; // @synthesize controlPoint=_controlPoint;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double radiusFraction; // @synthesize radiusFraction=_radiusFraction;
- (void).cxx_destruct;
- (void)relayoutAndRedraw;
- (void)setRadiusFraction:(double)arg1 animated:(_Bool)arg2;
- (double)fractionConverter:(double)arg1;
- (struct CGPoint)modelCenterForView:(id)arg1;
- (struct CGPoint)presentationCenterForView:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)refresh;
- (id)initWithFrame:(struct CGRect)arg1;

@end
