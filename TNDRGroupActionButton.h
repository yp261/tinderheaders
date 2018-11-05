//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, NSArray, NSString, UIActivityIndicatorView, UIColor, UIView;

@interface TNDRGroupActionButton : UIButton
{
    _Bool _working;
    NSArray *_friends;
    UIColor *_inactiveBGColor;
    UIColor *_activeBGColor;
    UIColor *_inactiveTextColor;
    UIColor *_activeTextColorNames;
    NSString *_inactiveText;
    NSString *_activeText;
    UIView *_topBorder;
    UIActivityIndicatorView *_spinner;
    CALayer *_gradientLayer;
}

@property(retain, nonatomic) CALayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIView *topBorder; // @synthesize topBorder=_topBorder;
@property(retain, nonatomic) NSString *activeText; // @synthesize activeText=_activeText;
@property(retain, nonatomic) NSString *inactiveText; // @synthesize inactiveText=_inactiveText;
@property(retain, nonatomic) UIColor *activeTextColorNames; // @synthesize activeTextColorNames=_activeTextColorNames;
@property(retain, nonatomic) UIColor *inactiveTextColor; // @synthesize inactiveTextColor=_inactiveTextColor;
@property(retain, nonatomic) UIColor *activeBGColor; // @synthesize activeBGColor=_activeBGColor;
@property(retain, nonatomic) UIColor *inactiveBGColor; // @synthesize inactiveBGColor=_inactiveBGColor;
@property(readonly, nonatomic) _Bool working; // @synthesize working=_working;
@property(retain, nonatomic) NSArray *friends; // @synthesize friends=_friends;
- (void).cxx_destruct;
- (void)changeToWorkingState:(_Bool)arg1;
- (void)animateButtonPop;
- (void)setupTitleForFriends;
- (void)layoutSubviews;
- (void)setEnabled:(_Bool)arg1;
- (void)setupConstraints;
- (void)setup;
- (id)init;

@end

