//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TNDRLocation, TNDRPassportLocationsListViewModel;

@protocol TNDRPassportLocationsListViewControllerDelegate <NSObject>
- (void)didSelectToCloseLocationListWithoutTraveling;
- (void)didSelectTravelToLocation:(TNDRLocation *)arg1;
- (void)didSelectToOpenMapSearchController;
- (void)didSelectToNavigateToPassportPaywall:(unsigned long long)arg1;

@optional
- (TNDRPassportLocationsListViewModel *)newPassportViewModel;
- (void)selectedNewLocation:(TNDRLocation *)arg1;
@end

