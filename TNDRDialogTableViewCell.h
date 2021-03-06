//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor, UIImageView, UILabel, UIView;

@interface TNDRDialogTableViewCell : UITableViewCell
{
    _Bool _applySelectStateColors;
    UIImageView *_iconImageView;
    UILabel *_titleTextLabel;
    UIColor *_cellSelectedStateColor;
    UIColor *_cellUnselectedStateColor;
    double _maxWidth;
    UIView *_separatorLine;
    double _accessoryWidth;
}

@property(nonatomic) double accessoryWidth; // @synthesize accessoryWidth=_accessoryWidth;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(readonly, nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(copy, nonatomic) UIColor *cellUnselectedStateColor; // @synthesize cellUnselectedStateColor=_cellUnselectedStateColor;
@property(copy, nonatomic) UIColor *cellSelectedStateColor; // @synthesize cellSelectedStateColor=_cellSelectedStateColor;
@property(nonatomic) _Bool applySelectStateColors; // @synthesize applySelectStateColors=_applySelectStateColors;
@property(retain, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (id)selectedIcon;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)autolayoutSubviews;
- (void)setup;
@property(copy, nonatomic) UIColor *separatorColor;
@property(nonatomic) _Bool hideSeparator;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 maxWidth:(double)arg3 accessoryWidth:(double)arg4;

@end

