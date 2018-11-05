//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, TNDRAttributedLabel, TNDRAvatarLinearView, TNDRBubbleView, TNDRElasticView, TNDRGoingOutStatusSuggestionViewModel, TNDRMatchesGoingOutExperiment, UIImage, UITextField;

@interface TNDRStatusSuggestionHeaderView : UIView
{
    TNDRElasticView *_elasticView;
    TNDRBubbleView *_bubbleView;
    TNDRAvatarLinearView *_avatarView;
    UITextField *_textField;
    TNDRAttributedLabel *_label;
    TNDRGoingOutStatusSuggestionViewModel *_userViewModel;
    CAShapeLayer *_curveMaskLayer;
    UIImage *_maskImage;
    UIView *_separatorBar;
    NSString *_status;
}

@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(retain, nonatomic) CAShapeLayer *curveMaskLayer; // @synthesize curveMaskLayer=_curveMaskLayer;
@property(retain, nonatomic) TNDRGoingOutStatusSuggestionViewModel *userViewModel; // @synthesize userViewModel=_userViewModel;
@property(retain, nonatomic) TNDRAttributedLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) TNDRAvatarLinearView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) TNDRBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) TNDRElasticView *elasticView; // @synthesize elasticView=_elasticView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupConstraints;
- (void)setup;
@property(readonly, nonatomic) TNDRMatchesGoingOutExperiment *goingOutExperiment;
- (id)initWithGoingOutStatusSuggestionViewModel:(id)arg1;

@end
