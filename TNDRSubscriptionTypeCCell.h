//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRNewSubscriptionCostCollectionViewCell.h"

@class NSArray, NSAttributedString, NSLayoutConstraint, NSString, UILabel, UIView;

@interface TNDRSubscriptionTypeCCell : TNDRNewSubscriptionCostCollectionViewCell
{
    UIView *_numberOfMonthsContainer;
    UIView *_topBorder;
    UIView *_bottomBorder;
    UIView *_leftBorder;
    UIView *_rightBorder;
    UILabel *_topMonthsLabel;
    UILabel *_bottomMonthsLabel;
    NSArray *_numberOfMonthsArray;
    NSArray *_selectedNumberOfMonthsArray;
    UILabel *_discountedPricePerMonthLabel;
    NSLayoutConstraint *_topMonthsConstraint;
    NSAttributedString *_regularPricePerMonth;
    NSAttributedString *_selectedRegularPricePerMonth;
    struct UIEdgeInsets _borderVisibiltyInsets;
}

+ (id)shadowColor;
+ (id)discountFont;
+ (id)pricePerMonthFont;
+ (double)topMarginForOuterContainerView;
+ (double)pricePerMonthSelectedBottomPadding;
+ (double)pricePerMonthNormalBottomPadding;
+ (id)numberOfMonthsNormalTextColor;
+ (id)priceTextSelectedColor;
+ (id)priceTextNormalColor;
+ (id)selectedBorderColor;
+ (id)numberOfMonthsSelectedTextColor;
+ (id)discountLabelBackgroundColor;
+ (id)pricePerMonthSelectedBackgroundColor;
+ (id)pricePerMonthNormalBackgroundColor;
+ (id)outerContainerSelectedBackgroundColor;
+ (id)outerContainerBackgroundColor;
@property(copy, nonatomic) NSAttributedString *selectedRegularPricePerMonth; // @synthesize selectedRegularPricePerMonth=_selectedRegularPricePerMonth;
@property(copy, nonatomic) NSAttributedString *regularPricePerMonth; // @synthesize regularPricePerMonth=_regularPricePerMonth;
@property(nonatomic) __weak NSLayoutConstraint *topMonthsConstraint; // @synthesize topMonthsConstraint=_topMonthsConstraint;
@property(retain, nonatomic) UILabel *discountedPricePerMonthLabel; // @synthesize discountedPricePerMonthLabel=_discountedPricePerMonthLabel;
@property(copy, nonatomic) NSArray *selectedNumberOfMonthsArray; // @synthesize selectedNumberOfMonthsArray=_selectedNumberOfMonthsArray;
@property(copy, nonatomic) NSArray *numberOfMonthsArray; // @synthesize numberOfMonthsArray=_numberOfMonthsArray;
@property(retain, nonatomic) UILabel *bottomMonthsLabel; // @synthesize bottomMonthsLabel=_bottomMonthsLabel;
@property(retain, nonatomic) UILabel *topMonthsLabel; // @synthesize topMonthsLabel=_topMonthsLabel;
@property(retain, nonatomic) UIView *rightBorder; // @synthesize rightBorder=_rightBorder;
@property(retain, nonatomic) UIView *leftBorder; // @synthesize leftBorder=_leftBorder;
@property(retain, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) UIView *topBorder; // @synthesize topBorder=_topBorder;
@property(nonatomic) struct UIEdgeInsets borderVisibiltyInsets; // @synthesize borderVisibiltyInsets=_borderVisibiltyInsets;
@property(retain, nonatomic) UIView *numberOfMonthsContainer; // @synthesize numberOfMonthsContainer=_numberOfMonthsContainer;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateNumberOfMonthsText;
- (void)setNumberOfMonths:(id)arg1;
- (id)splitAttributedString:(id)arg1;
- (CDUnknownBlockType)updateBlockForSelected:(_Bool)arg1;
- (void)updateBorderForDeselection;
- (void)updateBorderForSelection;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupBorder;
- (void)setupViews;
- (id)verticalBorderView;
- (id)horizontalBorderView;
- (id)borderView;
- (void)setupNumberOfMonthsLabel;
@property(copy, nonatomic) NSString *regularPriceForStrikeThrough;
- (void)setupInnerContainerTopConstraint;
- (void)setupConstraintsForOuterContainer;

@end
