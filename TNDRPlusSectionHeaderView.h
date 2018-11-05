//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, TNDRTitleSubtitleView, UIImage, UIImageView, UILabel;

@interface TNDRPlusSectionHeaderView : UICollectionReusableView
{
    UIImageView *_imageView;
    TNDRTitleSubtitleView *_titleSubtitleContainer;
}

+ (double)heightForWidth:(double)arg1 withTitle:(id)arg2 subtitle:(id)arg3;
+ (id)titleFont;
+ (id)subtitleFont;
@property(retain, nonatomic) TNDRTitleSubtitleView *titleSubtitleContainer; // @synthesize titleSubtitleContainer=_titleSubtitleContainer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *subTitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UILabel *subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end
