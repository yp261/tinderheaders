//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAGradientLayer, NSString, UIActivityIndicatorView, UIColor;

@interface TNDRStatusSuggestionButton : UIButton
{
    _Bool _active;
    _Bool _working;
    NSString *_inactiveTitle;
    NSString *_activeTitle;
    CAGradientLayer *_activeGradient;
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) CAGradientLayer *activeGradient; // @synthesize activeGradient=_activeGradient;
@property(copy, nonatomic) NSString *activeTitle; // @synthesize activeTitle=_activeTitle;
@property(copy, nonatomic) NSString *inactiveTitle; // @synthesize inactiveTitle=_inactiveTitle;
@property(nonatomic) _Bool working; // @synthesize working=_working;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *activeTitleColor;
@property(readonly, nonatomic) UIColor *inactiveTitleColor;
@property(readonly, nonatomic) UIColor *inactiveBackgroundColor;
- (void)layoutSubviews;
- (void)setupSpinner;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 withActiveString:(id)arg2 andInactiveString:(id)arg3;
- (id)init;

@end

