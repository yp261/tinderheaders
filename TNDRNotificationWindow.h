//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAGradientLayer, NSArray, NSString, NSTimer, TNDRAvatarClusterView, TNDRCoreDataService, TNDRNotification, UIButton, UIColor, UIImageView, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface TNDRNotificationWindow : UIWindow <UIGestureRecognizerDelegate>
{
    UIColor *_greenColor;
    UIColor *_blueColor;
    UIColor *_redColor;
    UIColor *_redBorderColor;
    UIColor *_greenBorderColor;
    UIColor *_blueBorderColor;
    double _delayTimeNextNotification;
    double _delayTimeAfterTap;
    double _delayTimeAfterTossAway;
    struct CGPoint _startPoint;
    struct CGPoint _curPoint;
    struct CGPoint _maxPoint;
    struct CGPoint _startAbsPoint;
    _Bool _visible;
    _Bool _paused;
    _Bool _presenting;
    UIView *_visibleNotificationView;
    NSArray *_notifications;
    UIView *_bannerView;
    UIView *_bottomBorder;
    UIImageView *_imageView;
    TNDRAvatarClusterView *_avatarClusterView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_accessoryView;
    UIButton *_accessoryButton;
    CAGradientLayer *_gradientLayer;
    UIImageView *_gripper;
    UIImageView *_imageViewIcon;
    UITapGestureRecognizer *_bannerTapGR;
    UIPanGestureRecognizer *_bannerPanGR;
    long long _currentNotificationType;
    TNDRNotification *_currentNotification;
    NSTimer *_presentNextTimer;
    NSTimer *_tryPresentingTimer;
}

+ (id)sharedNotificationWindow;
@property(getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) NSTimer *tryPresentingTimer; // @synthesize tryPresentingTimer=_tryPresentingTimer;
@property(retain, nonatomic) NSTimer *presentNextTimer; // @synthesize presentNextTimer=_presentNextTimer;
@property(retain, nonatomic) TNDRNotification *currentNotification; // @synthesize currentNotification=_currentNotification;
@property(nonatomic) long long currentNotificationType; // @synthesize currentNotificationType=_currentNotificationType;
@property(retain, nonatomic) UIPanGestureRecognizer *bannerPanGR; // @synthesize bannerPanGR=_bannerPanGR;
@property(retain, nonatomic) UITapGestureRecognizer *bannerTapGR; // @synthesize bannerTapGR=_bannerTapGR;
@property(retain, nonatomic) UIImageView *imageViewIcon; // @synthesize imageViewIcon=_imageViewIcon;
@property(retain, nonatomic) UIImageView *gripper; // @synthesize gripper=_gripper;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TNDRAvatarClusterView *avatarClusterView; // @synthesize avatarClusterView=_avatarClusterView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSArray *notifications; // @synthesize notifications=_notifications;
@property(readonly, nonatomic) UIView *visibleNotificationView; // @synthesize visibleNotificationView=_visibleNotificationView;
- (void).cxx_destruct;
- (struct CGSize)avatarSizeForRoundedBorderedImage;
- (void)prefetchImageWithURL:(id)arg1;
- (void)prefetchImageViewImageForNotification:(id)arg1;
- (void)removeFirstNotification;
- (id)avatarImageURLForUser:(id)arg1;
- (void)processCustomNotificationTypeWithNotification:(id)arg1;
- (void)updateNotificationImageViewsWithNotificationType:(long long)arg1;
- (void)updateImageViewWithTeamTinderAvatar;
- (void)updateImageViewWithGroup:(id)arg1;
- (void)updateImageViewWithURL:(id)arg1;
- (void)updateWithNotification:(id)arg1;
- (void)_endPresentingNotifications;
- (void)resumePresentingNotifications;
- (void)pausePresentingNotifications;
- (void)presentNextNotification;
- (void)beginPresentingNotifications;
- (void)_tossAwayBannerCompletion:(CDUnknownBlockType)arg1;
- (void)_hideBannerCompletion:(CDUnknownBlockType)arg1;
- (void)_showBannerCompletion:(CDUnknownBlockType)arg1;
- (void)hideBannerCompletion:(CDUnknownBlockType)arg1;
- (void)showBannerWithNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGAffineTransform)affineTransformTranslateUpAndOut;
- (void)resetNotificationFrames;
- (id)applicationKeyWindow;
- (id)activeViewController;
- (id)activeDelegate;
- (_Bool)shouldAllowInteractionForNotification:(id)arg1;
- (long long)displayPermissionForNotification:(id)arg1;
- (void)queueNotification:(id)arg1;
- (void)removeAllNotifications;
- (void)handleBannerPan:(id)arg1;
- (void)handleBannerTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setupGestureRecognizers;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)obtainPermanentIDsForObject:(id)arg1;
- (void)notifyBoostExpiration;
- (void)notifyDiscountExpirationWithMessage:(id)arg1;
- (void)notifyWithCustomMessage:(id)arg1 title:(id)arg2 image:(id)arg3 color:(long long)arg4 action:(CDUnknownBlockType)arg5;
- (void)notifyWithCustomMessage:(id)arg1 title:(id)arg2 image:(id)arg3 color:(long long)arg4;
- (void)notifyWithFailedSuperLikeGroupAskRetry:(id)arg1;
- (void)notifyWithFailedSuperLikeUserAskRetry:(id)arg1;
- (void)notifyWithFailedSuperLikeUndo:(id)arg1;
- (void)notifyWithNewFastMatch:(id)arg1;
- (void)notifyWithNewMatch:(id)arg1;
- (void)notifyWithNewMatch:(id)arg1 notificationType:(long long)arg2;
- (void)notifyWithExternalServiceConnectedMessage:(id)arg1 title:(id)arg2 image:(id)arg3 color:(long long)arg4;
- (void)notifyWithNetworkFailureErrorMessage:(id)arg1 title:(id)arg2;
- (void)notifyWithPlayBackErrorMessage:(id)arg1 title:(id)arg2;
- (void)notifyWithNewMessageText:(id)arg1 name:(id)arg2 matchID:(id)arg3 likeMessage:(_Bool)arg4;
- (void)notifyWithNewGroupMessageText:(id)arg1 name:(id)arg2 user:(id)arg3 matchID:(id)arg4 isMuted:(_Bool)arg5;
- (void)notifyWithNewMessageText:(id)arg1 name:(id)arg2 match:(id)arg3 likeMessage:(_Bool)arg4;
- (void)notifyWithFailedMessage:(id)arg1;
- (void)notifyWithNewMessage:(id)arg1;
- (void)becomeKeyWindow;
- (struct CGRect)defaultBannerFrame;
- (void)setupTryPresentingTimer;
- (struct CGRect)defaultImageFrame;
- (void)setupAccessoryView;
- (void)setupAccessoryButton;
- (void)setupDetailLabel;
- (void)setupTitleLabel;
- (void)setupClusterView;
- (void)setupImageViews;
- (void)setupGradientLayer;
- (void)setupBannerViewWithFrame:(struct CGRect)arg1;
- (void)setupBannerColors;
- (void)setupDelayTimes;
- (void)setupWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) TNDRCoreDataService *dataService;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
