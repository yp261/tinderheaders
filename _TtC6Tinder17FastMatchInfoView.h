//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIImageView, UILabel;

@interface _TtC6Tinder17FastMatchInfoView : UIView
{
    // Error parsing type: , name: topLabel
    // Error parsing type: , name: bottomLabel
    // Error parsing type: , name: gradientBackground
    // Error parsing type: , name: matchType
    // Error parsing type: , name: badgeView
}

+ (long long)badgeWidth;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (void)configureBadge;
- (void)configureGradient;
- (id)init;
@property(nonatomic, readonly) UIImageView *badgeView; // @synthesize badgeView;
@property(nonatomic, readonly) CAGradientLayer *gradientBackground; // @synthesize gradientBackground;
@property(nonatomic, readonly) UILabel *bottomLabel; // @synthesize bottomLabel;
@property(nonatomic, readonly) UILabel *topLabel; // @synthesize topLabel;

@end

