//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSLayoutConstraint, NSMutableDictionary, NSString, UIImageView;

@interface TNDRPhotoClusterView : UIView
{
    UIImageView *_transitionImageView;
    NSString *_transitioningUserID;
    long long _photoCount;
    NSDictionary *_imageURLs;
    NSMutableDictionary *_displayedURLs;
    NSArray *_members;
    NSArray *_imageViews;
    NSArray *_spinners;
    long long _clusterType;
    NSLayoutConstraint *_topLeftFullWidthConstraint;
    NSLayoutConstraint *_topLeftHalfWidthConstraint;
    NSLayoutConstraint *_bottomLeftFullWidthConstraint;
    NSLayoutConstraint *_bottomLeftHalfWidthConstraint;
    NSArray *_imageBorderLayers;
    long long _border;
}

@property(nonatomic) long long border; // @synthesize border=_border;
@property(retain, nonatomic) NSArray *imageBorderLayers; // @synthesize imageBorderLayers=_imageBorderLayers;
@property(retain, nonatomic) NSLayoutConstraint *bottomLeftHalfWidthConstraint; // @synthesize bottomLeftHalfWidthConstraint=_bottomLeftHalfWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomLeftFullWidthConstraint; // @synthesize bottomLeftFullWidthConstraint=_bottomLeftFullWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topLeftHalfWidthConstraint; // @synthesize topLeftHalfWidthConstraint=_topLeftHalfWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topLeftFullWidthConstraint; // @synthesize topLeftFullWidthConstraint=_topLeftFullWidthConstraint;
@property(nonatomic) long long clusterType; // @synthesize clusterType=_clusterType;
@property(retain, nonatomic) NSArray *spinners; // @synthesize spinners=_spinners;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property(retain, nonatomic) NSMutableDictionary *displayedURLs; // @synthesize displayedURLs=_displayedURLs;
@property(retain, nonatomic) NSDictionary *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(nonatomic) long long photoCount; // @synthesize photoCount=_photoCount;
@property(copy, nonatomic) NSString *transitioningUserID; // @synthesize transitioningUserID=_transitioningUserID;
@property(retain, nonatomic) UIImageView *transitionImageView; // @synthesize transitionImageView=_transitionImageView;
- (void).cxx_destruct;
- (void)updateBackgroundColorForClusterType;
- (void)updateTransitionInfoToProfileAtIndex:(unsigned long long)arg1;
- (void)updateTappedCellWithTouchPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (id)viewsForAL;
- (id)metricsForAL;
- (void)setURLForPhotoAtIndex:(long long)arg1;
- (id)photoURLForUser:(id)arg1;
- (void)loadImageURLsForMembers:(id)arg1;
- (double)preferredWidthForImage;
- (void)resetView;
- (void)updateImageClusterForCount:(long long)arg1;
- (void)configureWithGroupMembers:(id)arg1;
- (id)buildSpinnerConstraints;
- (void)setupHalfWidthConstraints;
- (id)buildPhotoConstraints;
- (id)buildConstraints:(long long)arg1;
- (id)bezierPathWithRect:(struct CGRect)arg1 startLocation:(long long)arg2 direction:(long long)arg3;
- (void)updateImageViewBorders;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 forType:(long long)arg2 border:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 forType:(long long)arg2;

@end

