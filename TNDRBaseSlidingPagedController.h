//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TNDRTitleButtonDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, TNDRTitleButton, UINavigationBar, UIPageViewController, UIScrollView, UIView;
@protocol TNDRURLNavigableProtocol;

@interface TNDRBaseSlidingPagedController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate, TNDRTitleButtonDelegate>
{
    _Bool _isTransitioning;
    _Bool _allowScrollTransitionForHeaderTap;
    _Bool _navBarAnimationInProgress;
    _Bool _isRightToLeftUI;
    TNDRTitleButton *_leftmostHeaderItem;
    TNDRTitleButton *_rightmostHeaderItem;
    UINavigationBar *_navigationBar;
    double _currentIndex;
    UIPageViewController *_pagedViewController;
    UIScrollView *_pagedScrollView;
    UINavigationBar *_placeholderNavBar;
    UIView *_navbarSeparator;
    NSArray *_viewControllers;
    NSArray *_headerTitleButtons;
    long long _centerIndex;
    long long _lastIndex;
    TNDRTitleButton *_titleL2;
    TNDRTitleButton *_titleL1;
    TNDRTitleButton *_titleButton;
    TNDRTitleButton *_titleR1;
    TNDRTitleButton *_titleR2;
    long long _slidingURLState;
}

@property(nonatomic) _Bool isRightToLeftUI; // @synthesize isRightToLeftUI=_isRightToLeftUI;
@property(readonly, nonatomic, getter=isNavBarAnimationInProgress) _Bool navBarAnimationInProgress; // @synthesize navBarAnimationInProgress=_navBarAnimationInProgress;
@property(nonatomic) long long slidingURLState; // @synthesize slidingURLState=_slidingURLState;
@property(nonatomic) _Bool allowScrollTransitionForHeaderTap; // @synthesize allowScrollTransitionForHeaderTap=_allowScrollTransitionForHeaderTap;
@property(nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(retain, nonatomic) TNDRTitleButton *titleR2; // @synthesize titleR2=_titleR2;
@property(retain, nonatomic) TNDRTitleButton *titleR1; // @synthesize titleR1=_titleR1;
@property(retain, nonatomic) TNDRTitleButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) TNDRTitleButton *titleL1; // @synthesize titleL1=_titleL1;
@property(retain, nonatomic) TNDRTitleButton *titleL2; // @synthesize titleL2=_titleL2;
@property(nonatomic) long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) long long centerIndex; // @synthesize centerIndex=_centerIndex;
@property(copy, nonatomic) NSArray *headerTitleButtons; // @synthesize headerTitleButtons=_headerTitleButtons;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) UIView *navbarSeparator; // @synthesize navbarSeparator=_navbarSeparator;
@property(retain, nonatomic) UINavigationBar *placeholderNavBar; // @synthesize placeholderNavBar=_placeholderNavBar;
@property(retain, nonatomic) UIScrollView *pagedScrollView; // @synthesize pagedScrollView=_pagedScrollView;
@property(retain, nonatomic) UIPageViewController *pagedViewController; // @synthesize pagedViewController=_pagedViewController;
@property(nonatomic) double currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) TNDRTitleButton *rightmostHeaderItem; // @synthesize rightmostHeaderItem=_rightmostHeaderItem;
@property(retain, nonatomic) TNDRTitleButton *leftmostHeaderItem; // @synthesize leftmostHeaderItem=_leftmostHeaderItem;
- (void).cxx_destruct;
- (void)notifyDidTransitionToViewController;
- (void)notifyWillTransitionToViewController:(long long)arg1;
@property(readonly, nonatomic) UIViewController<TNDRURLNavigableProtocol> *currentlyVisibleViewController;
- (long long)indexOfCurrentlyVisibleViewController;
- (long long)indexOfViewController:(id)arg1;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)enableAllInteraction;
- (void)disableAllInteraction;
- (id)viewControllerBeforeIndex:(long long)arg1;
- (id)viewControllerAfterIndex:(long long)arg1;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)resetHeaderTitleItemsTransform;
- (double)xAdjustForButton:(id)arg1 side:(int)arg2 percentOffset:(double)arg3;
- (double)xOffsetForButtonSide:(int)arg1 fullWidth:(double)arg2 percentOffset:(double)arg3 xAdjust:(double)arg4;
- (void)adjustButton:(id)arg1 forSide:(int)arg2 percentOffset:(double)arg3 fullWidth:(double)arg4 normalizedOffset:(double)arg5;
- (void)applyRotationIfNeededOnButton:(id)arg1 normalizedOffset:(double)arg2;
- (struct CGAffineTransform)rotationForTitleItemAtOffset:(double)arg1;
- (void)adjustNavigationBarForNormalizedOffset:(double)arg1;
- (void)translateHeaderTitleItems:(double)arg1;
- (double)normalizedOffsetFromScrollOffset:(double)arg1;
- (void)adjustHeaderItemsTitlenessForNormalizedOffset:(double)arg1;
- (void)adjustHeaderNavigationItemsToScrollOffset:(double)arg1;
- (void)adjustCurrentIndexToScrollOffset:(double)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didTouchUpInsideTitleButton;
- (void)didDragInsideTitleButton;
- (void)didTouchDownInsideTitleButton;
- (void)extendHitEdgeForButton:(id)arg1;
- (void)extendHitEdgesForTitleButtons;
- (void)assignScrollViewDelegateToSelfFrom:(id)arg1;
- (void)updateInternalViewControllerArray:(id)arg1;
- (void)transitionToViewControllerWithDirection:(long long)arg1 fromIndex:(long long)arg2 numberOfTimes:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transitionToViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transitionToViewController:(id)arg1;
- (void)transitionToViewControllerAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transitionToViewControllerAtIndex:(long long)arg1;
- (void)handleAnimateNavigationBarNotification:(id)arg1;
- (void)handleBlockScrollingForNavigationBarAnimation:(id)arg1;
- (void)handleHeaderButtonTap:(id)arg1;
- (void)setupNavigationBar;
- (void)setupHeaderItemsForIndex:(long long)arg1 offset:(double)arg2;
- (void)setupHeaderItemsForIndex:(long long)arg1;
- (void)setupHeaderTitleButtonActions;
- (void)setupWithViewControllers:(id)arg1 headerTitleButtons:(id)arg2 initialIndex:(long long)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithViewControllers:(id)arg1 headerTitleButtons:(id)arg2 initialViewControllerIndex:(long long)arg3;
- (id)initWithViewControllerSets:(id)arg1 initialViewControllerIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

