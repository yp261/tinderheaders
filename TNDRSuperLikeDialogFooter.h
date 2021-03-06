//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton;

@interface TNDRSuperLikeDialogFooter : UIView
{
    _Bool _calculateContentSize;
    UIButton *_actionButton;
    UIButton *_cancelButton;
    double _preferredContentWidth;
    unsigned long long _footerType;
    NSArray *_contentConstraints;
    UIView *_contentView;
    double _preferredButtonHeight;
    UIView *_topSeparator;
    UIView *_leftSeparator;
}

+ (id)footerOfType:(unsigned long long)arg1;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIView *leftSeparator; // @synthesize leftSeparator=_leftSeparator;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(nonatomic) double preferredButtonHeight; // @synthesize preferredButtonHeight=_preferredButtonHeight;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(nonatomic) unsigned long long footerType; // @synthesize footerType=_footerType;
@property(nonatomic) _Bool calculateContentSize; // @synthesize calculateContentSize=_calculateContentSize;
@property(nonatomic) double preferredContentWidth; // @synthesize preferredContentWidth=_preferredContentWidth;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateSubviewConstraints;
- (void)updateConstraints;
- (void)setupSubview;
- (id)initWithFooterType:(unsigned long long)arg1;

@end

