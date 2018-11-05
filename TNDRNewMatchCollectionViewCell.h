//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, TNDRAvatarClusterView, TNDRCurrentUser, TNDRMatch, TNDRMatchImage, TNDRNetworkImageView, UIImage, UIImageView, UILabel;

@interface TNDRNewMatchCollectionViewCell : UICollectionViewCell
{
    TNDRMatch *_match;
    NSArray *_groupMembers;
    UILabel *_nameLabel;
    TNDRMatchImage *_matchImage;
    TNDRNetworkImageView *_avatarImageView;
    UIImageView *_dotView;
    UIImageView *_superLikeStar;
    UIImageView *_boostBolt;
    UIImageView *_fastMatchHeart;
    TNDRAvatarClusterView *_avatarClusterView;
    UIImageView *_mutedImageView;
    TNDRCurrentUser *_currentUser;
}

@property(retain, nonatomic) TNDRCurrentUser *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) UIImageView *mutedImageView; // @synthesize mutedImageView=_mutedImageView;
@property(retain, nonatomic) TNDRAvatarClusterView *avatarClusterView; // @synthesize avatarClusterView=_avatarClusterView;
@property(retain, nonatomic) UIImageView *fastMatchHeart; // @synthesize fastMatchHeart=_fastMatchHeart;
@property(retain, nonatomic) UIImageView *boostBolt; // @synthesize boostBolt=_boostBolt;
@property(retain, nonatomic) UIImageView *superLikeStar; // @synthesize superLikeStar=_superLikeStar;
@property(retain, nonatomic) UIImageView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) TNDRNetworkImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) TNDRMatchImage *matchImage; // @synthesize matchImage=_matchImage;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSArray *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(retain, nonatomic) TNDRMatch *match; // @synthesize match=_match;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (id)placeholderImageOfSize:(struct CGSize)arg1;
- (struct CGSize)defaultAvatarSize;
- (double)defaultBorderWidth;
@property(readonly, nonatomic) UIImage *avatarImage;
- (_Bool)canShowFastMatchHeart;
@property(readonly, nonatomic) _Bool canShowBoostBolt;
- (_Bool)isBoostFeatureEnabled;
- (void)showFastMatchHeart:(_Bool)arg1;
- (void)showBoostBolt:(_Bool)arg1;
- (void)showSuperLikeStar:(_Bool)arg1;
- (void)setupBadgeVisibilityFor:(id)arg1;
- (void)setupNameLabel;
- (void)setupMutedImageView;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

