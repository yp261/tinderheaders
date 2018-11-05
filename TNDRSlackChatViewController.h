//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SlackTextViewController/SLKTextViewController.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "TNDRActionDialogViewControllerDelegate-Protocol.h"
#import "TNDRActionSheetDelegate-Protocol.h"
#import "TNDRBlockMatchDialogDelegate-Protocol.h"
#import "TNDRBlockMatchTapEventDelegate-Protocol.h"
#import "TNDRChatAnalyticsClientDelegate-Protocol.h"
#import "TNDRChatCellDelegate-Protocol.h"
#import "TNDRChatMessagesViewModelDelegate-Protocol.h"
#import "TNDRGIFGalleryViewControllerDelegate-Protocol.h"
#import "TNDRGIFStripDataSourceDelegate-Protocol.h"
#import "TNDRGoingOutBannerViewDelegate-Protocol.h"
#import "TNDRMapPreviewViewControllerDelegate-Protocol.h"
#import "TNDRMessageStandardsPresenter-Protocol.h"
#import "TNDRNotificationWindowDelegate-Protocol.h"
#import "TNDRProfilePreviewDelegate-Protocol.h"
#import "TNDRReportDialogViewControllerDelegate-Protocol.h"
#import "TNDRURLNavigableProtocol-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSArray, NSDictionary, NSFetchedResultsController, NSMutableArray, NSNumber, NSString, NSTimer, TNDRActionSheet, TNDRAnalyticsTracker, TNDRAttributedLabel, TNDRAvatarLinearView, TNDRBlockMatch, TNDRButtonAnimateView, TNDRCRMNotificationBanner, TNDRChatAnalyticsClient, TNDRChatMessagesViewModel, TNDRChatToProfileTransitioningDelegate, TNDRCoreDataService, TNDRCurrentUser, TNDRGIFGalleryViewController, TNDRGIFModel, TNDRGIFStripDataSource, TNDRGoingOutBannerTinderView, TNDRGoingOutBannerViewV2, TNDRGroupProfileViewController, TNDRLeaveDisbandGroupDialogVC, TNDRMatch, TNDRMatchImage, TNDRMatchToChatAnimationController, TNDRMatchesGoingOutExperiment, TNDRMessageStandardsContext, TNDRProfilePreviewViewController, TNDRPushNotificationExperiment, TNDRReportGroupDialogV2ViewController, TNDRReportGroupDialogViewController, TNDRReportMatchDialogViewController, TNDRReportUserDialogViewController, TNDRReportingV2Experiment, TNDRSLKTextInputbar, TNDRURLManager, UIButton, UICollectionViewFlowLayout, UIImage, UIImageView, UINavigationBar, UINavigationItem, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, _TtC6Tinder28PushPermissionsDialogContext;
@protocol TNDRChatViewControllerDelegate, TNDRPerformanceTrackerProtocol, UIViewControllerAnimatedTransitioning;

