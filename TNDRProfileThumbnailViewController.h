//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FXPageControl, NSLayoutConstraint, NSString, TNDRProfileThumbnailFlowLayout, TNDRThumbnailViewModel, UICollectionView, UILabel;

@interface TNDRProfileThumbnailViewController : UIViewController <UIScrollViewDelegate, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
    TNDRThumbnailViewModel *_viewModel;
    UILabel *_titleLabel;
    FXPageControl *_pageControl;
    NSLayoutConstraint *_pageControlWidthConstraint;
    TNDRProfileThumbnailFlowLayout *_collectionViewLayout;
}

@property(retain, nonatomic) TNDRProfileThumbnailFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) NSLayoutConstraint *pageControlWidthConstraint; // @synthesize pageControlWidthConstraint=_pageControlWidthConstraint;
@property(retain, nonatomic) FXPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TNDRThumbnailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateCollectionViewItemSize:(struct CGSize)arg1;
- (void)setupCollectionView;
- (void)setPageControlNumberOfPages:(unsigned long long)arg1;
- (void)setupPageControl;
- (void)setupTitleView;
- (void)setup;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

