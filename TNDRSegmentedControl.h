//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSArray, NSDictionary, NSLayoutConstraint, NSString, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol TNDRSegmentedControlDataSource, TNDRSegmentedControlDelegate;

@interface TNDRSegmentedControl : UIView
{
    _Bool _titlenessAnimationInProgress;
    _Bool _panningSelectedItemView;
    long long _selectedItem;
    long long _animatedItem;
    NSArray *_itemViews;
    id <TNDRSegmentedControlDelegate> _delegate;
    NSString *_analyticsMethod;
    NSArray *_images;
    NSArray *_highlightedImages;
    NSArray *_tintedImages;
    NSArray *_imageInsets;
    NSArray *_imageTitleAdjustments;
    UIView *_borderView;
    UIView *_segmentViewsContainer;
    NSDictionary *_viewsDict;
    NSArray *_viewNames;
    UIView *_selectedItemView;
    CALayer *_selectedItemBackground;
    NSLayoutConstraint *_selItemViewLeftOffsetConstraint;
    NSLayoutConstraint *_containerLeftOffsetConstraint;
    long long _previousSelectedItem;
    id <TNDRSegmentedControlDataSource> _dataSource;
    double _titleness;
    UIView *_containerView;
    UIPanGestureRecognizer *_pan;
    UITapGestureRecognizer *_tap;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UIPanGestureRecognizer *pan; // @synthesize pan=_pan;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic, getter=isPanningSelectedItemView) _Bool panningSelectedItemView; // @synthesize panningSelectedItemView=_panningSelectedItemView;
@property(nonatomic) double titleness; // @synthesize titleness=_titleness;
@property(nonatomic) _Bool titlenessAnimationInProgress; // @synthesize titlenessAnimationInProgress=_titlenessAnimationInProgress;
@property(nonatomic) __weak id <TNDRSegmentedControlDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long previousSelectedItem; // @synthesize previousSelectedItem=_previousSelectedItem;
@property(retain, nonatomic) NSLayoutConstraint *containerLeftOffsetConstraint; // @synthesize containerLeftOffsetConstraint=_containerLeftOffsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *selItemViewLeftOffsetConstraint; // @synthesize selItemViewLeftOffsetConstraint=_selItemViewLeftOffsetConstraint;
@property(retain, nonatomic) CALayer *selectedItemBackground; // @synthesize selectedItemBackground=_selectedItemBackground;
@property(retain, nonatomic) UIView *selectedItemView; // @synthesize selectedItemView=_selectedItemView;
@property(copy, nonatomic) NSArray *viewNames; // @synthesize viewNames=_viewNames;
@property(copy, nonatomic) NSDictionary *viewsDict; // @synthesize viewsDict=_viewsDict;
@property(retain, nonatomic) UIView *segmentViewsContainer; // @synthesize segmentViewsContainer=_segmentViewsContainer;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(copy, nonatomic) NSArray *imageTitleAdjustments; // @synthesize imageTitleAdjustments=_imageTitleAdjustments;
@property(copy, nonatomic) NSArray *imageInsets; // @synthesize imageInsets=_imageInsets;
@property(copy, nonatomic) NSArray *tintedImages; // @synthesize tintedImages=_tintedImages;
@property(copy, nonatomic) NSArray *highlightedImages; // @synthesize highlightedImages=_highlightedImages;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(copy, nonatomic) NSString *analyticsMethod; // @synthesize analyticsMethod=_analyticsMethod;
@property(nonatomic) __weak id <TNDRSegmentedControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) long long animatedItem; // @synthesize animatedItem=_animatedItem;
@property(readonly, nonatomic) long long selectedItem; // @synthesize selectedItem=_selectedItem;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)stopAnimationOnIndex:(long long)arg1;
- (void)animateItemAtIndex:(long long)arg1;
- (void)updateSelectedItemColorWithTitleness:(double)arg1;
- (void)animateWithTitleness:(double)arg1 direction:(double)arg2;
- (void)updateSelectedItemViewAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)constrainViewsEdgesToEachOther:(id)arg1 viewsDict:(id)arg2;
- (void)constrainEqualWidthForViews:(id)arg1;
- (void)setupSegmentViewsWithImages;
- (id)layerWithHighlightedImageAtIndex:(long long)arg1;
- (void)updateImageViewForSelectedIndex;
- (void)animateSocialTab;
- (void)setSelectedItem:(long long)arg1;
- (void)setSelectedItem:(long long)arg1 withAnalyticsMethod:(id)arg2;
- (void)updateSegmentedViewImagesAndSelectedItemViewWithIndex:(long long)arg1;
- (void)handlePanInView:(id)arg1;
- (void)handleTapInView:(id)arg1;
- (void)refreshData;
- (void)loadPropertiesFromDataSource;
- (void)setup;
- (id)initWithDataSource:(id)arg1;

@end

