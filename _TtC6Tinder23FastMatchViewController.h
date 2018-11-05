//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, PINRemoteImageManager, TNDRCoreDataService, TNDRURLManager, UIApplication, UICollectionView, _TtC6Tinder13FastMatchView, _TtC6Tinder22FastMatchToProfileFlow;

@interface _TtC6Tinder23FastMatchViewController : UIViewController
{
    // Error parsing type: , name: imageManager.storage
    // Error parsing type: , name: urlManager.storage
    // Error parsing type: , name: dataService.storage
    // Error parsing type: , name: application.storage
    // Error parsing type: , name: recsProvider.storage
    // Error parsing type: , name: recommendationsObserver.storage
    // Error parsing type: , name: profileRouter
    // Error parsing type: , name: collectionView.storage
    // Error parsing type: , name: previousContentOffset
    // Error parsing type: , name: contentOffsetTranslation
    // Error parsing type: , name: userCellViewModel.storage
    // Error parsing type: , name: request
    // Error parsing type: , name: indexPathRatings
    // Error parsing type: , name: ratingsInteractor.storage
    // Error parsing type: , name: fastMatchView.storage
}

+ (id)viewControllerNavigationKey;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)fetchRecommendations;
- (void)performLikeAnimationsAt:(id)arg1;
- (void)doneButtonTappedWithSender:(id)arg1;
- (void)configureFor:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(nonatomic, retain) _TtC6Tinder13FastMatchView *fastMatchView;
@property(nonatomic, readonly) NSArray *recommendations;
@property(nonatomic) double contentOffsetTranslation; // @synthesize contentOffsetTranslation;
@property(nonatomic) struct CGPoint previousContentOffset; // @synthesize previousContentOffset;
@property(nonatomic, retain) UICollectionView *collectionView;
@property(nonatomic, retain) _TtC6Tinder22FastMatchToProfileFlow *profileRouter; // @synthesize profileRouter;
@property(nonatomic, retain) UIApplication *application;
@property(nonatomic, retain) TNDRCoreDataService *dataService;
@property(nonatomic, retain) TNDRURLManager *urlManager;
@property(nonatomic, retain) PINRemoteImageManager *imageManager;

@end
