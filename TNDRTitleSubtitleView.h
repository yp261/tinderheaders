//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TNDRTitleSubtitleView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (struct CGSize)sizeForBoundingWidth:(double)arg1 withTitle:(id)arg2 titleAttributes:(id)arg3 subtitle:(id)arg4 subtitleAttributes:(id)arg5;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

