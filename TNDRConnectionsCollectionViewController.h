//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRProfileThumbnailViewController.h"

@class UILabel;

@interface TNDRConnectionsCollectionViewController : TNDRProfileThumbnailViewController
{
    UILabel *_detailLabelCurrentUserProfile;
}

@property(retain, nonatomic) UILabel *detailLabelCurrentUserProfile; // @synthesize detailLabelCurrentUserProfile=_detailLabelCurrentUserProfile;
- (void).cxx_destruct;
- (double)contentSizeHeight;
- (struct CGSize)adjustedThumbnailSize;
- (double)adjustedCellMargin;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateViewForModel;
@property(readonly, nonatomic) double calculatedLayoutHeight;
- (long long)collectionViewDisplayedCellCount;
- (void)viewDidLoad;
- (void)adjustLayoutContentSizeForCurrentUser;
- (void)setupCurrentUserDetailConnectionsLabelWithText:(id)arg1;

@end

