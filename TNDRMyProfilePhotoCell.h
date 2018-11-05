//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TNDRGradientLabel, TNDRMyProfilePhotoData, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface TNDRMyProfilePhotoCell : UICollectionViewCell
{
    _Bool _hideButtons;
    _Bool _photoUploadInProgress;
    _Bool _dimForAnimation;
    _Bool _clearMask;
    _Bool _willAnimate;
    UIButton *_deleteButton;
    UIButton *_addButton;
    UIImageView *_photo;
    TNDRMyProfilePhotoData *_photoData;
    UILabel *_photoNumberLabel;
    long long _photoNumber;
    long long _revertToIndex;
    unsigned long long _visibleButton;
    UIActivityIndicatorView *_photoUploadIndicator;
    TNDRGradientLabel *_gradientLabel;
}

@property(retain, nonatomic) TNDRGradientLabel *gradientLabel; // @synthesize gradientLabel=_gradientLabel;
@property(retain, nonatomic) UIActivityIndicatorView *photoUploadIndicator; // @synthesize photoUploadIndicator=_photoUploadIndicator;
@property(nonatomic) _Bool willAnimate; // @synthesize willAnimate=_willAnimate;
@property(nonatomic) _Bool clearMask; // @synthesize clearMask=_clearMask;
@property(nonatomic) unsigned long long visibleButton; // @synthesize visibleButton=_visibleButton;
@property(nonatomic) long long revertToIndex; // @synthesize revertToIndex=_revertToIndex;
@property(nonatomic) _Bool dimForAnimation; // @synthesize dimForAnimation=_dimForAnimation;
@property(nonatomic) _Bool photoUploadInProgress; // @synthesize photoUploadInProgress=_photoUploadInProgress;
@property(nonatomic) _Bool hideButtons; // @synthesize hideButtons=_hideButtons;
@property(nonatomic) long long photoNumber; // @synthesize photoNumber=_photoNumber;
@property(retain, nonatomic) UILabel *photoNumberLabel; // @synthesize photoNumberLabel=_photoNumberLabel;
@property(copy, nonatomic) TNDRMyProfilePhotoData *photoData; // @synthesize photoData=_photoData;
@property(readonly, nonatomic) UIImageView *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(readonly, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)placeHolderImage;
- (void)applyLayoutAttributes:(id)arg1;
- (id)makeButtonWithImage:(id)arg1 isAdd:(_Bool)arg2;
- (void)makeButtons;
- (void)prepareForReuse;
- (void)maskOff:(_Bool)arg1;
- (void)updateMask;
@property(readonly, nonatomic) _Bool isOptimizedResultBestPhoto;
- (id)numberLabelTextForBestPhoto;
- (void)adjustContentColorForBestPhoto:(_Bool)arg1;
- (void)makeMaskForRect:(struct CGRect)arg1;
- (void)makeMask;
- (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (void)adjustPhotoNumberLabelIfBestPhoto:(_Bool)arg1;
- (void)makePhotoNumberLabelShadow;
- (void)updateImage;
- (void)makePhotoNumberLabel;
- (void)makePhotoUploadIndicator;
- (void)makePhotoView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

