//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, UIImageView, UILabel;

@interface TNDRSpotifyNoResultTableViewCell : UITableViewCell
{
    UIImageView *_noResultIconView;
    UILabel *_titleLabel;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *noResultIconView; // @synthesize noResultIconView=_noResultIconView;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *viewsForAL;
@property(readonly, copy, nonatomic) NSDictionary *metricsForAL;
- (void)setupConstraints;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

