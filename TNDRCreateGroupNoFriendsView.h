//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TNDRInviteFriendsButton, UIImageView, UILabel;

@interface TNDRCreateGroupNoFriendsView : UIView
{
    TNDRInviteFriendsButton *_inviteFriendsButton;
    UIView *_container;
    UIImageView *_noFriendsIconIV;
    UILabel *_noFriendsLabel;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UILabel *noFriendsLabel; // @synthesize noFriendsLabel=_noFriendsLabel;
@property(retain, nonatomic) UIImageView *noFriendsIconIV; // @synthesize noFriendsIconIV=_noFriendsIconIV;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) TNDRInviteFriendsButton *inviteFriendsButton; // @synthesize inviteFriendsButton=_inviteFriendsButton;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setup;
- (id)init;

@end

