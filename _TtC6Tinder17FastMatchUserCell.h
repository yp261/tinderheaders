//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PINRemoteImageManager, TNDRLikeGamepadButton, TNDRPassGamepadButton, UIImageView, UIView, _TtC6Tinder17FastMatchInfoView;

@interface _TtC6Tinder17FastMatchUserCell : UICollectionViewCell
{
    // Error parsing type: , name: imageManager.storage
    // Error parsing type: , name: imageView
    // Error parsing type: , name: likeStampView
    // Error parsing type: , name: superLikeStampView
    // Error parsing type: , name: passStampView
    // Error parsing type: , name: likeButton
    // Error parsing type: , name: passButton
    // Error parsing type: , name: infoView
    // Error parsing type: , name: leftToRight
    // Error parsing type: , name: delegate
    // Error parsing type: , name: _rating
}

- (CDUnknownBlockType).cxx_destruct;
- (void)prepareForReuse;
- (void)passButtonTapped;
- (void)likeButtonTapped;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic, readonly) _Bool leftToRight; // @synthesize leftToRight;
@property(nonatomic, readonly) _TtC6Tinder17FastMatchInfoView *infoView; // @synthesize infoView;
@property(nonatomic, readonly) TNDRPassGamepadButton *passButton; // @synthesize passButton;
@property(nonatomic, readonly) TNDRLikeGamepadButton *likeButton; // @synthesize likeButton;
@property(nonatomic, readonly) UIView *passStampView; // @synthesize passStampView;
@property(nonatomic, readonly) UIView *superLikeStampView; // @synthesize superLikeStampView;
@property(nonatomic, readonly) UIView *likeStampView; // @synthesize likeStampView;
@property(nonatomic, readonly) UIImageView *imageView; // @synthesize imageView;
@property(nonatomic, retain) PINRemoteImageManager *imageManager;

@end
