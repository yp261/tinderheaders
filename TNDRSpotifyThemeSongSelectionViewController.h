//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TNDRNotificationWindowDelegate-Protocol.h"
#import "TNDROptOutThemeSongDelegate-Protocol.h"
#import "TNDRSpotifyAPIModelDelegate-Protocol.h"
#import "TNDRURLNavigableProtocol-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSDictionary, NSNotificationCenter, NSOperationQueue, NSString, TNDRAnalyticsTracker, TNDRCoreDataService, TNDRCurrentUser, TNDRCustomSearchBarView, TNDRLeanplumTracker, TNDRLeanplumUserAttributeTracker, TNDRNotificationWindow, TNDRSpotifyAnalyticsTracker, TNDRSpotifyAuthenticator, TNDRSpotifyThemeSongViewModel, TNDRThemeSongSearchViewModel, TNDRThemeSongSelectionHeaderView, UIActivityIndicatorView, UILabel, UINavigationBar, UITableView, UIView;
@protocol TNDRSpotifyThemeSongSelectionDelegate, UITableViewDataSource><TNDRThemeSongProtocol, UIViewControllerAnimatedTransitioning;

@interface TNDRSpotifyThemeSongSelectionViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, TNDRSpotifyAPIModelDelegate, TNDROptOutThemeSongDelegate, TNDRNotificationWindowDelegate, TNDRURLNavigableProtocol>
{
    _Bool _inSearchMode;
    _Bool _isInSearchMode;
    NSNotificationCenter *_notificationCenter;
    UINavigationBar *_navBar;
    id <TNDRSpotifyThemeSongSelectionDelegate> _delegate;
    TNDRCustomSearchBarView *_customSearchBarView;
    UITableView *_tableView;
    TNDRSpotifyThemeSongViewModel *_themeSongViewModel;
    TNDRThemeSongSearchViewModel *_themeSongSearchViewModel;
    id <UITableViewDataSource><TNDRThemeSongProtocol> _currentThemeSongViewModel;
    TNDRThemeSongSelectionHeaderView *_optOutHeaderView;
    UIView *_searchResultHeaderView;
    NSOperationQueue *_themeSongSelectionQueue;
    UIView *_loadingView;
    UILabel *_loadingLabel;
    UIView *_searchOverlayView;
    UIView *_statusOverlayView;
    UIActivityIndicatorView *_spinner;
    TNDRSpotifyAuthenticator *_spotifyAuthenticator;
}

+ (id)viewControllerNavigationKey;
@property(nonatomic, getter=isInSearchMode) _Bool inSearchMode; // @synthesize inSearchMode=_inSearchMode;
@property(retain, nonatomic) TNDRSpotifyAuthenticator *spotifyAuthenticator; // @synthesize spotifyAuthenticator=_spotifyAuthenticator;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIView *statusOverlayView; // @synthesize statusOverlayView=_statusOverlayView;
@property(retain, nonatomic) UIView *searchOverlayView; // @synthesize searchOverlayView=_searchOverlayView;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSOperationQueue *themeSongSelectionQueue; // @synthesize themeSongSelectionQueue=_themeSongSelectionQueue;
@property(retain, nonatomic) UIView *searchResultHeaderView; // @synthesize searchResultHeaderView=_searchResultHeaderView;
@property(retain, nonatomic) TNDRThemeSongSelectionHeaderView *optOutHeaderView; // @synthesize optOutHeaderView=_optOutHeaderView;
@property(retain, nonatomic) id <UITableViewDataSource><TNDRThemeSongProtocol> currentThemeSongViewModel; // @synthesize currentThemeSongViewModel=_currentThemeSongViewModel;
@property(retain, nonatomic) TNDRThemeSongSearchViewModel *themeSongSearchViewModel; // @synthesize themeSongSearchViewModel=_themeSongSearchViewModel;
@property(retain, nonatomic) TNDRSpotifyThemeSongViewModel *themeSongViewModel; // @synthesize themeSongViewModel=_themeSongViewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TNDRCustomSearchBarView *customSearchBarView; // @synthesize customSearchBarView=_customSearchBarView;
@property(nonatomic) __weak id <TNDRSpotifyThemeSongSelectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
- (void).cxx_destruct;
- (long long)languageDirection;
- (void)didFailRefreshingSpotifyAPIData;
- (void)didRefreshSpotifyAPIData;
- (void)didReceiveMemoryWarning;
- (void)optOutThemeSongViewUserDidTap:(id)arg1;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)processThemeSongChangeWithParams:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)isFromSearchingAnthem;
- (void)showNetworkFailureNotificationWindow;
@property(readonly, copy, nonatomic) NSDictionary *viewsForAL;
@property(readonly, copy, nonatomic) NSDictionary *metricsForAL;
- (void)setupLoadingConstraints;
- (void)setupVertLayoutConstraints;
- (void)setupTableViewConstraints;
- (void)setupConstraints;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)handleOverlayTap:(id)arg1;
- (void)setupStatusOverlayView;
- (void)setupSearchOverlayView;
- (void)setupLoadingView;
- (void)setupTableView;
- (void)setupSearchBar;
- (void)cancelThemeSelection;
- (void)setupNavBar;
@property(nonatomic) _Bool isInSearchMode; // @synthesize isInSearchMode=_isInSearchMode;
- (double)statusBarHeight;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)setup;
@property(readonly, nonatomic) TNDRCoreDataService *dataService;
@property(readonly, nonatomic) TNDRAnalyticsTracker *analyticsTracker;
@property(readonly, nonatomic) TNDRLeanplumUserAttributeTracker *leanplumAttributeTracker;
@property(readonly, nonatomic) TNDRLeanplumTracker *leanplumTracker;
@property(readonly, nonatomic) TNDRNotificationWindow *notificationWindow;
@property(readonly, nonatomic) TNDRCurrentUser *currentUser;
@property(readonly, nonatomic) TNDRSpotifyAnalyticsTracker *spotifyAnalyticsTracker;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

