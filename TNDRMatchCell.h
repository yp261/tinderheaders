//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "TNDRRowActionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, TNDRAvatarClusterView, TNDRMatchImage, TNDROpaqueNetworkImageView, TNDRReportingV2Experiment, TNDRRowActionView, UIImageView, UILabel, UIPanGestureRecognizer, UIView, _TtC6Tinder15MatchBadgesView;
@protocol TNDRMatchCellRowActionGestureDelegate;

@interface TNDRMatchCell : UITableViewCell <UIGestureRecognizerDelegate, TNDRRowActionViewDelegate>
{
    _Bool _isReplyFromMe;
    _Bool _isMyGroup;
    TNDRMatchImage *_matchImage;
    NSArray *_groupMembers;
    id <TNDRMatchCellRowActionGestureDelegate> _delegate;
    TNDRAvatarClusterView *_avatarClusterView;
    UIView *_containerView;
    TNDRRowActionView *_unmatchRowActionView;
    TNDRRowActionView *_reportRowActionView;
    _TtC6Tinder15MatchBadgesView *_matchBadgesView;
    NSLayoutConstraint *_badgesWidthConstraint;
    UIPanGestureRecognizer *_rowActionPanGestureRecognizer;
    UIImageView *_statusIndicatorImageView;
    UILabel *_nameLabel;
    UILabel *_messageLabel;
    UIImageView *_replyArrowImageView;
    TNDROpaqueNetworkImageView *_avatarImageView;
    UIView *_separatorView;
    NSLayoutConstraint *_messageLabelWithReplyConstraint;
    NSLayoutConstraint *_messageLabelWithoutReplyConstraint;
    long long _targetActionState;
    long long _currentRowActionState;
}

@property(nonatomic) long long currentRowActionState; // @synthesize currentRowActionState=_currentRowActionState;
@property(nonatomic) long long targetActionState; // @synthesize targetActionState=_targetActionState;
@property(retain, nonatomic) NSLayoutConstraint *messageLabelWithoutReplyConstraint; // @synthesize messageLabelWithoutReplyConstraint=_messageLabelWithoutReplyConstraint;
@property(retain, nonatomic) NSLayoutConstraint *messageLabelWithReplyConstraint; // @synthesize messageLabelWithReplyConstraint=_messageLabelWithReplyConstraint;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) TNDROpaqueNetworkImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *replyArrowImageView; // @synthesize replyArrowImageView=_replyArrowImageView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *statusIndicatorImageView; // @synthesize statusIndicatorImageView=_statusIndicatorImageView;
@property(retain, nonatomic) UIPanGestureRecognizer *rowActionPanGestureRecognizer; // @synthesize rowActionPanGestureRecognizer=_rowActionPanGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *badgesWidthConstraint; // @synthesize badgesWidthConstraint=_badgesWidthConstraint;
@property(retain, nonatomic) _TtC6Tinder15MatchBadgesView *matchBadgesView; // @synthesize matchBadgesView=_matchBadgesView;
@property(retain, nonatomic) TNDRRowActionView *reportRowActionView; // @synthesize reportRowActionView=_reportRowActionView;
@property(retain, nonatomic) TNDRRowActionView *unmatchRowActionView; // @synthesize unmatchRowActionView=_unmatchRowActionView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TNDRAvatarClusterView *avatarClusterView; // @synthesize avatarClusterView=_avatarClusterView;
@property(nonatomic) __weak id <TNDRMatchCellRowActionGestureDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(retain, nonatomic) TNDRMatchImage *matchImage; // @synthesize matchImage=_matchImage;
@property(nonatomic) _Bool isMyGroup; // @synthesize isMyGroup=_isMyGroup;
@property(nonatomic) _Bool isReplyFromMe; // @synthesize isReplyFromMe=_isReplyFromMe;
- (void).cxx_destruct;
- (void)displaySlideToUnmatchReportTutorial;
- (void)didTapOnRowActionWithType:(long long)arg1;
- (long long)numberOfRowActionViews;
- (_Bool)shouldStartRowActionPanGesture;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)hideRowActionViews;
- (void)showRowActionViews;
- (void)handlePanGestures:(id)arg1;
- (void)refreshRowActionState;
- (void)refreshRowActionViewsVisibilities;
- (void)refreshReplyArrowViewConstraints;
- (void)refreshBackgroundColorsWhenHighlightedOrSelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupSeparatorViewConstraints;
- (void)setupMessageLabelConstraints;
- (void)setupReplyArrowConstraints;
- (void)setupNameLabelConstraints;
- (void)setupUnMatchRowActionConstraints;
- (void)setupReportRowActionConstraints;
- (void)setupMatchBadgeViewConstraints;
- (void)setupStatusIndicatorImageViewConstraints;
- (void)setupAvatarImageViewConstraints;
- (void)setupAutolayout;
- (_Bool)resetRowActionContainerViewIfNeeded;
- (void)setupBackground;
- (void)setup;
@property(readonly, nonatomic) TNDRReportingV2Experiment *reportingV2Experiment;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

