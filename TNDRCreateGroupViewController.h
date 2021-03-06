//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "TNDRCreateGroupNoFriendsViewDelegate-Protocol.h"
#import "TNDRDialogViewControllerDelegate-Protocol.h"
#import "TNDRGroupCreateModelDelegate-Protocol.h"
#import "TNDRSearchFieldDelegate-Protocol.h"
#import "TNDRURLNavigableProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TNDRCoreDataService, TNDRCreateGroupHeaderView, TNDRCreateGroupNoFriendsView, TNDREditableAvatarView, TNDRErrorDialogVC, TNDRGroupActionButton, TNDRGroupCreateVM, TNDRSearchField, UITableView, UIView;
@protocol TNDRCreateGroupViewControllerDelegate, UIViewControllerAnimatedTransitioning;

@interface TNDRCreateGroupViewController : UIViewController <TNDRSearchFieldDelegate, UIScrollViewDelegate, UITableViewDelegate, TNDRGroupCreateModelDelegate, TNDRDialogViewControllerDelegate, TNDRCreateGroupNoFriendsViewDelegate, MFMessageComposeViewControllerDelegate, TNDRURLNavigableProtocol>
{
    id <TNDRCreateGroupViewControllerDelegate> _delegate;
    long long _createGroupActionFrom;
    CDUnknownBlockType _introCompletion;
    id <UIViewControllerAnimatedTransitioning> _animationController;
    TNDRCreateGroupHeaderView *_headerView;
    UIView *_darkOverLay;
    UITableView *_tableView;
    UIView *_tableSearchOverlay;
    TNDRGroupActionButton *_actionButton;
    TNDRGroupCreateVM *_viewModel;
    TNDRCreateGroupNoFriendsView *_noFriendsView;
    TNDRErrorDialogVC *_friendsErrorDialog;
    TNDRErrorDialogVC *_createGroupErrorDialog;
    TNDRSearchField *_searchField;
    UIView *_tableFooterView;
    TNDREditableAvatarView *_linearEditableAvatarView;
}

+ (id)viewControllerNavigationKey;
@property(retain, nonatomic) TNDREditableAvatarView *linearEditableAvatarView; // @synthesize linearEditableAvatarView=_linearEditableAvatarView;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) TNDRSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) TNDRErrorDialogVC *createGroupErrorDialog; // @synthesize createGroupErrorDialog=_createGroupErrorDialog;
@property(retain, nonatomic) TNDRErrorDialogVC *friendsErrorDialog; // @synthesize friendsErrorDialog=_friendsErrorDialog;
@property(retain, nonatomic) TNDRCreateGroupNoFriendsView *noFriendsView; // @synthesize noFriendsView=_noFriendsView;
@property(retain, nonatomic) TNDRGroupCreateVM *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TNDRGroupActionButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *tableSearchOverlay; // @synthesize tableSearchOverlay=_tableSearchOverlay;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *darkOverLay; // @synthesize darkOverLay=_darkOverLay;
@property(retain, nonatomic) TNDRCreateGroupHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController; // @synthesize animationController=_animationController;
@property(copy, nonatomic) CDUnknownBlockType introCompletion; // @synthesize introCompletion=_introCompletion;
@property(nonatomic) long long createGroupActionFrom; // @synthesize createGroupActionFrom=_createGroupActionFrom;
@property(nonatomic) __weak id <TNDRCreateGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)shareTinder:(id)arg1;
- (id)viewsForAL;
- (id)metricsForAL;
- (void)showSearchOverlay:(_Bool)arg1 animated:(_Bool)arg2;
- (void)preventDoubleTapForCellAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)refreshViews;
- (void)didRequestToShareTinder;
- (void)dialogViewControllerRequestsDismissal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestCreateGroupErrorDialog;
- (void)handleCreateGroupTapped:(id)arg1;
- (void)createGroupDidCancel;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)headerForAvailable:(_Bool)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)performSearchOnFriendsWithText:(id)arg1;
- (void)tndr_searchFieldSearchButtonClicked:(id)arg1;
- (void)tndr_searchFieldCancelButtonClicked:(id)arg1;
- (void)tndr_searchField:(id)arg1 textDidChange:(id)arg2;
- (void)tndr_searchFieldTextDidEndEditing:(id)arg1;
- (void)tndr_searchFieldTextDidBeginEditing:(id)arg1;
- (void)didFailRefreshingGroupFriendData;
- (void)didRefreshGroupFriendData;
- (void)handleProfilePhotoChanged:(id)arg1;
- (void)handleFriendAvatarDeleted:(id)arg1;
- (void)registerNotifications;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupActionButtonConstraints;
- (void)setupNoFriendsViewConstraints;
- (void)setupTableViewConstraints;
- (void)setupHeaderViewConstraints;
- (void)setupDarkOverLayConstraint;
- (void)setupVertLayoutConstraints;
- (void)setupConstraints;
- (void)setupNoFriendsView;
- (void)setupInviteFriendsView;
- (void)setupSearchField;
- (void)setupTableView;
- (void)setupLinearAvatarView;
- (void)setupHeaderView;
- (void)setupDarkOverLay;
- (void)setup;
@property(readonly, nonatomic) TNDRCoreDataService *dataService;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

