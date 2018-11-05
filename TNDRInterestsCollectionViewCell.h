//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIColor, UILabel;

@interface TNDRInterestsCollectionViewCell : UICollectionViewCell
{
    _Bool _commonInterest;
    NSString *_interestName;
    UILabel *_interestLabel;
    UILabel *_sizingLabel;
}

+ (id)reuseIdentifier;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UILabel *sizingLabel; // @synthesize sizingLabel=_sizingLabel;
@property(retain, nonatomic) UILabel *interestLabel; // @synthesize interestLabel=_interestLabel;
@property(nonatomic, getter=isCommonInterest) _Bool commonInterest; // @synthesize commonInterest=_commonInterest;
@property(retain, nonatomic) NSString *interestName; // @synthesize interestName=_interestName;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *uncommonColor;
@property(readonly, nonatomic) UIColor *commonColor;
- (double)minFontSize;
- (id)minInterestFont;
- (id)defaultInterestFont;
- (struct CGSize)contentSize;
- (double)preferredMaxWidth;
- (id)configureLabel:(id)arg1;
- (void)layoutSubviews;
- (void)setupConstraints;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end
