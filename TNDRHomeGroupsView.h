//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRHomePanelBaseView.h"

@class NSArray, NSLayoutConstraint, NSString, NSTimer, TNDRAvatarArcView, TNDRGradientButton, TNDRHomeActionBar, UIButton, UILabel;
@protocol TNDRHomeGroupsViewDelegate;

@interface TNDRHomeGroupsView : TNDRHomePanelBaseView
{
    long long _homeGroupsState;
    id <TNDRHomeGroupsViewDelegate> _delegate;
    TNDRAvatarArcView *_avatarView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    TNDRHomeActionBar *_actionBar;
    NSString *_createGroupFirstTimeTitle;
    NSString *_createGroupTitle;
    NSString *_leaveGroupTitle;
    NSString *_extendGroupTitle;
    NSString *_disbandGroupTitle;
    NSString *_createNewGroupTitle;
    NSString *_groupExpiredTitle;
    NSString *_initialGroupsTitle;
    NSString *_initialGroupsDescription;
    NSArray *_groupMembers;
    NSLayoutConstraint *_actionBarBottomPinConstraint;
    NSLayoutConstraint *_actionBarHeightConstraint;
    NSLayoutConstraint *_createGroupButtonConstraints;
    NSLayoutConstraint *_descriptionTopConstraint;
    NSLayoutConstraint *_avatarTitleConstraint;
    NSArray *_actionBarHorizPinConstraints;
    NSTimer *_groupExpiryTimer;
    TNDRGradientButton *_createGroupButton;
    UIButton *_learnMoreButton;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) TNDRGradientButton *createGroupButton; // @synthesize createGroupButton=_createGroupButton;
@property(retain, nonatomic) NSTimer *groupExpiryTimer; // @synthesize groupExpiryTimer=_groupExpiryTimer;
@property(copy, nonatomic) NSArray *actionBarHorizPinConstraints; // @synthesize actionBarHorizPinConstraints=_actionBarHorizPinConstraints;
@property(retain, nonatomic) NSLayoutConstraint *avatarTitleConstraint; // @synthesize avatarTitleConstraint=_avatarTitleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *descriptionTopConstraint; // @synthesize descriptionTopConstraint=_descriptionTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *createGroupButtonConstraints; // @synthesize createGroupButtonConstraints=_createGroupButtonConstraints;
@property(retain, nonatomic) NSLayoutConstraint *actionBarHeightConstraint; // @synthesize actionBarHeightConstraint=_actionBarHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *actionBarBottomPinConstraint; // @synthesize actionBarBottomPinConstraint=_actionBarBottomPinConstraint;
@property(copy, nonatomic) NSArray *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(copy, nonatomic) NSString *initialGroupsDescription; // @synthesize initialGroupsDescription=_initialGroupsDescription;
@property(copy, nonatomic) NSString *initialGroupsTitle; // @synthesize initialGroupsTitle=_initialGroupsTitle;
@property(copy, nonatomic) NSString *groupExpiredTitle; // @synthesize groupExpiredTitle=_groupExpiredTitle;
@property(copy, nonatomic) NSString *createNewGroupTitle; // @synthesize createNewGroupTitle=_createNewGroupTitle;
@property(copy, nonatomic) NSString *disbandGroupTitle; // @synthesize disbandGroupTitle=_disbandGroupTitle;
@property(copy, nonatomic) NSString *extendGroupTitle; // @synthesize extendGroupTitle=_extendGroupTitle;
@property(copy, nonatomic) NSString *leaveGroupTitle; // @synthesize leaveGroupTitle=_leaveGroupTitle;
@property(copy, nonatomic) NSString *createGroupTitle; // @synthesize createGroupTitle=_createGroupTitle;
@property(copy, nonatomic) NSString *createGroupFirstTimeTitle; // @synthesize createGroupFirstTimeTitle=_createGroupFirstTimeTitle;
@property(retain, nonatomic) TNDRHomeActionBar *actionBar; // @synthesize actionBar=_actionBar;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TNDRAvatarArcView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak id <TNDRHomeGroupsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long homeGroupsState; // @synthesize homeGroupsState=_homeGroupsState;
- (void).cxx_destruct;
- (double)infoFontSize;
- (double)titleFontSize;
- (double)fontMultiplier;
- (id)metricsForAutoLayout;
- (double)maxLabelWidth;
- (id)viewsForAutoLayout;
- (id)titleLabelForActiveGroupText:(id)arg1;
- (void)updateViewsForGroupMembers:(id)arg1 title:(id)arg2 isExpired:(_Bool)arg3;
- (void)updateViewsForGroupMembers:(id)arg1 title:(id)arg2 expirationDate:(id)arg3 groupStatus:(id)arg4;
- (void)createGroupAction:(id)arg1;
- (CDUnknownBlockType)createGroupAction;
- (CDUnknownBlockType)leaveGroupAction;
- (CDUnknownBlockType)extendGroupAction;
- (CDUnknownBlockType)disbandGroupAction;
- (id)extendGroupIcon;
- (id)leaveGroupIcon;
- (double)heightOfActionBar;
- (void)updateActionBarForPillMode:(_Bool)arg1;
- (void)updateWithNewUserData:(id)arg1;
- (id)actionBarHorizPinConstraintsForPill:(_Bool)arg1;
- (id)actionBarHeightConstraintForPercentage:(double)arg1;
- (void)setupCreateGroupButtonConstraints;
- (void)setupActionBarConstraints;
- (void)setupDescriptionLabelConstraints;
- (void)setupTitleLabelConstraints;
- (void)updateAvatarToTitleConstraintSpacingForGroup:(_Bool)arg1;
- (double)avatarTitleOffsetWhenInGroup;
- (double)avatarTitleOffsetDefault;
- (void)setupAvatarViewConstraints;
- (void)setupConstraints;
- (void)setupCreateGroupButton;
- (void)setupActionBar;
- (void)setupLabels;
- (id)textColorForGroupText;
- (id)colorForGroupButtonsContent;
- (void)setupAvatarView;
- (void)setupStrings;
- (void)setup;
- (void)dealloc;
- (id)init;

@end
