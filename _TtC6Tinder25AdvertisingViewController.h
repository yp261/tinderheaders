//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class UICollectionViewFlowLayout, UIPageControl, _TtC6Tinder20AdvertisingViewModel;

@interface _TtC6Tinder25AdvertisingViewController : UICollectionViewController
{
    // Error parsing type: , name: layout
    // Error parsing type: , name: paywallDelegate
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: pageControl
    // Error parsing type: , name: currentPage
    // Error parsing type: , name: autoscrollTimer
    // Error parsing type: , name: currentPageIndex
    // Error parsing type: , name: isRightToLeftLayout
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)configureCollectionView;
- (void)updatePageControlFor:(long long)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) long long currentPage; // @synthesize currentPage;
@property(nonatomic, readonly) UIPageControl *pageControl; // @synthesize pageControl;
@property(nonatomic, readonly) _TtC6Tinder20AdvertisingViewModel *viewModel; // @synthesize viewModel;
@property(nonatomic, readonly) UICollectionViewFlowLayout *layout; // @synthesize layout;

@end