@interface TNDRSlackChatViewController : SLKTextViewController <NSFetchedResultsControllerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerPreviewingDelegate, TNDRActionSheetDelegate, TNDRProfilePreviewDelegate, TNDRChatMessagesViewModelDelegate, TTTAttributedLabelDelegate, TNDRNotificationWindowDelegate, TNDRChatCellDelegate, TNDRReportDialogViewControllerDelegate, TNDRMapPreviewViewControllerDelegate, TNDRGIFGalleryViewControllerDelegate, TNDRGIFStripDataSourceDelegate, TNDRGoingOutBannerViewDelegate, TNDRBlockMatchTapEventDelegate, TNDRChatAnalyticsClientDelegate, TNDRActionDialogViewControllerDelegate, TNDRBlockMatchDialogDelegate, TNDRMessageStandardsPresenter, TNDRURLNavigableProtocol>
{
    _Bool _showsLoading;
    _Bool _readyForPresentation;
    _Bool _miniStackVisible;
    _Bool _isPreviewingForPeek;
    _Bool _scrolledToBottom;
    _Bool _hadFirstResponder;
    _Bool _canOpenAvatar;
    _Bool _reloadAfterResendingMessage;
    _Bool _shouldReloadForMoreMessages;
    _Bool _attemptingBlock;
    _Bool _gifModeEnabled;
    _Bool _needsToScrollToBottom;
    _Bool _insertPending;
    _Bool _hasRegisteredFor3DTouchPreviewing;
    _Bool _isPreviewingChat;
    _Bool _userDidPressEnablePush;
    TNDRMatch *_match;
    UIView *_avatarAndNameView;
    double _offsetY;
    UIImage *_matchImage;
    id <TNDRChatViewControllerDelegate> _delegate;
    TNDRMatchToChatAnimationController *_animationDelegate;
    NSNumber *_notificationType;
    UINavigationBar *_navigationBar;
    NSString *_shortcutSource;
    NSFetchedResultsController *_fetchedResultsController;
    NSArray *_dataItemsArray;
    UIView *_possibleKeyboardView;
    UIView *_screenshotView;
    UIView *_noMessagesView;
    NSString *_defaultPlaceholderText;
    CDUnknownBlockType _navigationBarLayoutBlock;
    UICollectionViewFlowLayout *_standardFlowLayout;
    TNDRChatMessagesViewModel *_viewModel;
    TNDRAttributedLabel *_textHeightLabel;
    UIView *_loadingHeader;
    UIImageView *_loadingFlame;
    NSTimer *_reloadTimer;
    UIPanGestureRecognizer *_timeRevealPanGestureRecognizer;
    UITapGestureRecognizer *_tapAvatarTitleGestureRecognizer;
    double _curDiffX;
    UINavigationItem *_baseNavigationItem;
    UINavigationItem *_previewNavigationItem;
    TNDRActionSheet *_moreActionSheet;
    NSArray *_groupMembers;
    TNDRBlockMatch *_blockMatchManager;
    NSMutableArray *_fetchedObjectChanges;
    TNDRProfilePreviewViewController *_profilePreviewVC;
    TNDRGIFGalleryViewController *_gifPreviewVC;
    TNDRReportUserDialogViewController *_reportUserDialogViewController;
    TNDRChatToProfileTransitioningDelegate *_profileTransitionDelegate;
    TNDRGroupProfileViewController *_groupProfileVC;
    NSString *_stashedTextForMessage;
    TNDRGIFStripDataSource *_gifDataSource;
    TNDRGIFModel *_selectedGIF;
    TNDRButtonAnimateView *_animateView;
    UIButton *_clearButtonForGIFs;
    long long _maxTextLength;
    TNDRReportGroupDialogViewController *_reportGroupDialogViewController;
    TNDRMatchImage *_matchImageObject;
    TNDRAvatarLinearView *_avatarLinearView;
    double _lastContentOffset;
    TNDRCurrentUser *_currentUser;
    TNDRGoingOutBannerTinderView *_goingOutBannerView;
    TNDRGoingOutBannerViewV2 *_goingOutBannerViewV2;
    UIView *_bannerViewBackgroundFadeView;
    long long _goingOutState;
    TNDRChatAnalyticsClient *_analyticsClient;
    TNDRCRMNotificationBanner *_pushNotificationBanner;
    _TtC6Tinder28PushPermissionsDialogContext *_pushPermissionsContext;
    NSDictionary *_actionSheetButtonIndexDictionary;
    NSNumber *_reportUserInGroupMatchIndex;
    TNDRReportMatchDialogViewController *_reportMatchExperimentViewController;
    TNDRReportGroupDialogV2ViewController *_reportGroupExperimentViewController;
    TNDRLeaveDisbandGroupDialogVC *_leaveGroupDialogVC;
    TNDRMessageStandardsContext *_messageStandardsContext;
    struct CGPoint _panStartPoint;
    struct CGPoint _panCurPoint;
    struct UIEdgeInsets _edgeInsetsInNormalMode;
}

