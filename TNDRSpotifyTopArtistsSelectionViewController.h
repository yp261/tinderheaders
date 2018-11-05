//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TNDRDisconnectSpotifyDelegate-Protocol.h"
#import "TNDRNotificationWindowDelegate-Protocol.h"
#import "TNDRSpotifyAPIModelDelegate-Protocol.h"
#import "TNDRSpotifyTopArtistsSelectDelegate-Protocol.h"
#import "TNDRURLNavigableProtocol-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSString, TNDRAnalyticsTracker, TNDRLeanplumTracker, TNDRLeanplumUserAttributeTracker, TNDRNotificationWindow, TNDRSpotifyDisconnectFooterView, TNDRSpotifyTopArtistHeaderView, TNDRSpotifyTopArtistsViewModel, UINavigationBar, UIRefreshControl, UITableView;
@protocol TNDRSpotifyTopArtistsSelectionDelegate, UIViewControllerAnimatedTransitioning;

@interface TNDRSpotifyTopArtistsSelectionViewController : UIViewController <UITableViewDelegate, TNDRSpotifyAPIModelDelegate, TNDRSpotifyTopArtistsSelectDelegate, TNDRDisconnectSpotifyDelegate, TNDRNotificationWindowDelegate, TNDRURLNavigableProtocol>
{
    id <TNDRSpotifyTopArtistsSelectionDelegate> _delegate;
    UINavigationBar *_navBar;
    UITableView *_tableView;
    TNDRSpotifyTopArtistsViewModel *_topArtistsViewModel;
    TNDRSpotifyTopArtistHeaderView *_topArtistHeaderView;
    TNDRSpotifyDisconnectFooterView *_disconnectSpotifyFooterView;
    UIRefreshControl *_refreshControl;
}

+ (id)viewControllerNavigationKey;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) TNDRSpotifyDisconnectFooterView *disconnectSpotifyFooterView; // @synthesize disconnectSpotifyFooterView=_disconnectSpotifyFooterView;
@property(retain, nonatomic) TNDRSpotifyTopArtistHeaderView *topArtistHeaderView; // @synthesize topArtistHeaderView=_topArtistHeaderView;
@property(retain, nonatomic) TNDRSpotifyTopArtistsViewModel *topArtistsViewModel; // @synthesize topArtistsViewModel=_topArtistsViewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property(nonatomic) __weak id <TNDRSpotifyTopArtistsSelectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelTopArtistsSelection;
- (void)disconnectSpotifyUserDidTap:(id)arg1;
- (void)selectAllTopArtistsUserDidTap:(id)arg1;
- (void)didFailRefreshingSpotifyAPIData;
- (void)didRefreshSpotifyAPIData;
- (void)pullToRefreshTopArtists:(id)arg1;
- (void)refreshViews;
- (void)preventDoubleTapForCellAtIndexPath:(id)arg1 tableView:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didFinishSelectingTopArtists;
- (void)showNetworkFailureNotificationWindow;
@property(readonly, copy, nonatomic) NSDictionary *viewsForAL;
@property(readonly, copy, nonatomic) NSDictionary *metricsForAL;
- (void)setupConstraints;
- (void)setupRefreshControl;
- (void)setupTableView;
- (void)setupNavBar;
@property(readonly, nonatomic) TNDRAnalyticsTracker *analyticsTracker;
@property(readonly, nonatomic) TNDRLeanplumUserAttributeTracker *leanplumAttributeTracker;
@property(readonly, nonatomic) TNDRLeanplumTracker *leanplumTracker;
@property(readonly, nonatomic) TNDRNotificationWindow *notificationWindow;
- (void)setup;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
