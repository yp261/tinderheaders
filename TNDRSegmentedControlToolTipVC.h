//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TNDRURLNavigableProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UILabel, UIView;
@protocol TNDRSegmentedControlDataSource, TNDRSegmentedTooltipDelegate, UIViewControllerAnimatedTransitioning><TNDRViewControllerAnimatedTransitioning;

@interface TNDRSegmentedControlToolTipVC : UIViewController <UIGestureRecognizerDelegate, TNDRURLNavigableProtocol>
{
    id <TNDRSegmentedTooltipDelegate> _delegate;
    CDUnknownBlockType _willAppearBlock;
    CDUnknownBlockType _willDisappearBlock;
    UIView *_backgroundOverlay;
    NSArray *_images;
    NSArray *_imageViews;
    UIView *_imageContainer;
    UIView *_horizontalLine;
    UIView *_verticalSelectionLine;
    UILabel *_explanationLabel;
    long long _selectionIndex;
    id <TNDRSegmentedControlDataSource> _dataSource;
}

+ (id)viewControllerNavigationKey;
@property(nonatomic) __weak id <TNDRSegmentedControlDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long selectionIndex; // @synthesize selectionIndex=_selectionIndex;
@property(retain, nonatomic) UILabel *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
@property(retain, nonatomic) UIView *verticalSelectionLine; // @synthesize verticalSelectionLine=_verticalSelectionLine;
@property(retain, nonatomic) UIView *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(retain, nonatomic) UIView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(copy, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) UIView *backgroundOverlay; // @synthesize backgroundOverlay=_backgroundOverlay;
@property(copy, nonatomic) CDUnknownBlockType willDisappearBlock; // @synthesize willDisappearBlock=_willDisappearBlock;
@property(copy, nonatomic) CDUnknownBlockType willAppearBlock; // @synthesize willAppearBlock=_willAppearBlock;
@property(nonatomic) __weak id <TNDRSegmentedTooltipDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)viewsForAL;
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning><TNDRViewControllerAnimatedTransitioning> animationController;
- (void)didTapOverlay:(id)arg1;
- (void)constrainViewsEdgesToEachOther:(id)arg1 viewsDict:(id)arg2;
- (void)constrainEqualWidthForImageViews:(id)arg1;
- (void)setupSegmentViewsWithImages;
- (void)setupConstraints;
- (void)processImagesIntoImageViews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

