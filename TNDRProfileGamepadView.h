//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray, NSLayoutConstraint, TNDRProfileGamepadButton;

@interface TNDRProfileGamepadView : UIView
{
    _Bool _buttonPOPAnimationCompleted;
    TNDRProfileGamepadButton *_passButton;
    TNDRProfileGamepadButton *_superLikeButton;
    TNDRProfileGamepadButton *_likeButton;
    unsigned long long _gamepadType;
    NSLayoutConstraint *_likeButtonHorizontalConstraint;
    NSLayoutConstraint *_passButtonHorizontalConstraint;
    NSLayoutConstraint *_superLikeButtonVerticalConstraint;
    NSArray *_buttonConstraints;
    CAGradientLayer *_backDrop;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) CAGradientLayer *backDrop; // @synthesize backDrop=_backDrop;
@property(retain, nonatomic) NSArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property(retain, nonatomic) NSLayoutConstraint *superLikeButtonVerticalConstraint; // @synthesize superLikeButtonVerticalConstraint=_superLikeButtonVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *passButtonHorizontalConstraint; // @synthesize passButtonHorizontalConstraint=_passButtonHorizontalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *likeButtonHorizontalConstraint; // @synthesize likeButtonHorizontalConstraint=_likeButtonHorizontalConstraint;
@property(readonly, nonatomic) unsigned long long gamepadType; // @synthesize gamepadType=_gamepadType;
@property(readonly, nonatomic) _Bool buttonPOPAnimationCompleted; // @synthesize buttonPOPAnimationCompleted=_buttonPOPAnimationCompleted;
@property(readonly, nonatomic) TNDRProfileGamepadButton *likeButton; // @synthesize likeButton=_likeButton;
@property(readonly, nonatomic) TNDRProfileGamepadButton *superLikeButton; // @synthesize superLikeButton=_superLikeButton;
@property(readonly, nonatomic) TNDRProfileGamepadButton *passButton; // @synthesize passButton=_passButton;
- (void).cxx_destruct;
- (void)animateButtonsOut;
- (void)animateButtonsIn;
@property(readonly, nonatomic) double superLikeButtonHeight;
@property(readonly, nonatomic) struct CGPoint superLikeButtonCenterPoint;
- (void)prepareForAnimationIn;
- (void)layoutSubviews;
- (void)setupButtonConstraints;
- (double)buttonPaddingOffset;
- (void)updateConstraints;
- (void)setupBackdrop;
- (void)setupButtons;
- (double)superLikeButtonIconYOffset;
- (double)likeButtonIconYOffset;
- (id)initWithGamepadType:(unsigned long long)arg1;

@end

