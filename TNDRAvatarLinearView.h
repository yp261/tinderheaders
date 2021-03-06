//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, NSURL, TNDRHomeViewModel, UIButton, UIImage, UIImageView;

@interface TNDRAvatarLinearView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _expired;
    UIView *_avatarContainerView;
    NSArray *_groupMembers;
    NSArray *_avatarImages;
    long long _viewType;
    UIButton *_avatar1;
    UIButton *_avatar2;
    UIButton *_avatar3;
    UIButton *_avatar4;
    UIImage *_cachedAvatarImage;
    double _defaultAvatarSize;
    NSArray *_avatarHeightConstraints;
    NSLayoutConstraint *_avatarRightConstraint;
    TNDRHomeViewModel *_viewModel;
    NSURL *_lastLoadedAvatarURL;
    NSLayoutConstraint *_avatarContainerRightPinConstraint;
    NSArray *_relativeConstraints;
    NSArray *_spacedConstraints;
    long long _indexOfSelected;
    UIImageView *_expiredMainAvatar;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIImageView *expiredMainAvatar; // @synthesize expiredMainAvatar=_expiredMainAvatar;
@property(nonatomic) long long indexOfSelected; // @synthesize indexOfSelected=_indexOfSelected;
@property(retain, nonatomic) NSArray *spacedConstraints; // @synthesize spacedConstraints=_spacedConstraints;
@property(retain, nonatomic) NSArray *relativeConstraints; // @synthesize relativeConstraints=_relativeConstraints;
@property(retain, nonatomic) NSLayoutConstraint *avatarContainerRightPinConstraint; // @synthesize avatarContainerRightPinConstraint=_avatarContainerRightPinConstraint;
@property(retain, nonatomic) NSURL *lastLoadedAvatarURL; // @synthesize lastLoadedAvatarURL=_lastLoadedAvatarURL;
@property(retain, nonatomic) TNDRHomeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSLayoutConstraint *avatarRightConstraint; // @synthesize avatarRightConstraint=_avatarRightConstraint;
@property(retain, nonatomic) NSArray *avatarHeightConstraints; // @synthesize avatarHeightConstraints=_avatarHeightConstraints;
@property(nonatomic) double defaultAvatarSize; // @synthesize defaultAvatarSize=_defaultAvatarSize;
@property(retain, nonatomic) UIImage *cachedAvatarImage; // @synthesize cachedAvatarImage=_cachedAvatarImage;
@property(retain, nonatomic) UIButton *avatar4; // @synthesize avatar4=_avatar4;
@property(retain, nonatomic) UIButton *avatar3; // @synthesize avatar3=_avatar3;
@property(retain, nonatomic) UIButton *avatar2; // @synthesize avatar2=_avatar2;
@property(retain, nonatomic) UIButton *avatar1; // @synthesize avatar1=_avatar1;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic, getter=isExpired) _Bool expired; // @synthesize expired=_expired;
@property(retain, nonatomic) NSArray *avatarImages; // @synthesize avatarImages=_avatarImages;
@property(retain, nonatomic) NSArray *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
- (void).cxx_destruct;
- (id)viewsForAutolayout;
- (id)widthConstraintForAvatar:(id)arg1;
- (id)heightConstraintsForAvatarNum:(long long)arg1;
- (void)resetAvatars;
- (void)updateUserInteractionForState;
- (void)resetAndUpdateViewsForNewData;
- (void)handleButtonTap:(id)arg1;
- (void)updateAllImages;
- (void)selectAvatarAtIndex:(long long)arg1;
- (void)refresh;
- (void)layoutSubviews;
- (void)setupConstraintsForLinearViewType:(long long)arg1;
- (void)setupAvatarContainerRightPinConstraintTo:(id)arg1;
- (void)setupAvatarSpacedPositionConstraints;
- (void)setupAvatarRelativePositionConstraints;
- (void)resetAvatarContainerViewSubviewConstraints;
- (void)setupAvatarBaseConstraints;
- (void)setupAvatarContainerConstraints;
- (void)setupConstraintsForExpiredAvatar;
- (void)setupConstraints;
- (id)avatarsForUsers;
- (id)roundedImageFromImage:(id)arg1 selected:(_Bool)arg2;
- (void)updateUserAvatar;
- (void)loadCachedAvatarImages;
- (void)retrieveAvatarImages;
- (void)updateImage:(id)arg1 forButton:(id)arg2;
- (void)setupVariedPlaceholders;
- (id)placeholderImage;
- (void)setupPlaceholders;
- (id)avatarImageButton;
- (id)placeholderAvatarImage;
- (void)setupBaseAvatarsNum:(long long)arg1 withPlaceholders:(_Bool)arg2;
- (void)setup;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithViewType:(long long)arg1 defaultAvatarSize:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