+ (id)viewControllerNavigationKey;
@property(retain, nonatomic) TNDRMessageStandardsContext *messageStandardsContext; // @synthesize messageStandardsContext=_messageStandardsContext;
@property(retain, nonatomic) TNDRLeaveDisbandGroupDialogVC *leaveGroupDialogVC; // @synthesize leaveGroupDialogVC=_leaveGroupDialogVC;
@property(retain, nonatomic) TNDRReportGroupDialogV2ViewController *reportGroupExperimentViewController; // @synthesize reportGroupExperimentViewController=_reportGroupExperimentViewController;
@property(retain, nonatomic) TNDRReportMatchDialogViewController *reportMatchExperimentViewController; // @synthesize reportMatchExperimentViewController=_reportMatchExperimentViewController;
@property(retain, nonatomic) NSNumber *reportUserInGroupMatchIndex; // @synthesize reportUserInGroupMatchIndex=_reportUserInGroupMatchIndex;
@property(retain, nonatomic) NSDictionary *actionSheetButtonIndexDictionary; // @synthesize actionSheetButtonIndexDictionary=_actionSheetButtonIndexDictionary;
@property(nonatomic) _Bool userDidPressEnablePush; // @synthesize userDidPressEnablePush=_userDidPressEnablePush;
@property(retain, nonatomic) _TtC6Tinder28PushPermissionsDialogContext *pushPermissionsContext; // @synthesize pushPermissionsContext=_pushPermissionsContext;
@property(retain, nonatomic) TNDRCRMNotificationBanner *pushNotificationBanner; // @synthesize pushNotificationBanner=_pushNotificationBanner;
@property(retain, nonatomic) TNDRChatAnalyticsClient *analyticsClient; // @synthesize analyticsClient=_analyticsClient;
@property(nonatomic) long long goingOutState; // @synthesize goingOutState=_goingOutState;
@property(retain, nonatomic) UIView *bannerViewBackgroundFadeView; // @synthesize bannerViewBackgroundFadeView=_bannerViewBackgroundFadeView;
@property(retain, nonatomic) TNDRGoingOutBannerViewV2 *goingOutBannerViewV2; // @synthesize goingOutBannerViewV2=_goingOutBannerViewV2;
@property(retain, nonatomic) TNDRGoingOutBannerTinderView *goingOutBannerView; // @synthesize goingOutBannerView=_goingOutBannerView;
@property(readonly, nonatomic) TNDRCurrentUser *currentUser; // @synthesize currentUser=_currentUser;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) TNDRAvatarLinearView *avatarLinearView; // @synthesize avatarLinearView=_avatarLinearView;
@property(retain, nonatomic) TNDRMatchImage *matchImageObject; // @synthesize matchImageObject=_matchImageObject;
@property(retain, nonatomic) TNDRReportGroupDialogViewController *reportGroupDialogViewController; // @synthesize reportGroupDialogViewController=_reportGroupDialogViewController;
@property(nonatomic) _Bool isPreviewingChat; // @synthesize isPreviewingChat=_isPreviewingChat;
@property(nonatomic) _Bool hasRegisteredFor3DTouchPreviewing; // @synthesize hasRegisteredFor3DTouchPreviewing=_hasRegisteredFor3DTouchPreviewing;
@property(nonatomic) long long maxTextLength; // @synthesize maxTextLength=_maxTextLength;
@property(nonatomic) _Bool insertPending; // @synthesize insertPending=_insertPending;
@property(nonatomic) _Bool needsToScrollToBottom; // @synthesize needsToScrollToBottom=_needsToScrollToBottom;
@property(nonatomic) struct UIEdgeInsets edgeInsetsInNormalMode; // @synthesize edgeInsetsInNormalMode=_edgeInsetsInNormalMode;
@property(retain, nonatomic) UIButton *clearButtonForGIFs; // @synthesize clearButtonForGIFs=_clearButtonForGIFs;
@property(retain, nonatomic) TNDRButtonAnimateView *animateView; // @synthesize animateView=_animateView;
@property(retain, nonatomic) TNDRGIFModel *selectedGIF; // @synthesize selectedGIF=_selectedGIF;
@property(retain, nonatomic) TNDRGIFStripDataSource *gifDataSource; // @synthesize gifDataSource=_gifDataSource;
@property(copy, nonatomic) NSString *stashedTextForMessage; // @synthesize stashedTextForMessage=_stashedTextForMessage;
@property(nonatomic) _Bool gifModeEnabled; // @synthesize gifModeEnabled=_gifModeEnabled;
@property(retain, nonatomic) TNDRGroupProfileViewController *groupProfileVC; // @synthesize groupProfileVC=_groupProfileVC;
@property(retain, nonatomic) TNDRChatToProfileTransitioningDelegate *profileTransitionDelegate; // @synthesize profileTransitionDelegate=_profileTransitionDelegate;
@property(retain, nonatomic) TNDRReportUserDialogViewController *reportUserDialogViewController; // @synthesize reportUserDialogViewController=_reportUserDialogViewController;
@property(nonatomic) __weak TNDRGIFGalleryViewController *gifPreviewVC; // @synthesize gifPreviewVC=_gifPreviewVC;
@property(retain, nonatomic) TNDRProfilePreviewViewController *profilePreviewVC; // @synthesize profilePreviewVC=_profilePreviewVC;
@property(retain, nonatomic) NSMutableArray *fetchedObjectChanges; // @synthesize fetchedObjectChanges=_fetchedObjectChanges;
@property(retain, nonatomic) TNDRBlockMatch *blockMatchManager; // @synthesize blockMatchManager=_blockMatchManager;
@property(nonatomic, getter=isAttemptingBlock) _Bool attemptingBlock; // @synthesize attemptingBlock=_attemptingBlock;
@property(retain, nonatomic) NSArray *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(retain, nonatomic) TNDRActionSheet *moreActionSheet; // @synthesize moreActionSheet=_moreActionSheet;
@property(retain, nonatomic) UINavigationItem *previewNavigationItem; // @synthesize previewNavigationItem=_previewNavigationItem;
@property(retain, nonatomic) UINavigationItem *baseNavigationItem; // @synthesize baseNavigationItem=_baseNavigationItem;
@property(nonatomic) double curDiffX; // @synthesize curDiffX=_curDiffX;
@property(nonatomic) struct CGPoint panCurPoint; // @synthesize panCurPoint=_panCurPoint;
@property(nonatomic) struct CGPoint panStartPoint; // @synthesize panStartPoint=_panStartPoint;
@property(retain, nonatomic) UITapGestureRecognizer *tapAvatarTitleGestureRecognizer; // @synthesize tapAvatarTitleGestureRecognizer=_tapAvatarTitleGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *timeRevealPanGestureRecognizer; // @synthesize timeRevealPanGestureRecognizer=_timeRevealPanGestureRecognizer;
@property(nonatomic) _Bool shouldReloadForMoreMessages; // @synthesize shouldReloadForMoreMessages=_shouldReloadForMoreMessages;
@property(retain, nonatomic) NSTimer *reloadTimer; // @synthesize reloadTimer=_reloadTimer;
@property(retain, nonatomic) UIImageView *loadingFlame; // @synthesize loadingFlame=_loadingFlame;
@property(retain, nonatomic) UIView *loadingHeader; // @synthesize loadingHeader=_loadingHeader;
@property(retain, nonatomic) TNDRAttributedLabel *textHeightLabel; // @synthesize textHeightLabel=_textHeightLabel;
@property(retain, nonatomic) TNDRChatMessagesViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UICollectionViewFlowLayout *standardFlowLayout; // @synthesize standardFlowLayout=_standardFlowLayout;
@property(copy, nonatomic) CDUnknownBlockType navigationBarLayoutBlock; // @synthesize navigationBarLayoutBlock=_navigationBarLayoutBlock;
@property(nonatomic, getter=shouldReloadAfterResendingMessage) _Bool reloadAfterResendingMessage; // @synthesize reloadAfterResendingMessage=_reloadAfterResendingMessage;
@property(nonatomic) _Bool canOpenAvatar; // @synthesize canOpenAvatar=_canOpenAvatar;
@property(retain, nonatomic) NSString *defaultPlaceholderText; // @synthesize defaultPlaceholderText=_defaultPlaceholderText;
@property(retain, nonatomic) UIView *noMessagesView; // @synthesize noMessagesView=_noMessagesView;
@property(nonatomic) _Bool hadFirstResponder; // @synthesize hadFirstResponder=_hadFirstResponder;
@property(retain, nonatomic) UIView *screenshotView; // @synthesize screenshotView=_screenshotView;
@property(retain, nonatomic) UIView *possibleKeyboardView; // @synthesize possibleKeyboardView=_possibleKeyboardView;
@property(nonatomic) _Bool scrolledToBottom; // @synthesize scrolledToBottom=_scrolledToBottom;
@property(retain, nonatomic) NSArray *dataItemsArray; // @synthesize dataItemsArray=_dataItemsArray;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(copy, nonatomic) NSString *shortcutSource; // @synthesize shortcutSource=_shortcutSource;
@property(nonatomic) _Bool isPreviewingForPeek; // @synthesize isPreviewingForPeek=_isPreviewingForPeek;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) NSNumber *notificationType; // @synthesize notificationType=_notificationType;
@property(nonatomic, getter=isMiniStackVisible) _Bool miniStackVisible; // @synthesize miniStackVisible=_miniStackVisible;
@property(nonatomic) __weak TNDRMatchToChatAnimationController *animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic) __weak id <TNDRChatViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isReadyForPresentation) _Bool readyForPresentation; // @synthesize readyForPresentation=_readyForPresentation;
@property(retain, nonatomic) UIImage *matchImage; // @synthesize matchImage=_matchImage;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) _Bool showsLoading; // @synthesize showsLoading=_showsLoading;
@property(retain, nonatomic) UIView *avatarAndNameView; // @synthesize avatarAndNameView=_avatarAndNameView;
@property(readonly, nonatomic) TNDRMatch *match; // @synthesize match=_match;
- (void).cxx_destruct;
- (void)dismissMessageStandards:(id)arg1;
- (void)presentMessageStandards:(id)arg1;
- (void)didSelectUserInReportGroupMatchAtIndex:(long long)arg1;
- (void)dialogViewControllerDidTapActionButton:(id)arg1;
- (void)dialogViewControllerDidTapCancelButton:(id)arg1;
@property(readonly, nonatomic) _Bool matchSuperlikedUser;
@property(readonly, nonatomic) _Bool userSuperlikedMatch;
@property(readonly, nonatomic) long long matchType;
- (id)stringForReason:(unsigned long long)arg1;
@property(readonly, nonatomic) long long otherMessageCount;
@property(readonly, nonatomic) long long myMessageCount;
@property(readonly, copy, nonatomic) NSString *lastMessageFrom;
@property(readonly, nonatomic) _Bool hasUnsentMessage;
@property(readonly, copy, nonatomic) NSString *groupID;
@property(readonly, copy, nonatomic) NSString *otherID;
@property(readonly, copy, nonatomic) NSString *matchID;
- (void)didTapBannerViewBackgroundFadeView;
- (void)fadeInBackgroundFadeView;
- (void)fadeOutBackgroundFadeView;
- (void)didTapSendButton:(id)arg1 generatedText:(id)arg2;
- (void)didTapOnGoingOutBannerView:(id)arg1 generatedText:(id)arg2 shouldPopulateText:(_Bool)arg3;
- (_Bool)shouldShowGoingOutStatus;
- (id)navigationBarSnapShot;
- (id)textInputBarSnapShot;
- (void)blockMatch:(id)arg1 cancelTappedWithReason:(unsigned long long)arg2;
- (void)sendUnmatchOptionTapEventForReason:(unsigned long long)arg1;
- (void)blockMatch:(id)arg1 unmatchTappedWithReason:(unsigned long long)arg2;
- (void)blockMatch:(id)arg1 reasonTapped:(unsigned long long)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithAddress:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)openSafariViewControllerWithURL:(id)arg1;
- (void)viewingGIFAtIndexPath:(id)arg1;
- (void)GIFStrip:(id)arg1 willDisplayGIF:(id)arg2 inPosition:(long long)arg3;
- (void)GIFStrip:(id)arg1 didSelectGIF:(id)arg2 inPosition:(long long)arg3;
- (void)textDidUpdate:(_Bool)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dialogViewControllerBackgroundTapped:(id)arg1;
- (void)requestDismissReportDialogReportSucceeded;
- (void)requestDismissReportDialogCancelled;
- (void)reportOtherCancelTapped:(id)arg1;
- (void)reportOtherReportTapped:(id)arg1;
- (void)reportCancelTapped;
- (void)reportReasonSelected:(unsigned long long)arg1 index:(long long)arg2;
- (id)textViewForOverridingFirstResponder;
- (double)heightForEmojiText:(id)arg1;
- (double)heightForText:(id)arg1 lastMessage:(_Bool)arg2 leftMessage:(_Bool)arg3;
- (double)heightForSystemText:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)resetCellPositions;
- (void)adjustCellPositions:(double)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)normalizedCellTranslation;
- (void)handlePanGestures:(id)arg1;
- (void)setupGestureRecognizers;
- (_Bool)notificationWindow:(id)arg1 shouldShowNotification:(id)arg2;
- (void)hideKeyboardWithoutAnimation;
- (void)hideAndRemoveScreenshot;
- (id)keyboardScreenSnapshot;
- (void)showScreenshot;
- (void)didBlockMatchFromProfile;
- (void)didTapProfileDoneButton;
- (void)setupMatchProfilePreviewWithUser:(id)arg1;
- (void)showGroupMatchProfile;
- (void)showMatchProfileWithUser:(id)arg1;
- (void)showMatchProfile;
- (void)showGroupMatchProfileFromNoMessagesAvatar;
- (void)showMatchProfileFromNoMessagesAvatar;
- (void)showSingleMatchOrGroupMatchProfile;
- (id)numberofInsertsFromChanges:(id)arg1;
- (id)orderedSetOfInsertsFromChanges:(id)arg1;
- (_Bool)shouldBeConsideredLegalWithIndexPath:(id)arg1;
- (long long)numberOfIllegallInsertsFromControllerChanges:(id)arg1;
- (void)removeNoMessagesViewIfNecessary;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)didTapMapPreviewDoneButton;
@property(readonly, copy, nonatomic) NSArray *previewActionStubsForAnalytics;
- (id)previewActionItems;
- (void)restoreNavigationItem;
- (void)restoreRefreshHeader;
- (void)hideRefreshHeaderForPreviewing;
- (void)adjustContentForPop;
- (void)actionSheetBackgroundTapped:(id)arg1;
- (void)didRequestToLeaveGroup;
- (long long)analyticsMatchType;
- (void)actionSheet:(id)arg1 triggeredButtonWithID:(long long)arg2;
- (long long)indexOfButtonInActionSheet:(long long)arg1;
- (void)setupActionSheet;
- (id)specialHandlerWindow;
- (void)chatCellDidFinishAnimating:(id)arg1;
- (void)chatCellLikeWithIndexPath:(id)arg1 likeValue:(_Bool)arg2 withMessage:(id)arg3 messageID:(id)arg4;
- (void)chatCellDidTapHeart:(id)arg1 message:(id)arg2 withValue:(_Bool)arg3;
- (void)chatCellDidTapURL:(id)arg1 url:(id)arg2;
- (void)chatCellDidTapGIF:(id)arg1;
- (void)chatCellDidTapError:(id)arg1;
- (void)chatCellDidTapAvatar:(id)arg1;
- (void)paywallRequestsDismissal:(id)arg1;
- (void)didCompletePurchase:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)animateCellInsertionWithText:(id)arg1 indexPath:(id)arg2;
- (_Bool)validGroup;
- (void)didPressRightButton:(id)arg1;
- (void)didRequestToEnablePush:(id)arg1;
- (void)markMessagesViewed;
- (void)handleMuteButtonTapped;
- (id)viewControllerForReportMatch:(id)arg1;
- (id)viewControllerForReportGroupMatch:(id)arg1;
- (void)handleReportButtonTapped;
- (void)requestDismissUnmatchDialogUnmatchSucceeded:(_Bool)arg1;
- (void)handleBlockButtonTapped;
- (void)handleMoreButtonTapped:(id)arg1;
- (void)handleDoneButtonTapped:(id)arg1;
- (void)handleBackButtonTapped:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)shouldHideAutoCompletionViewOnKeyboardHide;
- (_Bool)slk_isIllogicalKeyboardStatus:(unsigned long long)arg1;
- (void)slk_reloadTextView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (double)slk_topBarsHeight;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)reloadOlderMessagesIfNeeded;
- (void)removeRefreshHeader;
- (void)handleLoadOlderMessages:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)adjustNavigationBarFrame:(_Bool)arg1;
- (void)adjustContentViewFrames:(_Bool)arg1;
- (void)adjustContentViewFrames;
- (void)scrollToBottomImmediate:(_Bool)arg1;
- (void)handlePostLayoutProcesses;
- (void)handleProgressNotificationReceived:(id)arg1;
- (void)handleGroupExpired:(id)arg1;
- (void)handleStatusBarFrameChanged:(id)arg1;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)gifButtonPressed:(id)arg1;
- (void)setAutoCompleting:(_Bool)arg1;
- (struct CGRect)keyboardPanningZoneFrame;
- (void)setGifModeEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)animateTextViewCornerRadiusTo:(double)arg1;
- (void)clearButtonForGIFsTapped:(id)arg1;
- (void)slk_hideAutoCompletionViewIfNeeded;
- (void)slk_enableTypingSuggestionIfNeeded;
- (void)setupGIFButtonForGIFMode;
- (void)setupGIFButtonForNormalMode;
- (void)viewDidLoad;
- (double)heightForAutoCompletionView;
- (id)autoCompletionView;
- (id)maskImage:(id)arg1 withMask:(id)arg2;
- (id)borderLayerAroundFrame:(struct CGRect)arg1 gradientTop:(id)arg2 gradientBottom:(id)arg3;
- (void)animateImageView:(id)arg1 timeLabel:(id)arg2 titleLabel:(id)arg3 label:(id)arg4 borderView:(id)arg5 iconImageView:(id)arg6;
- (void)setupNoMessagesView;
- (void)dismissCRMBannerAnimated:(_Bool)arg1;
- (void)setupCRMBanner;
@property(readonly, nonatomic) TNDRPushNotificationExperiment *pushNotificationExperiment;
- (void)setupTitleView;
- (id)setupChatMoreActionIcon;
- (void)setupNavigationBars;
- (void)setupRefreshHeaderOnCollectionView;
- (void)handlePeekPopGestures:(id)arg1;
@property(readonly, nonatomic) TNDRMatchesGoingOutExperiment *matchesGoingOutExperiment;
- (void)setup3DTouchCapablePreviewing;
- (void)setupMessagesData;
- (void)setupCollectionView;
- (void)setupCollectionViewDetails;
- (void)setupTextView;
- (void)setup;
- (id)initWithMatch:(id)arg1 cachedMatchImage:(id)arg2 animationDelegate:(id)arg3 currentUser:(id)arg4;
- (id)init;
@property(readonly, nonatomic) TNDRReportingV2Experiment *reportingV2Experiment;
@property(readonly, nonatomic) TNDRURLManager *urlManager;
@property(readonly, nonatomic) id <TNDRPerformanceTrackerProtocol> performanceTracker;
@property(readonly, nonatomic) TNDRAnalyticsTracker *analyticsTracker;
@property(readonly, nonatomic) TNDRCoreDataService *dataService;

// Remaining properties
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) TNDRSLKTextInputbar *textInputbar; // @dynamic textInputbar;

@end

