//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

@interface _TtC6Tinder17ChatUserTitleView : UIView
{
    // Error parsing type: , name: imageView
    // Error parsing type: , name: nameLabel
    // Error parsing type: , name: defaultAvatarImage
    // Error parsing type: , name: verifiedImageView
    // Error parsing type: , name: verified
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setUpVerifiedBadgeIfNeededWithType:(id)arg1 color:(id)arg2;
- (void)setUpImageViewWithImage:(id)arg1 imageURL:(id)arg2;
- (void)setUpAutoLayout;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 imageURL:(id)arg2 image:(id)arg3 badgeType:(id)arg4 badgeColor:(id)arg5;
@property(nonatomic) _Bool verified; // @synthesize verified;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic, readonly) UIImage *defaultAvatarImage; // @synthesize defaultAvatarImage;

@end

