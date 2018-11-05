//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, TNDRGradientButton, UIButton;

@interface TNDRGradientActionButtonFooter : UIView
{
    _Bool _calculateContentSize;
    TNDRGradientButton *_actionButton;
    UIButton *_cancelButton;
    double _buttonSpacing;
    unsigned long long _footerType;
    double _cachedContentWidth;
    NSArray *_contentConstraints;
    UIView *_contentView;
    struct CGSize _preferredActionButtonSize;
    struct CGSize _preferredCancelButtonSize;
    struct UIEdgeInsets _contentInsets;
}

+ (id)footerWithType:(unsigned long long)arg1;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(nonatomic) double cachedContentWidth; // @synthesize cachedContentWidth=_cachedContentWidth;
@property(nonatomic) unsigned long long footerType; // @synthesize footerType=_footerType;
@property(nonatomic) _Bool calculateContentSize; // @synthesize calculateContentSize=_calculateContentSize;
@property(nonatomic) double buttonSpacing; // @synthesize buttonSpacing=_buttonSpacing;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGSize preferredCancelButtonSize; // @synthesize preferredCancelButtonSize=_preferredCancelButtonSize;
@property(nonatomic) struct CGSize preferredActionButtonSize; // @synthesize preferredActionButtonSize=_preferredActionButtonSize;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) TNDRGradientButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateSubviewConstraints;
- (void)updateConstraints;
- (void)setupContentView;
- (id)initWithType:(unsigned long long)arg1;

@end
